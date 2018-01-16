#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>

#include "hep_hpc/hdf5/File.hpp"
#include "hep_hpc/hdf5/make_column.hpp"
#include "hep_hpc/hdf5/make_ntuple.hpp"
#include "hep_hpc/hdf5/PropertyList.hpp"
#include "NtupleTypes.h"

#include "RecoTracksUtils.h"

using namespace hep_hpc::hdf5;
using namespace RECOTRACKS_ANA;

// I know this must be available in some header somewhere, but it is way
// easier to just put a copy here than go find that header...
const int32_t PDG_PROTON = 2212;
const int32_t PDG_NEUTRON = 2112;
const int32_t PDG_PIPLUS = 211;
const int32_t PDG_PIZERO = 111;
const int32_t PDG_PIMINUS = -211;
const int32_t PDG_KPLUS = 321;
const int32_t PDG_KMINUS = -321;
const int32_t PDG_SIGMAPLUS = 3222;
const int32_t PDG_SIGMAMINIUS = 3112;

const int32_t PDG_ELECTRON = 11;
const int32_t PDG_NUE = 12;
const int32_t PDG_MUON = 13;
const int32_t PDG_NUMU = 14;
const int32_t PDG_TAU = 15;
const int32_t PDG_NUTAU = 16;

const int32_t PDG_POSITRON = -11;
const int32_t PDG_NUEBAR = -12;
const int32_t PDG_ANTIMUON = -13;
const int32_t PDG_NUMUBAR = -14;
const int32_t PDG_ANTITAU = -15;
const int32_t PDG_NUTAUBAR = -16;


int Skim(int n_max_evts, int chunk_size, double max_z,
        std::string filebasename, int impose_nukecc_cuts,
        int first_segment_index, int first_event_number,
        bool is_data, std::string ntuple_list_file,
        bool norm_to_max)
{
    RecoTracksUtils utils;
    //! Get MC Tree
    /* you basically always want n_mcfiles = -1 to get all files... */
    TChain* tree_mc = utils.getMCTree("NukeCC", ntuple_list_file, -1, false);
    int entries_mc = tree_mc->GetEntries();
    EnhNukeCC* mc = new EnhNukeCC( tree_mc );

    std::cout << "Loaded chain with " << entries_mc << " events." << std::endl;

    std::string hdf5_name = filebasename + ".hdf5";
    File hdffile(hdf5_name, H5F_ACC_TRUNC);

    // views
    std::vector<float> xs_1d;
    std::vector<float> us_1d;
    std::vector<float> vs_1d;
    std::vector<float> xs_1d_t;
    std::vector<float> us_1d_t;
    std::vector<float> vs_1d_t;

    auto eventdat = make_ntuple({hdffile, "event_data"},
            make_scalar_column<unsigned long int>("eventids"),
            make_scalar_column<unsigned int>("eventids_a"),
            make_scalar_column<unsigned int>("eventids_b"),
            make_scalar_column<unsigned char>("segments"),
            make_scalar_column<unsigned short int>("planecodes"),
            make_scalar_column<float>("zs")
            ); 
    auto imgdat = make_ntuple({hdffile, "img_data"},
            make_column<float, 3>("hitimes-x", {2, 127, 94}),
            make_column<float, 3>("hitimes-u", {2, 127, 47}),
            make_column<float, 3>("hitimes-v", {2, 127, 47})
            );
    auto gendat = make_ntuple({hdffile, "gen_data"},
            make_scalar_column<unsigned int>("current"),
            make_scalar_column<unsigned int>("int_type"),
            make_scalar_column<unsigned int>("targetZ"),
            make_scalar_column<float>("W"),
            make_scalar_column<float>("x"),
            make_scalar_column<float>("y"),
            make_scalar_column<float>("Q2")
            ); 
    /* - need a bit of thought on the hadron mult structure
    */
    auto hadrodat = make_ntuple({hdffile, "hadro_data"},
            make_scalar_column<uint32_t>("n_protons"),
            make_scalar_column<uint32_t>("n_neutrons"),
            make_scalar_column<uint32_t>("n_chgdpions"),
            make_scalar_column<uint32_t>("n_neutpions"),
            make_scalar_column<uint32_t>("n_chgdkaons"),
            make_scalar_column<uint32_t>("n_others"),
            make_scalar_column<uint32_t>("n_hadmultmeas"),
            make_scalar_column<float>("esum_protons"),
            make_scalar_column<float>("esum_neutrons"),
            make_scalar_column<float>("esum_chgdpions"),
            make_scalar_column<float>("esum_neutpions"),
            make_scalar_column<float>("esum_chgdkaons"),
            make_scalar_column<float>("esum_others"),
            make_scalar_column<float>("esum_hadmultmeas")
            ); 

    int i = first_event_number;
    int n_proc = 0;
    if (n_max_evts < 0) {
        n_proc = entries_mc;
    }
    else {
        n_proc = n_max_evts < entries_mc ? n_max_evts : entries_mc;
    }
    n_proc += first_event_number;
    for (i = first_event_number; i < n_proc; ++i) {

        if ((i + 1) % 100 == 0) {
            std::cout << "Processed " << i << " / " << entries_mc << " ( " << 
                double(i)/entries_mc * 100.0 << " \%) events..." << std::endl;
        }
        mc->GetEntry(i);

        // skip the event if z is too far downstream
        double true_z = -1e6;
        if (!is_data) true_z = mc->mc_vtx[2];
        if (true_z > max_z) {
            continue;
        }
        unsigned char segment = 0xFF;
        unsigned short int planecode = 0xFFFF;
        if (!is_data) {
            segment = (unsigned char)utils.getSegmentForZPosition(true_z);
            planecode = (unsigned short int)utils.getPlaneIdCode(mc);
        }

        for (unsigned int j = 0; j < mc->getLatticeSize(); ++j) {
            double energy_at_idx = mc->latticeNormEnergySums[j];
            double time_at_idx = mc->latticeRelativeTimes[j];
            unsigned int idx = (unsigned int)mc->latticeEnergyIndices[j];
            std::string view = mc->getStringViewFromLatticePos(idx);
            if (view == "X") {
                xs_1d.push_back(energy_at_idx);
                xs_1d_t.push_back(time_at_idx);
            }
            else if (view == "U") {
                us_1d.push_back(energy_at_idx);
                us_1d_t.push_back(time_at_idx);
            }
            else if (view == "V") {
                vs_1d.push_back(energy_at_idx);
                vs_1d_t.push_back(time_at_idx);
            }
        }

        int run, subrun, gate, slice;
        if (is_data) {
            run = mc->ev_run;
            subrun = mc->ev_subrun;
            gate = mc->ev_gate;
            slice = mc->physEvtNum;
        } 
        else {
            run =  mc->mc_run;
            subrun = mc->mc_subrun;
            gate = mc->mc_nthEvtInFile;
            slice = mc->slice_numbers[0];
        }
        uint64_t evtid = utils.computeEventId(run, subrun, gate, slice);
        uint32_t evtia = utils.computeEventId32a(run, slice);
        uint32_t evtib = utils.computeEventId32b(subrun, gate);
        // std::cout << "i =  " << i << " " <<
        //     " run = " << run << " " <<
        //     " subrun = " << subrun << " " <<
        //     " gate = " << gate << " " <<
        //     " slice = " << slice << " " << std::endl;

        uint32_t current = mc->mc_current;
        uint32_t int_type = mc->mc_intType;
        uint32_t targetZ = (uint32_t)mc->mc_targetZ;
        double W = mc->mc_w;
        double x_bj = mc->mc_Bjorkenx;
        double y_bj = mc->mc_Bjorkeny;
        double Q2 = mc->mc_Q2;

        std::vector<int> pdgs;
        std::vector<double> energies;
        uint32_t n_protons = 0;
        uint32_t n_neutrons = 0;
        uint32_t n_chgdpions = 0;
        uint32_t n_neutpions = 0;
        uint32_t n_chgdkaons = 0;
        uint32_t n_others = 0;
        uint32_t n_hadmultmeas = 0;
        float esum_protons = 0.0;
        float esum_neutrons = 0.0;
        float esum_chgdpions = 0.0;
        float esum_neutpions = 0.0;
        float esum_chgdkaons = 0.0;
        float esum_others = 0.0;
        float esum_hadmultmeas = 0.0;
        utils.getFSParticles(mc, pdgs, energies);
        for (std::vector<int>::size_type i = 0; i != pdgs.size(); ++i) {
            int pdg_i = pdgs[i];
            double ke_i = energies[i];
            if (pdg_i == PDG_PROTON && ke_i > 50.0) {
                n_protons += 1;
                esum_protons += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            else if (pdg_i == PDG_NEUTRON && ke_i > 50.0) {
                n_neutrons += 1;
                esum_neutrons += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            else if ((pdg_i == PDG_PIPLUS || pdg_i == PDG_PIMINUS) && ke_i > 50.0) {
                n_chgdpions += 1;
                esum_chgdpions += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            else if (pdg_i == PDG_PIZERO && ke_i > 50.0) {
                n_neutpions += 1;
                esum_neutpions += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            else if ((pdg_i == PDG_KPLUS || pdg_i == PDG_KMINUS) && ke_i > 50.0) {
                n_chgdkaons += 1;
                esum_chgdkaons += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            // TODO - make a separate data stash for leptons!
            else {
                n_others += 1;
                esum_others += ke_i;
            }
        }

        // now, append time data to the end of the energy vectors
        xs_1d.insert(xs_1d.end(), xs_1d_t.begin(), xs_1d_t.end());
        us_1d.insert(us_1d.end(), us_1d_t.begin(), us_1d_t.end());
        vs_1d.insert(vs_1d.end(), vs_1d_t.begin(), vs_1d_t.end());

        eventdat.insert(evtid, evtia, evtib, segment, planecode, true_z);
        imgdat.insert(xs_1d.data(), us_1d.data(), vs_1d.data());
        gendat.insert(current, int_type, targetZ, W, x_bj, y_bj, Q2);
        hadrodat.insert(
                n_protons, n_neutrons, n_chgdpions, n_neutpions, n_chgdkaons, n_others, n_hadmultmeas,
                esum_protons, esum_neutrons, esum_chgdpions, esum_neutpions, esum_chgdkaons, esum_others, esum_hadmultmeas
                );

        xs_1d.clear();
        xs_1d_t.clear();
        us_1d.clear();
        us_1d_t.clear();
        vs_1d.clear();
        vs_1d_t.clear();
    } // end for loop over events

    return 0;
} // end Skim

int main( int argc, char *argv[]) try {

    int optind = 1;
    int chunk_size = 100000;
    int max_evts = -1;  
    double max_z = 6172.29; // module 31
    std::string filebase = "nukecc_skim_me1Bmc_zsegments";
    std::string ntuple_list_file = "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160825-0829_minerva13Cmc.txt";
    int impose_nukecc_cuts = 1;
    int first_segment_index = 0;
    int first_event_number = 0;
    bool is_data = false;
    bool norm_to_max = false;

    while ((optind < argc) && (argv[optind][0]=='-')) {
        std::string sw = argv[optind];
        if (sw=="-c") {
            optind++;
            chunk_size = atoi(argv[optind]);
        }
        else if (sw=="-m") {
            optind++;
            max_evts = atoi(argv[optind]);
        }
        else if (sw=="-z") {
            optind++;
            max_z = atof(argv[optind]);
        }
        else if (sw=="-f") {
            optind++;
            filebase = argv[optind];
        }
        else if (sw=="-i") {
            optind++;
            impose_nukecc_cuts = atoi(argv[optind]);
        }
        else if (sw=="-s") {
            optind++;
            first_segment_index = atoi(argv[optind]);
        }
        else if (sw=="-e") {
            optind++;
            first_event_number = atoi(argv[optind]);
        }
        else if (sw=="-d") {
            is_data = true;
        }
        else if (sw=="-x") {
            norm_to_max = true;
        }
        else if (sw=="-n") {
            optind++;
            ntuple_list_file = argv[optind];
        }
        optind++;
    }

    std::cout << "Producing skim..." << std::endl;
    std::cout << " max_evts = " << max_evts << std::endl;
    std::cout << " chunk_size = " << chunk_size << std::endl;
    std::cout << " true max_z = " << max_z << std::endl;
    std::cout << " impose nuke cc reco cuts = " << impose_nukecc_cuts << std::endl;
    std::cout << " file base name = " << filebase << std::endl;
    std::cout << " first evt # = " << first_event_number << std::endl;
    std::cout << " first segment # = " << first_segment_index << std::endl;
    std::cout << " is data = " << is_data << std::endl;
    std::cout << " ntuple list file = " << ntuple_list_file << std::endl;
    std::cout << " norm to max energy = " << norm_to_max << std::endl;

    int status = Skim(max_evts, chunk_size, max_z, filebase,
            impose_nukecc_cuts, first_segment_index, first_event_number,
            is_data, ntuple_list_file, norm_to_max);
    return status;

} catch (std::exception const& ex) {
    std::cerr << ex.what() << '\n';
    return 1;
} catch (...) {
    std::cerr << "Unidentifiable exception caught\n";
    return 1;
}

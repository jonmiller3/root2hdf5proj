// #include "PlotUtils/MnvApplication.h"
// #include <PlotUtils/MnvH1D.h>
#include "RecoTracksUtils.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <gzstream.h>

#define DEBUG_LEVEL 100

using namespace RECOTRACKS_ANA;

bool PassCurvature(const EnhNukeCC* mc, double cutval) 
{
    if (mc->NukeCC_minos_used_curvature != 1) return true;  // pass
    return (double)(1 / (mc->NukeCC_minos_trk_eqp_qp)) <= cutval;
}

bool PassMuCoilCut(const EnhNukeCC* mc, double coilR, double maxR)
{
    const double coilXPos = 1219.0;
    const double coilYPos = 393.0;
    const double minos_x = mc->NukeCC_minos_trk_end_x + coilXPos;
    const double minos_y = mc->NukeCC_minos_trk_end_y + coilYPos;
    double minosR = sqrt( pow(minos_x,2) + pow(minos_y,2) );
    return (minosR > coilR && minosR < maxR );
}

int Skim(int n_max_evts, int chunk_size, double max_z,
        std::string filebasename, int impose_nukecc_cuts,
        int first_segment_index, int first_event_number,
        bool is_data, std::string ntuple_list_file,
        bool norm_to_max)
{
    /* you basically always want n_mcfiles = -1 to get all files... */
    RecoTracksUtils utils;

    //! Get MC Tree
    TChain* tree_mc = utils.getMCTree("NukeCC", ntuple_list_file, -1, false);
    int entries_mc = tree_mc->GetEntries();
    EnhNukeCC* mc = new EnhNukeCC( tree_mc );

    std::cout << "Loaded chain with " << entries_mc << " events." << std::endl;

    const double max_curvature = -5.0;
    const double min_minos_coil_radius = 210.0;   // mm
    const double max_minos_coil_radius = 2500.0;  // mm
    const double min_nu_e = (2.0 * 1000.0);
    const double max_nu_e = (50.0 * 1000.0);

    // std::ofstream skim_file;
    ogzstream skim_file;
    char file_name[200];
    bool open_new_file = true;
    int chunk_number = first_segment_index;

    int i = first_event_number;
    int used_events = 0;
    for (i = first_event_number; i < entries_mc; ++i) {

        if ((i + 1) % 100 == 0) {
            std::cout << "Processed " << i << " / " << entries_mc << " ( " << 
                double(i)/entries_mc * 100.0 << " \%) events..." << std::endl;
        }
        mc->GetEntry(i);

        if (open_new_file) {
            // Oh C++ and your strings...
            std::stringstream ss;
            ss << filebasename << std::setfill('0') << std::setw(4) << chunk_number << ".dat.gz";
            const std::string& tmp = ss.str();
            sprintf(file_name, tmp.c_str());
            skim_file.open(file_name);
            std::cout << "--> Opening file " << file_name << " for chunk " << chunk_number << 
                " for new event " << i << std::endl;


            // make the comment line that specifies the lattice size
            skim_file << "# Lattice Size: " << mc->getLatticeSize()
                << "; z cut = " << max_z << std::endl;

            // make the comment line to remind the user how to interpret entries
            skim_file << "# Entry interp: view:relative_time " << 
                "(order is monotic increasing in Z, all of bucket 0, then 1, ...)"
                << std::endl;

            // make the comment line that decodes the lattice index, if it matters
            skim_file << "# Run Subrun Gate/NthMCEvt Slices[0] ";
            for (unsigned int j = 0; j < mc->getLatticeSize(); ++j) {
                unsigned int lattice_idx = (unsigned int)mc->latticeEnergyIndices[j];
                skim_file << " " << lattice_idx;
            }
            skim_file << std::endl;
            open_new_file = false;
        }

        if (impose_nukecc_cuts > 0) {
            // skip the event if it fails "tdead"
            if (mc->phys_n_dead_discr_pair_upstream_prim_track_proj > 0) {
                continue;
            }
            // skip the event if the neutrino energy is out of the window
            if (mc->NukeCC_E < min_nu_e) {
                continue;
            }
            if (mc->NukeCC_E > max_nu_e) {
                continue;
            }
            // skip the event if the muon is high-angle
            if (mc->muon_theta > 17.0) {
                continue;
            }
            // skip the event if the reco `(x, y)` is out of the fiducial hexagon
            if (mc->NukeCC_in_fiducial_area != 1) {
                continue;
            }
            // skip the event if the curvature is not significant enough
            if (!PassCurvature(mc, max_curvature)) {
                continue;
            }
            // skip th event if it fails the MINOS coil cut
            if (!PassMuCoilCut(mc, min_minos_coil_radius, max_minos_coil_radius)) {
                continue;
            } 
        }
        // skip the event if z is too far downstream
        double true_z = -1e6;
        if (!is_data) true_z = mc->mc_vtx[2];
        if (true_z > max_z) {
            continue;
        }

        // check for an energy...
        double some_e = 0.0;
        for (unsigned int j = 0; j < mc->getLatticeSize(); ++j) {
            double energy_at_idx = mc->latticeNormEnergySums[j];
            if (energy_at_idx > some_e) {
                some_e = energy_at_idx;
                break;
            }
        }
        double max_t_exc = 0;
        double norm_factor = 1.0;
        if (norm_to_max) {
            for (unsigned int j = 0; j < mc->getLatticeSize(); ++j) {
                if (abs(mc->latticeRelativeTimes[j]) > max_t_exc) {
                    max_t_exc = abs(mc->latticeRelativeTimes[j]);
                }   
            }
            norm_factor = max_t_exc;
        }

        // if some e is gt 0, we have an event 
        // loop through all indices and record them
        if (some_e > 0.0) {
            std::stringstream ss;
            if (is_data) {
                ss << " " << mc->ev_run << " " << mc->ev_subrun << " " <<
                    mc->ev_gate << " " << mc->physEvtNum;
            } 
            else {
                ss << " " << mc->mc_run << " " << mc->mc_subrun << " " <<
                    mc->mc_nthEvtInFile << " " << mc->slice_numbers[0];
            }
            skim_file << ss.str();
            for (unsigned int j = 0; j < mc->getLatticeSize(); ++j) {
                double time_at_idx = mc->latticeRelativeTimes[j] / norm_factor;
                unsigned int idx = (unsigned int)mc->latticeEnergyIndices[j];
                // unsigned int module = mc->getModuleFromLatticePos(idx);
                // unsigned int plane = mc->getPlaneFromLatticePos(idx);
                std::string view = mc->getStringViewFromLatticePos(idx);
                // unsigned int bucket = mc->getBucketFromLatticePos(idx);
                std::stringstream ss;
                ss << " " << view << ":" << time_at_idx;
                skim_file << ss.str();
            }
            skim_file << std::endl;
        }

        used_events += 1;
        if ((used_events + 1) % chunk_size == 0) {
            skim_file.close();
            std::cout << "-- Closing file for chunk " << chunk_number << 
                " after finishing event " << i << std::endl;
            chunk_number += 1;
            open_new_file = true;
        }

        // stop if we have enough
        if (n_max_evts > 0) {
            if (i > n_max_evts) {
                std::cout << "Reached early stopping condition at " << i << std::endl;
                // if (skim_file.is_open()) 
                skim_file.close();
                break;
            }
        }

    } // end for loop over events

    // if (skim_file.is_open()) {
        std::cout << "-- Closing FINAL file for chunk " << chunk_number << 
            " after finishing event " << i << std::endl;
        skim_file.close();
    // }

    std::cout << "Finished " << i << " events." << std::endl;
    // delete utils;

    return 0;
}

int main( int argc, char *argv[])
{
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
    std::cout << " norm to max abs(time) = " << norm_to_max << std::endl;

    int status = Skim(max_evts, chunk_size, max_z, filebase,
            impose_nukecc_cuts, first_segment_index, first_event_number,
            is_data, ntuple_list_file, norm_to_max);
    return status;
}

#ifndef RECOTRACKSUTILS_cxx
#define RECOTRACKSUTILS_cxx 1

#include "RecoTracksUtils.h"
#include "TChainElement.h"
#include "TMath.h"
#include "TVector2.h"
#include <iostream>
using namespace RECOTRACKS_ANA;

//----------------------------------------------------------------------------
RecoTracksUtils::RecoTracksUtils()
{
    loaded_pot_mc = false;
}

//----------------------------------------------------------------------------
RecoTracksUtils::~RecoTracksUtils()
{
}

//----------------------------------------------------------------------------
RecoTracksUtils& RecoTracksUtils::Get(){
    static RecoTracksUtils singleton;
    return singleton;
}

//============================================================================
// Build a TChain of MC files
// @name = 
//============================================================================
TChain* RecoTracksUtils::getMCTree(std::string name,
        const std::string& file_name,
        int files_to_read,
        bool calc_POT)
{
    TChain* chain  = new TChain( "chain" );
    TChain* tree   = new TChain( name.c_str() );

    if (name=="Truth")
    {
        get_truth_files( chain, file_name );
    }
    else if (name=="RecoTracks" || 
            name=="Meta" || 
            name=="NukeCC" || 
            name=="MLVFSamplePrepTool")
    {
        get_mc_files( chain, file_name );
    }
    else
    {
        std::cout << "RecoTracksUtils::getMCTree Did not find TTree with name: "
            << name.c_str() << std::endl;
    }

    int nfiles = 0;
    if( files_to_read > 0 ){
        TObjArray *fileElements=chain->GetListOfFiles();
        TIter next(fileElements);
        TChainElement *chEl=0;
        int count = 1;
        while (( chEl=(TChainElement*)next() ) && count <= files_to_read ) {
            if( count >= 1 ){
                tree->Add(chEl->GetTitle());
                nfiles++;
            }
            count++;
        }
    }
    else{
        TObjArray *fileElements=chain->GetListOfFiles();
        TIter next(fileElements);
        TChainElement *chEl=0;
        while (( chEl=(TChainElement*)next() )) {
            tree->Add(chEl->GetTitle());
            nfiles++;
        }
    }

    std::cout << "loaded " << nfiles << " MC files: " << name << std::endl;
    std::cout<< "loaded pot = " << loaded_pot_mc<<  std::endl;

    if (calc_POT && name != "Meta" && !loaded_pot_mc) {
        std::cout<<"Trying to find MC POT"<<std::endl;
        TChain *meta = getMCTree( "Meta", file_name, files_to_read );
        setPOTMC( meta, name );
        delete meta;
    }

    delete chain;

    return tree;
}

//----------------------------------------------------------------------------
double RecoTracksUtils::getPOTMC( bool single_nu_mc ){

    if( loaded_pot_mc ) return global_pot_mc;
    else{
        std::cout << "You have not loaded a MC Tree!  use getMCTree()" << std::endl;
        return 0;
    }
}

//----------------------------------------------------------------------------
std::vector< std::string > RecoTracksUtils::split_line( std::string line, const char* split_var )
{
    std::vector< std::string > col;
    std::string str = "";

    for(unsigned int i = 0; i < line.size(); i++) {
        std::string s(1,line[i]);
        if( s.find(split_var) != std::string::npos ) { col.push_back( str ); str.clear(); }
        else {
            str += s;
            if( i == line.size()-1 ) col.push_back( str );
        }
    }

    return col;
}

//----------------------------------------------------------------------------
void RecoTracksUtils::setPOTMC( TChain *mc, const std::string& name )
{
    std::cout<<"Number of MC files = "<< std::endl;
    TObjArray* files = mc->GetListOfFiles();
    int subruns = 0;

    TIter next(files);
    TChainElement* file = 0;

    std::string split_marker = "_" + name;

    while( (file=(TChainElement*)next()) ) {

        std::string name = std::string(file->GetTitle()).substr(
                std::string(file->GetTitle()).find("SIM"));
        if( (int)name.find("Subruns") == -1 ) continue;

        name = name.erase( name.find(split_marker) );
        name = name.substr( name.find("Subruns") + std::string("Subruns_").length() );

        std::vector< std::string > subs = split_line(name,"-");

        subruns += (int)subs.size();
        subs.clear();
    }
    std::cout<< "Number of subruns in file list = "<< subruns << std::endl;

    //-------------------------------------------------
    // Monte Carlo is treated like data ONLY IF it is 
    // overlay MC which properly handles spill-by-spill 
    // intensity
    // For SINGLE NU MC, simply multiply the number of 
    // analyzed files by the known pot-per-file
    //-------------------------------------------------
    double total_pot_mc = 0;
    total_pot_mc = subruns * POT_per_MC_file;
    loaded_pot_mc = true;
    global_pot_mc = total_pot_mc;
    std::cout << "MC pot = " << total_pot_mc << std::endl;

}

//----------------------------------------------------------------------------
void RecoTracksUtils::getPOT( double& total_pot_mc, bool single_nu_mc )
{
    total_pot_mc = getPOTMC( single_nu_mc );

    std::cout << "MC pot   = " << total_pot_mc << std::endl;
}

//----------------------------------------------------------------------------
void RecoTracksUtils::writePOT( TFile *f )
{
    double mc   = getPOTMC();
    double data = mc;
    TVector2 *pot = new TVector2( data, mc );

    f->WriteTObject( pot, "pot" );
}

//----------------------------------------------------------------------------
int RecoTracksUtils::getTargetForZPosition(double z, double extraToleranceUp,
        double extraToleranceDown, bool useNukeCCZdefs) const
{
    const double targets_z[5] = {target1_z, target2_z, target3_z, target4_z, target5_z};
    const double targets_w[5] = {target1_thickestW, target2_thickestW, target3_thickestW,
        target4_thickestW, target5_thickestW};

    double z_up[5] = {0., 0., 0., 0., 0.};
    double z_dn[5] = {0., 0., 0., 0., 0.};
    if (useNukeCCZdefs) {
        z_up[0] = target1_up_trk;
        z_dn[0] = target1_dn_trk;
        //
        z_up[1] = target2_up_trk;
        z_dn[1] = target2_dn_trk;
        //
        z_up[2] = target3_up_trk;
        z_dn[2] = target3_dn_trk;
        //
        z_up[3] = target4_up_trk;
        z_dn[3] = target4_dn_trk;
        //
        z_up[4] = target5_up_trk;
        z_dn[4] = target5_dn_trk;
        //
    }
    else {
        for (int i = 0; i < 5; ++i) {
            z_up[i] = targets_z[i] - targets_w[i] / 2.0 - extraToleranceUp;
            z_dn[i] = targets_z[i] + targets_w[i] / 2.0 + extraToleranceDown;
        }
    }

    for (int i = 0; i < 5; ++i) {
        if ((z > z_up[i]) && (z < z_dn[i])) {
            return i + 1;
        }
    }
    return 0;
}

//----------------------------------------------------------------------------
int RecoTracksUtils::getSegmentForZPosition(double z, double extraToleranceUp, 
        double extraToleranceDown, bool useNukeCCZdefs) const
{
    int target = getTargetForZPosition(z, extraToleranceUp, extraToleranceDown);
    if (target != 0) {
        return target;
    }
    else if (z < target1_z) {
        return 0; // upstream of all targs
    }
    else if (z < target2_z) {
        return 6;
    }
    else if (z < target3_z) {
        return 7;
    }
    else if (z < target4_z) {
        return 8;
    }
    else if (z < target5_z) {
        return 9;
    }
    return 10; // downstream of all targs
}

//----------------------------------------------------------------------------
int RecoTracksUtils::getPlaneIdCode(const EnhNukeCC* mc) const
{
    int vtx_module = mc->truth_vtx_module;
    int vtx_plane  = mc->truth_vtx_plane;
    int target     = mc->truth_targetID;

    if (target == 0 && (vtx_module == -999 || vtx_plane == -999)) {
        return -1;
    }
    if (target > 0) {
        return target;
    }
    // target is 3 bits, 0->5, plane is 2 bits, 1->2, need module+5 (no neg)
    return target + (vtx_plane << 3) + ((vtx_module + 5) << 5);
}

//----------------------------------------------------------------------------
void RecoTracksUtils::getFSParticles(const EnhNukeCC* mc,
        std::vector<int>& pdgs,
        std::vector<double>& energies) const
{
    for (int i = 0; i < mc->mc_nFSPart; ++i) {
        double m2 = TMath::Power(mc->mc_FSPartE[i], 2.0) -
            TMath::Power(mc->mc_FSPartPx[i], 2.0) -
            TMath::Power(mc->mc_FSPartPy[i], 2.0) -
            TMath::Power(mc->mc_FSPartPz[i], 2.0);
        double m = m2 > 0.0 ? TMath::Sqrt(m2) : 0.0;
        double ke = mc->mc_FSPartE[i] - m;
        pdgs.push_back(mc->mc_FSPartPDG[i]);
        energies.push_back(ke);
    }
}

#endif

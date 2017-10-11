#ifndef RECO_TRACKS_GET_FILES_H
#define RECO_TRACKS_GET_FILES_H

#include "TChain.h"
#include <fstream>

namespace RECOTRACKS_ANA{

  void get_mc_files(TChain* tree, const std::string& fname){

    std::ifstream f(fname.c_str()); 

    // minerva13Cmc
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160825-0829_minerva13Cmc.txt" ); 

    // minerva ME1A data, with time lattice 
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160805_me1Adata.txt" ); 
    // test...
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160805_me1Adata_tiny.txt" ); 

    // minerva ME1B data, with time lattice 
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160801_me1Bdata.txt" ); 
    // test...
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160801_me1Bdata_tiny.txt" ); 

    // minerva ME1B, with time lattice (need both lists...)
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160715-16_112200-112204.txt" ); 
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160719_112205.txt" ); 

    // minerva1
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160701_10200-10249.txt" ); 
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160630_10200-10249.txt" ); 

    // minerva ME1B, contains 20160320 and 20160321
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160321_112200-05_127x94.txt" ); 

    // minerva ME1A
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160406_117200-117209.txt" ); 

    // testers...
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160715_10200.txt" ); 
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160406_117200_small.txt" ); 
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160320-20160321_112200_127x94_medium.txt" ); 
    // std::ifstream f( "/minerva/data/users/perdue/RecoTracks/files/nukecc_117200-tiny.txt" ); 

    while( f.good() ){

      // read line
      std::string line;
      getline( f, line );

      // skip empty and comment lines
      if( line.empty() ) continue;
      if( line.find( "#" )!=std::string::npos ) continue;

      // add file into tree
      tree->Add( line.c_str() );

    }

  }

  void get_truth_files(TChain* tree, const std::string& fname){
    get_mc_files(tree, fname); 
  }

};

#endif

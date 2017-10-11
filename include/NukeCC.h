//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct  6 12:08:07 2017 by ROOT version 5.34/05
// from TTree NukeCC/Tuple created by an AnaTuple managed by AnaTupleManager
// found on file: SIM_minerva_00117200_Subruns_0002_NukeCCInclusive_Ana_Tuple_v10r8p12.root
//
// It contains some modifications to deal with stupid ROOT STL errors and some const values
//////////////////////////////////////////////////////////

#ifndef NukeCC_h
#define NukeCC_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
// #include "/grid/fermiapp/minerva/software_releases/lcgcmake/build/lcg_61/projects/ROOT-5.34.05/src/ROOT/5.34.05/cint/cint/lib/prec_stl/vector"

// Fixed size dimensions of array or collections stored in the TTree if any.

namespace RECOTRACKS_ANA {
    class NukeCC {
        public :
            TTree          *fChain;   //!pointer to the analyzed TTree or TChain
            Int_t           fCurrent; //!current Tree number in a TChain

            static const size_t MAX_USACT_EXTENT = 250;
            static const size_t MAX_MC_FR_NNUANCESTORIDS = 4*10;
            static const size_t MAX_MC_ER_NPART = 50;
            static const size_t MAX_MC_NFSPART = 25;
            static const size_t MAX_N_PRONGS = 15;
            static const size_t MAX_N_SLICES = 3;
            static const size_t MAX_GENIE_WGT_N_SHIFTS = 7;
            static const size_t MAX_MC_WGT_GENIE_SZ = 100;
            static const size_t MAX_MC_WGT_FLUX_TERTIARY_SZ = 100;
            static const size_t MAX_MC_WGT_FLUX_NA49_SZ = 100;
            static const size_t MAX_MC_WGT_FLUX_BEAMFOCUS_SZ = 100;

            // Declaration of leaf types
            Double_t        eventID;
            Int_t           physEvtNum;
            Int_t           n_hyps;
            Int_t           processType;
            Int_t           primaryPart;
            Int_t           n_slices;
            Int_t           slice_numbers[MAX_N_SLICES];   //[n_slices]
            Int_t           shared_slice;
            Double_t        vtx[4];
            Double_t        vtxErr[4];
            Double_t        E[4];
            Int_t           reco_vertex_batch;
            Bool_t          found_truth;
            Bool_t          phys_front_activity;
            Bool_t          phys_energy_in_road_upstream_is_rockmuon_consistent;
            Bool_t          rock_muons_removed;
            Bool_t          minos_track_match;
            Bool_t          minos_stub_match;
            Bool_t          unknown_helicity;
            Bool_t          minos_track_inside_partial_plane;
            Bool_t          prim_vtx_has_misassigned_track_direction;
            Bool_t          prim_vtx_has_broken_track;
            Bool_t          pass_NukeCC;
            Bool_t          short_track_vtx_used;
            Bool_t          muon_sp_moved;
            Bool_t          vtx_fit_converged;
            Bool_t          muon_is_correct;
            Bool_t          has_int_vtx;
            Bool_t          has_bad_object;
            Bool_t          has_muon;
            Bool_t          muon_has_charge;
            Bool_t          has_good_vtx;
            Bool_t          is_rock_muon;
            Int_t           MuonTaggedAsVetoButNotMatched;
            Int_t           NonVetoMuonExtrpToVeto;
            Int_t           NonVetoMuonWallOnePaddle;
            Int_t           NonVetoMuonWallOnePaddleOverlap;
            Int_t           NonVetoMuonWallOneSector;
            Int_t           NonVetoMuonWallTwoPaddle;
            Int_t           NonVetoMuonWallTwoPaddleOverlap;
            Int_t           NonVetoMuonWallTwoSector;
            Int_t           VetoMuonWallOnePaddle;
            Int_t           VetoMuonWallOnePaddleOverlap;
            Int_t           VetoMuonWallOneSector;
            Int_t           VetoMuonWallOneTypeOfMatchNonOverlap;
            Int_t           VetoMuonWallOneTypeOfMatchOverlap;
            Int_t           VetoMuonWallTwoPaddle;
            Int_t           VetoMuonWallTwoPaddleOverlap;
            Int_t           VetoMuonWallTwoSector;
            Int_t           VetoMuonWallTwoTypeOfMatchNonOverlap;
            Int_t           VetoMuonWallTwoTypeOfMatchOverlap;
            Int_t           blob_disp_nBlobs;
            Int_t           blob_disp_nClus;
            Int_t           blob_disp_nClus_ecal;
            Int_t           blob_disp_nClus_hcal;
            Int_t           blob_disp_nClus_nucl;
            Int_t           blob_disp_nClus_od;
            Int_t           blob_disp_nClus_tracker;
            Int_t           blob_iso_nBlobs;
            Int_t           blob_iso_nClus;
            Int_t           blob_iso_nClus_ecal;
            Int_t           blob_iso_nClus_hcal;
            Int_t           blob_iso_nClus_nucl;
            Int_t           blob_iso_nClus_od;
            Int_t           blob_iso_nClus_tracker;
            Int_t           blob_mufuzz_nBlobs;
            Int_t           blob_mufuzz_nClus;
            Int_t           blob_mufuzz_nClus_ecal;
            Int_t           blob_mufuzz_nClus_hcal;
            Int_t           blob_mufuzz_nClus_nucl;
            Int_t           blob_mufuzz_nClus_od;
            Int_t           blob_mufuzz_nClus_tracker;
            Int_t           blob_recoil_nBlobs;
            Int_t           blob_recoil_nClus;
            Int_t           blob_recoil_nClus_ecal;
            Int_t           blob_recoil_nClus_hcal;
            Int_t           blob_recoil_nClus_nucl;
            Int_t           blob_recoil_nClus_od;
            Int_t           blob_recoil_nClus_tracker;
            Int_t           blob_vtx_nBlobs;
            Int_t           blob_vtx_nClus;
            Int_t           blob_vtx_nClus_ecal;
            Int_t           blob_vtx_nClus_hcal;
            Int_t           blob_vtx_nClus_nucl;
            Int_t           blob_vtx_nClus_od;
            Int_t           blob_vtx_nClus_tracker;
            Int_t           broken_track_most_us_plane;
            Int_t           muon_n_USclusters;
            Int_t           muon_truthMatch_track_id;
            Int_t           n_indices;
            Int_t           n_prim_long_tracks;
            Int_t           n_prim_short_tracks;
            Int_t           n_start_vertices;
            Int_t           n_tracks;
            Int_t           n_tracks_non_prim;
            Int_t           n_tracks_prim;
            Int_t           n_tracks_prim_forked;
            Int_t           n_tracks_prim_kinked;
            Int_t           n_vertices_startpoint;
            Int_t           passVetoMuonCut;
            Int_t           phys_energy_in_road_downstream_nplanes;
            Int_t           phys_energy_in_road_upstream_nplanes;
            Int_t           phys_n_dead_discr_pair;
            Int_t           phys_n_dead_discr_pair_in_prim_track_region;
            Int_t           phys_n_dead_discr_pair_two_mod_downstream_prim_track;
            Int_t           phys_n_dead_discr_pair_two_mod_upstream_prim_vtx;
            Int_t           phys_n_dead_discr_pair_upstream_prim_track_proj;
            Int_t           phys_vertex_is_fiducial;
            Int_t           rock_muon_code;
            Int_t           truth_has_michel_electron;
            Int_t           usact_extent_huge;
            Int_t           usact_extent_inf;
            Int_t           usact_extent_large;
            Int_t           usact_extent_normal;
            Int_t           usact_extent_small;
            Int_t           usact_extent_texas_sized;
            Int_t           usact_extent_tiny;
            Int_t           usact_n_consecutive_huge;
            Int_t           usact_n_consecutive_inf;
            Int_t           usact_n_consecutive_large;
            Int_t           usact_n_consecutive_normal;
            Int_t           usact_n_consecutive_small;
            Int_t           usact_n_consecutive_texas_sized;
            Int_t           usact_n_consecutive_tiny;
            Int_t           usact_n_planes_huge;
            Int_t           usact_n_planes_inf;
            Int_t           usact_n_planes_large;
            Int_t           usact_n_planes_normal;
            Int_t           usact_n_planes_small;
            Int_t           usact_n_planes_texas_sized;
            Int_t           usact_n_planes_tiny;
            Double_t        NonVetoMuonWallOneBadPosX;
            Double_t        NonVetoMuonWallOneBadPosY;
            Double_t        NonVetoMuonWallOnePosX;
            Double_t        NonVetoMuonWallOnePosY;
            Double_t        NonVetoMuonWallOne_ANDEfficiency_Central;
            Double_t        NonVetoMuonWallOne_ANDEfficiency_Overlap;
            Double_t        NonVetoMuonWallOne_ANDError_Central;
            Double_t        NonVetoMuonWallOne_ANDError_Overlap;
            Double_t        NonVetoMuonWallOne_AccRatesError_PaddleAbove;
            Double_t        NonVetoMuonWallOne_AccRatesError_PaddleBelow;
            Double_t        NonVetoMuonWallOne_AccRates_PaddleAbove;
            Double_t        NonVetoMuonWallOne_AccRates_PaddleBelow;
            Double_t        NonVetoMuonWallOne_OREfficiency_Central;
            Double_t        NonVetoMuonWallOne_OREfficiency_Overlap;
            Double_t        NonVetoMuonWallOne_ORError_Central;
            Double_t        NonVetoMuonWallOne_ORError_Overlap;
            Double_t        NonVetoMuonWallTwoBadPosX;
            Double_t        NonVetoMuonWallTwoBadPosY;
            Double_t        NonVetoMuonWallTwoPosX;
            Double_t        NonVetoMuonWallTwoPosY;
            Double_t        NonVetoMuonWallTwo_ANDEfficiency_Central;
            Double_t        NonVetoMuonWallTwo_ANDEfficiency_Overlap;
            Double_t        NonVetoMuonWallTwo_ANDError_Central;
            Double_t        NonVetoMuonWallTwo_ANDError_Overlap;
            Double_t        NonVetoMuonWallTwo_AccRatesError_PaddleAbove;
            Double_t        NonVetoMuonWallTwo_AccRatesError_PaddleBelow;
            Double_t        NonVetoMuonWallTwo_AccRates_PaddleAbove;
            Double_t        NonVetoMuonWallTwo_AccRates_PaddleBelow;
            Double_t        NonVetoMuonWallTwo_OREfficiency_Central;
            Double_t        NonVetoMuonWallTwo_OREfficiency_Overlap;
            Double_t        NonVetoMuonWallTwo_ORError_Central;
            Double_t        NonVetoMuonWallTwo_ORError_Overlap;
            Double_t        VetoMuonWallOneDeltaTime;
            Double_t        VetoMuonWallOnePosX;
            Double_t        VetoMuonWallOnePosY;
            Double_t        VetoMuonWallOne_ANDEfficiency_Central;
            Double_t        VetoMuonWallOne_ANDEfficiency_Overlap;
            Double_t        VetoMuonWallOne_ANDError_Central;
            Double_t        VetoMuonWallOne_ANDError_Overlap;
            Double_t        VetoMuonWallOne_AccRatesError_PaddleAbove;
            Double_t        VetoMuonWallOne_AccRatesError_PaddleBelow;
            Double_t        VetoMuonWallOne_AccRates_PaddleAbove;
            Double_t        VetoMuonWallOne_AccRates_PaddleBelow;
            Double_t        VetoMuonWallOne_OREfficiency_Central;
            Double_t        VetoMuonWallOne_OREfficiency_Overlap;
            Double_t        VetoMuonWallOne_ORError_Central;
            Double_t        VetoMuonWallOne_ORError_Overlap;
            Double_t        VetoMuonWallTwoDeltaTime;
            Double_t        VetoMuonWallTwoPosX;
            Double_t        VetoMuonWallTwoPosY;
            Double_t        VetoMuonWallTwo_ANDEfficiency_Central;
            Double_t        VetoMuonWallTwo_ANDEfficiency_Overlap;
            Double_t        VetoMuonWallTwo_ANDError_Central;
            Double_t        VetoMuonWallTwo_ANDError_Overlap;
            Double_t        VetoMuonWallTwo_AccRatesError_PaddleAbove;
            Double_t        VetoMuonWallTwo_AccRatesError_PaddleBelow;
            Double_t        VetoMuonWallTwo_AccRates_PaddleAbove;
            Double_t        VetoMuonWallTwo_AccRates_PaddleBelow;
            Double_t        VetoMuonWallTwo_OREfficiency_Central;
            Double_t        VetoMuonWallTwo_OREfficiency_Overlap;
            Double_t        VetoMuonWallTwo_ORError_Central;
            Double_t        VetoMuonWallTwo_ORError_Overlap;
            Double_t        blob_ccqe_recoil_E;
            Double_t        blob_disp_E;
            Double_t        blob_disp_E_ecal;
            Double_t        blob_disp_E_ecal_em;
            Double_t        blob_disp_E_ecal_highn;
            Double_t        blob_disp_E_ecal_lown;
            Double_t        blob_disp_E_ecal_meson;
            Double_t        blob_disp_E_ecal_midn;
            Double_t        blob_disp_E_ecal_mu;
            Double_t        blob_disp_E_ecal_other;
            Double_t        blob_disp_E_ecal_p;
            Double_t        blob_disp_E_ecal_xtalk;
            Double_t        blob_disp_E_em;
            Double_t        blob_disp_E_hcal;
            Double_t        blob_disp_E_hcal_em;
            Double_t        blob_disp_E_hcal_highn;
            Double_t        blob_disp_E_hcal_lown;
            Double_t        blob_disp_E_hcal_meson;
            Double_t        blob_disp_E_hcal_midn;
            Double_t        blob_disp_E_hcal_mu;
            Double_t        blob_disp_E_hcal_other;
            Double_t        blob_disp_E_hcal_p;
            Double_t        blob_disp_E_hcal_xtalk;
            Double_t        blob_disp_E_highn;
            Double_t        blob_disp_E_lown;
            Double_t        blob_disp_E_meson;
            Double_t        blob_disp_E_midn;
            Double_t        blob_disp_E_mu;
            Double_t        blob_disp_E_nucl;
            Double_t        blob_disp_E_nucl_em;
            Double_t        blob_disp_E_nucl_highn;
            Double_t        blob_disp_E_nucl_lown;
            Double_t        blob_disp_E_nucl_meson;
            Double_t        blob_disp_E_nucl_midn;
            Double_t        blob_disp_E_nucl_mu;
            Double_t        blob_disp_E_nucl_other;
            Double_t        blob_disp_E_nucl_p;
            Double_t        blob_disp_E_nucl_xtalk;
            Double_t        blob_disp_E_od;
            Double_t        blob_disp_E_od_em;
            Double_t        blob_disp_E_od_highn;
            Double_t        blob_disp_E_od_lown;
            Double_t        blob_disp_E_od_meson;
            Double_t        blob_disp_E_od_midn;
            Double_t        blob_disp_E_od_mu;
            Double_t        blob_disp_E_od_other;
            Double_t        blob_disp_E_od_p;
            Double_t        blob_disp_E_od_xtalk;
            Double_t        blob_disp_E_other;
            Double_t        blob_disp_E_p;
            Double_t        blob_disp_E_tracker;
            Double_t        blob_disp_E_tracker_em;
            Double_t        blob_disp_E_tracker_highn;
            Double_t        blob_disp_E_tracker_lown;
            Double_t        blob_disp_E_tracker_meson;
            Double_t        blob_disp_E_tracker_midn;
            Double_t        blob_disp_E_tracker_mu;
            Double_t        blob_disp_E_tracker_other;
            Double_t        blob_disp_E_tracker_p;
            Double_t        blob_disp_E_tracker_xtalk;
            Double_t        blob_disp_E_xtalk;
            Double_t        blob_iso_E;
            Double_t        blob_iso_E_ecal;
            Double_t        blob_iso_E_ecal_em;
            Double_t        blob_iso_E_ecal_highn;
            Double_t        blob_iso_E_ecal_lown;
            Double_t        blob_iso_E_ecal_meson;
            Double_t        blob_iso_E_ecal_midn;
            Double_t        blob_iso_E_ecal_mu;
            Double_t        blob_iso_E_ecal_other;
            Double_t        blob_iso_E_ecal_p;
            Double_t        blob_iso_E_ecal_xtalk;
            Double_t        blob_iso_E_em;
            Double_t        blob_iso_E_hcal;
            Double_t        blob_iso_E_hcal_em;
            Double_t        blob_iso_E_hcal_highn;
            Double_t        blob_iso_E_hcal_lown;
            Double_t        blob_iso_E_hcal_meson;
            Double_t        blob_iso_E_hcal_midn;
            Double_t        blob_iso_E_hcal_mu;
            Double_t        blob_iso_E_hcal_other;
            Double_t        blob_iso_E_hcal_p;
            Double_t        blob_iso_E_hcal_xtalk;
            Double_t        blob_iso_E_highn;
            Double_t        blob_iso_E_lown;
            Double_t        blob_iso_E_meson;
            Double_t        blob_iso_E_midn;
            Double_t        blob_iso_E_mu;
            Double_t        blob_iso_E_nucl;
            Double_t        blob_iso_E_nucl_em;
            Double_t        blob_iso_E_nucl_highn;
            Double_t        blob_iso_E_nucl_lown;
            Double_t        blob_iso_E_nucl_meson;
            Double_t        blob_iso_E_nucl_midn;
            Double_t        blob_iso_E_nucl_mu;
            Double_t        blob_iso_E_nucl_other;
            Double_t        blob_iso_E_nucl_p;
            Double_t        blob_iso_E_nucl_xtalk;
            Double_t        blob_iso_E_od;
            Double_t        blob_iso_E_od_em;
            Double_t        blob_iso_E_od_highn;
            Double_t        blob_iso_E_od_lown;
            Double_t        blob_iso_E_od_meson;
            Double_t        blob_iso_E_od_midn;
            Double_t        blob_iso_E_od_mu;
            Double_t        blob_iso_E_od_other;
            Double_t        blob_iso_E_od_p;
            Double_t        blob_iso_E_od_xtalk;
            Double_t        blob_iso_E_other;
            Double_t        blob_iso_E_p;
            Double_t        blob_iso_E_tracker;
            Double_t        blob_iso_E_tracker_em;
            Double_t        blob_iso_E_tracker_highn;
            Double_t        blob_iso_E_tracker_lown;
            Double_t        blob_iso_E_tracker_meson;
            Double_t        blob_iso_E_tracker_midn;
            Double_t        blob_iso_E_tracker_mu;
            Double_t        blob_iso_E_tracker_other;
            Double_t        blob_iso_E_tracker_p;
            Double_t        blob_iso_E_tracker_xtalk;
            Double_t        blob_iso_E_xtalk;
            Double_t        blob_mufuzz_E;
            Double_t        blob_mufuzz_E_ecal;
            Double_t        blob_mufuzz_E_ecal_em;
            Double_t        blob_mufuzz_E_ecal_highn;
            Double_t        blob_mufuzz_E_ecal_lown;
            Double_t        blob_mufuzz_E_ecal_meson;
            Double_t        blob_mufuzz_E_ecal_midn;
            Double_t        blob_mufuzz_E_ecal_mu;
            Double_t        blob_mufuzz_E_ecal_other;
            Double_t        blob_mufuzz_E_ecal_p;
            Double_t        blob_mufuzz_E_ecal_xtalk;
            Double_t        blob_mufuzz_E_em;
            Double_t        blob_mufuzz_E_hcal;
            Double_t        blob_mufuzz_E_hcal_em;
            Double_t        blob_mufuzz_E_hcal_highn;
            Double_t        blob_mufuzz_E_hcal_lown;
            Double_t        blob_mufuzz_E_hcal_meson;
            Double_t        blob_mufuzz_E_hcal_midn;
            Double_t        blob_mufuzz_E_hcal_mu;
            Double_t        blob_mufuzz_E_hcal_other;
            Double_t        blob_mufuzz_E_hcal_p;
            Double_t        blob_mufuzz_E_hcal_xtalk;
            Double_t        blob_mufuzz_E_highn;
            Double_t        blob_mufuzz_E_lown;
            Double_t        blob_mufuzz_E_meson;
            Double_t        blob_mufuzz_E_midn;
            Double_t        blob_mufuzz_E_mu;
            Double_t        blob_mufuzz_E_nucl;
            Double_t        blob_mufuzz_E_nucl_em;
            Double_t        blob_mufuzz_E_nucl_highn;
            Double_t        blob_mufuzz_E_nucl_lown;
            Double_t        blob_mufuzz_E_nucl_meson;
            Double_t        blob_mufuzz_E_nucl_midn;
            Double_t        blob_mufuzz_E_nucl_mu;
            Double_t        blob_mufuzz_E_nucl_other;
            Double_t        blob_mufuzz_E_nucl_p;
            Double_t        blob_mufuzz_E_nucl_xtalk;
            Double_t        blob_mufuzz_E_od;
            Double_t        blob_mufuzz_E_od_em;
            Double_t        blob_mufuzz_E_od_highn;
            Double_t        blob_mufuzz_E_od_lown;
            Double_t        blob_mufuzz_E_od_meson;
            Double_t        blob_mufuzz_E_od_midn;
            Double_t        blob_mufuzz_E_od_mu;
            Double_t        blob_mufuzz_E_od_other;
            Double_t        blob_mufuzz_E_od_p;
            Double_t        blob_mufuzz_E_od_xtalk;
            Double_t        blob_mufuzz_E_other;
            Double_t        blob_mufuzz_E_p;
            Double_t        blob_mufuzz_E_tracker;
            Double_t        blob_mufuzz_E_tracker_em;
            Double_t        blob_mufuzz_E_tracker_highn;
            Double_t        blob_mufuzz_E_tracker_lown;
            Double_t        blob_mufuzz_E_tracker_meson;
            Double_t        blob_mufuzz_E_tracker_midn;
            Double_t        blob_mufuzz_E_tracker_mu;
            Double_t        blob_mufuzz_E_tracker_other;
            Double_t        blob_mufuzz_E_tracker_p;
            Double_t        blob_mufuzz_E_tracker_xtalk;
            Double_t        blob_mufuzz_E_xtalk;
            Double_t        blob_recoil_E;
            Double_t        blob_recoil_E_ecal;
            Double_t        blob_recoil_E_ecal_em;
            Double_t        blob_recoil_E_ecal_highn;
            Double_t        blob_recoil_E_ecal_lown;
            Double_t        blob_recoil_E_ecal_meson;
            Double_t        blob_recoil_E_ecal_midn;
            Double_t        blob_recoil_E_ecal_mu;
            Double_t        blob_recoil_E_ecal_other;
            Double_t        blob_recoil_E_ecal_p;
            Double_t        blob_recoil_E_ecal_xtalk;
            Double_t        blob_recoil_E_em;
            Double_t        blob_recoil_E_hcal;
            Double_t        blob_recoil_E_hcal_em;
            Double_t        blob_recoil_E_hcal_highn;
            Double_t        blob_recoil_E_hcal_lown;
            Double_t        blob_recoil_E_hcal_meson;
            Double_t        blob_recoil_E_hcal_midn;
            Double_t        blob_recoil_E_hcal_mu;
            Double_t        blob_recoil_E_hcal_other;
            Double_t        blob_recoil_E_hcal_p;
            Double_t        blob_recoil_E_hcal_xtalk;
            Double_t        blob_recoil_E_highn;
            Double_t        blob_recoil_E_lown;
            Double_t        blob_recoil_E_meson;
            Double_t        blob_recoil_E_midn;
            Double_t        blob_recoil_E_mu;
            Double_t        blob_recoil_E_nucl;
            Double_t        blob_recoil_E_nucl_em;
            Double_t        blob_recoil_E_nucl_highn;
            Double_t        blob_recoil_E_nucl_lown;
            Double_t        blob_recoil_E_nucl_meson;
            Double_t        blob_recoil_E_nucl_midn;
            Double_t        blob_recoil_E_nucl_mu;
            Double_t        blob_recoil_E_nucl_other;
            Double_t        blob_recoil_E_nucl_p;
            Double_t        blob_recoil_E_nucl_xtalk;
            Double_t        blob_recoil_E_od;
            Double_t        blob_recoil_E_od_em;
            Double_t        blob_recoil_E_od_highn;
            Double_t        blob_recoil_E_od_lown;
            Double_t        blob_recoil_E_od_meson;
            Double_t        blob_recoil_E_od_midn;
            Double_t        blob_recoil_E_od_mu;
            Double_t        blob_recoil_E_od_other;
            Double_t        blob_recoil_E_od_p;
            Double_t        blob_recoil_E_od_xtalk;
            Double_t        blob_recoil_E_other;
            Double_t        blob_recoil_E_p;
            Double_t        blob_recoil_E_tracker;
            Double_t        blob_recoil_E_tracker_em;
            Double_t        blob_recoil_E_tracker_highn;
            Double_t        blob_recoil_E_tracker_lown;
            Double_t        blob_recoil_E_tracker_meson;
            Double_t        blob_recoil_E_tracker_midn;
            Double_t        blob_recoil_E_tracker_mu;
            Double_t        blob_recoil_E_tracker_other;
            Double_t        blob_recoil_E_tracker_p;
            Double_t        blob_recoil_E_tracker_xtalk;
            Double_t        blob_recoil_E_xtalk;
            Double_t        blob_vtx_E;
            Double_t        blob_vtx_E_ecal;
            Double_t        blob_vtx_E_ecal_em;
            Double_t        blob_vtx_E_ecal_highn;
            Double_t        blob_vtx_E_ecal_lown;
            Double_t        blob_vtx_E_ecal_meson;
            Double_t        blob_vtx_E_ecal_midn;
            Double_t        blob_vtx_E_ecal_mu;
            Double_t        blob_vtx_E_ecal_other;
            Double_t        blob_vtx_E_ecal_p;
            Double_t        blob_vtx_E_ecal_xtalk;
            Double_t        blob_vtx_E_em;
            Double_t        blob_vtx_E_hcal;
            Double_t        blob_vtx_E_hcal_em;
            Double_t        blob_vtx_E_hcal_highn;
            Double_t        blob_vtx_E_hcal_lown;
            Double_t        blob_vtx_E_hcal_meson;
            Double_t        blob_vtx_E_hcal_midn;
            Double_t        blob_vtx_E_hcal_mu;
            Double_t        blob_vtx_E_hcal_other;
            Double_t        blob_vtx_E_hcal_p;
            Double_t        blob_vtx_E_hcal_xtalk;
            Double_t        blob_vtx_E_highn;
            Double_t        blob_vtx_E_lown;
            Double_t        blob_vtx_E_meson;
            Double_t        blob_vtx_E_midn;
            Double_t        blob_vtx_E_mu;
            Double_t        blob_vtx_E_nucl;
            Double_t        blob_vtx_E_nucl_em;
            Double_t        blob_vtx_E_nucl_highn;
            Double_t        blob_vtx_E_nucl_lown;
            Double_t        blob_vtx_E_nucl_meson;
            Double_t        blob_vtx_E_nucl_midn;
            Double_t        blob_vtx_E_nucl_mu;
            Double_t        blob_vtx_E_nucl_other;
            Double_t        blob_vtx_E_nucl_p;
            Double_t        blob_vtx_E_nucl_xtalk;
            Double_t        blob_vtx_E_od;
            Double_t        blob_vtx_E_od_em;
            Double_t        blob_vtx_E_od_highn;
            Double_t        blob_vtx_E_od_lown;
            Double_t        blob_vtx_E_od_meson;
            Double_t        blob_vtx_E_od_midn;
            Double_t        blob_vtx_E_od_mu;
            Double_t        blob_vtx_E_od_other;
            Double_t        blob_vtx_E_od_p;
            Double_t        blob_vtx_E_od_xtalk;
            Double_t        blob_vtx_E_other;
            Double_t        blob_vtx_E_p;
            Double_t        blob_vtx_E_tracker;
            Double_t        blob_vtx_E_tracker_em;
            Double_t        blob_vtx_E_tracker_highn;
            Double_t        blob_vtx_E_tracker_lown;
            Double_t        blob_vtx_E_tracker_meson;
            Double_t        blob_vtx_E_tracker_midn;
            Double_t        blob_vtx_E_tracker_mu;
            Double_t        blob_vtx_E_tracker_other;
            Double_t        blob_vtx_E_tracker_p;
            Double_t        blob_vtx_E_tracker_xtalk;
            Double_t        blob_vtx_E_xtalk;
            Double_t        energy_from_mc;
            Double_t        energy_from_mc_fraction;
            Double_t        energy_from_mc_fraction_of_highest;
            Double_t        muon_phi;
            Double_t        muon_theta;
            Double_t        muon_thetaX;
            Double_t        muon_thetaY;
            Double_t        muon_trackVertexTime;
            Double_t        muon_truthMatch_fraction;
            Double_t        numi_bpm1;
            Double_t        numi_bpm2;
            Double_t        numi_bpm3;
            Double_t        numi_bpm4;
            Double_t        numi_bpm5;
            Double_t        numi_bpm6;
            Double_t        numi_horn_curr;
            Double_t        numi_pot;
            Double_t        numi_tor101;
            Double_t        numi_tortgt;
            Double_t        numi_tr101d;
            Double_t        numi_trtgtd;
            Double_t        numi_x;
            Double_t        numi_x_width;
            Double_t        numi_y;
            Double_t        numi_y_width;
            Double_t        phys_energy_dispersed;
            Double_t        phys_energy_in_road_downstream;
            Double_t        phys_energy_in_road_upstream;
            Double_t        phys_energy_unattached;
            Double_t        prim_vtx_smallest_opening_angle;
            Double_t        primary_track_minerva_energy;
            Double_t        primary_track_minerva_phi;
            Double_t        primary_track_minerva_theta;
            Double_t        usact_avg_E_consecutive_huge;
            Double_t        usact_avg_E_consecutive_inf;
            Double_t        usact_avg_E_consecutive_large;
            Double_t        usact_avg_E_consecutive_normal;
            Double_t        usact_avg_E_consecutive_small;
            Double_t        usact_avg_E_consecutive_texas_sized;
            Double_t        usact_avg_E_consecutive_tiny;
            Double_t        usact_avg_E_huge;
            Double_t        usact_avg_E_inf;
            Double_t        usact_avg_E_large;
            Double_t        usact_avg_E_normal;
            Double_t        usact_avg_E_small;
            Double_t        usact_avg_E_texas_sized;
            Double_t        usact_avg_E_tiny;
            Double_t        usact_frac_withE_huge;
            Double_t        usact_frac_withE_inf;
            Double_t        usact_frac_withE_large;
            Double_t        usact_frac_withE_normal;
            Double_t        usact_frac_withE_small;
            Double_t        usact_frac_withE_texas_sized;
            Double_t        usact_frac_withE_tiny;
            Double_t        vetoMuonTime;
            Double_t        vtx_fit_chi2;
            Int_t           n_vetoDigits;
            Int_t           discrFired[1];   //[n_vetoDigits]
            Int_t           has_michel_at_vertex_sz;
            Int_t           has_michel_at_vertex[2];   //[has_michel_at_vertex_sz]
            Int_t           has_michel_beginModule_sz;
            Int_t           has_michel_beginModule[2];   //[has_michel_beginModule_sz]
            Int_t           has_michel_category_sz;
            Int_t           has_michel_category[2];   //[has_michel_category_sz]
            Int_t           has_michel_endModule_sz;
            Int_t           has_michel_endModule[2];   //[has_michel_endModule_sz]
            Int_t           has_michel_numDigits_sz;
            Int_t           has_michel_numDigits[2];   //[has_michel_numDigits_sz]
            Int_t           has_michel_numModules_sz;
            Int_t           has_michel_numModules[2];   //[has_michel_numModules_sz]
            Int_t           has_michel_numPlanes_sz;
            Int_t           has_michel_numPlanes[2];   //[has_michel_numPlanes_sz]
            Int_t           has_michel_numTracks_sz;
            Int_t           has_michel_numTracks[2];   //[has_michel_numTracks_sz]
            Int_t           has_michel_slice_number_sz;
            Int_t           has_michel_slice_number[1];   //[has_michel_slice_number_sz]
            Int_t           has_michel_vertex_type_sz;
            Int_t           has_michel_vertex_type[2];   //[has_michel_vertex_type_sz]
            Int_t           has_michel_view_sum_sz;
            Int_t           has_michel_view_sum[2];   //[has_michel_view_sum_sz]
            Int_t           latticeEnergyIndices[23876];   //[n_indices]
            Int_t           paddle[1];   //[n_vetoDigits]
            Int_t           pmt[1];   //[n_vetoDigits]
            Int_t           pmt_occupancy[1];   //[n_vetoDigits]
            Int_t           wall[1];   //[n_vetoDigits]
            Int_t           has_michel_distance_sz;
            Double_t        has_michel_distance[2];   //[has_michel_distance_sz]
            Int_t           has_michel_energy_sz;
            Double_t        has_michel_energy[2];   //[has_michel_energy_sz]
            Int_t           has_michel_slice_energy_sz;
            Double_t        has_michel_slice_energy[2];   //[has_michel_slice_energy_sz]
            Int_t           has_michel_time_diff_sz;
            Double_t        has_michel_time_diff[2];   //[has_michel_time_diff_sz]
            Double_t        latticeNormEnergySums[23876];   //[n_indices]
            Double_t        latticeRelativeTimes[23876];   //[n_indices]
            Double_t        muon_DSnode_pos[3];
            Double_t        muon_corrected_p[4];
            Double_t        muon_sp[3];
            Double_t        muon_sp_orig[3];
            Double_t        orig_short_vtx[4];
            Double_t        orig_vtx[4];
            Double_t        primary_track_minerva_end_position[3];
            Double_t        primary_track_minerva_start_position[3];
            Double_t        time_distribution[1];   //[n_vetoDigits]
            Int_t           truth_has_michel_from_pion_minus_momentum_sz;
            Double_t        truth_has_michel_from_pion_minus_momentum[1];   //[truth_has_michel_from_pion_minus_momentum_sz]
            Int_t           truth_has_michel_from_pion_plus_momentum_sz;
            Double_t        truth_has_michel_from_pion_plus_momentum[1];   //[truth_has_michel_from_pion_plus_momentum_sz]
            Double_t        usact_E_per_plane_huge[126];   //[usact_extent_huge]
            Double_t        usact_E_per_plane_inf[128];   //[usact_extent_inf]
            Double_t        usact_E_per_plane_large[126];   //[usact_extent_large]
            Double_t        usact_E_per_plane_normal[113];   //[usact_extent_normal]
            Double_t        usact_E_per_plane_small[113];   //[usact_extent_small]
            Double_t        usact_E_per_plane_texas_sized[128];   //[usact_extent_texas_sized]
            Double_t        usact_E_per_plane_tiny[113];   //[usact_extent_tiny]
            Double_t        vtx_blob_radius;
            Bool_t          truth_has_physics_event;
            Bool_t          truth_muon_is_plausible;
            Bool_t          truth_reco_has_int_vtx;
            Bool_t          truth_reco_has_bad_object;
            Bool_t          truth_reco_has_muon;
            Bool_t          truth_reco_muon_has_charge;
            Bool_t          truth_reco_has_good_vtx;
            Bool_t          truth_reco_is_rock_muon;
            Bool_t          truth_pass_NukeCC;
            Int_t           truth_in_analyzable_area;
            Int_t           truth_in_fiducial_area;
            Int_t           truth_muon_leaving_code;
            Int_t           truth_muon_track_id;
            Int_t           truth_reco_has_michel_electron;
            Int_t           truth_targetID;
            Int_t           truth_targetZ;
            Int_t           truth_target_code;
            Int_t           truth_vtx_module;
            Int_t           truth_vtx_plane;
            Double_t        truth_fs_energy_em;
            Double_t        truth_fs_energy_highn;
            Double_t        truth_fs_energy_hmidn;
            Double_t        truth_fs_energy_lown;
            Double_t        truth_fs_energy_meson;
            Double_t        truth_fs_energy_mu;
            Double_t        truth_fs_energy_o;
            Double_t        truth_fs_energy_p;
            Double_t        truth_muon_phi;
            Double_t        truth_muon_theta;
            Double_t        truth_muon_thetaX;
            Double_t        truth_muon_thetaY;
            Double_t        truth_target_dist_to_division;
            Double_t        truth_target_zDist;
            Int_t           truth_ref_targZ[5];
            Int_t           genie_wgt_n_shifts;
            Double_t        truth_genie_wgt_AGKYxF1pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_AhtBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_BhtBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_CCQEPauliSupViaKF[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_CV1uBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_CV2uBY[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_EtaNCEL[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrAbs_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrAbs_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrCEx_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrCEx_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrElas_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrElas_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrInel_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrInel_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrPiProd_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrPiProd_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MFP_N[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MFP_pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaCCQE[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaCCQEshape[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaNCEL[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MvRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormCCQE[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormCCRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormDISCC[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormNCRES[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_RDecBR1gamma[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvn1pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvn2pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvp1pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvp2pi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Theta_Delta2Npi[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_VecFFCCQEshape[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_shifts[MAX_GENIE_WGT_N_SHIFTS];   //[genie_wgt_n_shifts]
            Double_t        truth_muon_end_momentum[4];
            Double_t        truth_muon_end_position[4];
            Double_t        truth_ref_dist_to_division[5];
            Double_t        truth_ref_dist_to_target[5];
            Int_t           NukeCC_nuFlavor;
            Int_t           NukeCC_nuHelicity;
            Int_t           NukeCC_intCurrent;
            Int_t           NukeCC_intType;
            Double_t        NukeCC_E;
            Double_t        NukeCC_Q2;
            Double_t        NukeCC_x;
            Double_t        NukeCC_y;
            Double_t        NukeCC_W;
            Double_t        NukeCC_score;
            Double_t        NukeCC_leptonE[4];
            Double_t        NukeCC_vtx[4];
            Bool_t          NukeCC_minos_trk_is_contained;
            Bool_t          NukeCC_minos_trk_is_ok;
            Bool_t          NukeCC_minos_used_range;
            Bool_t          NukeCC_minos_used_curvature;
            Bool_t          NukeCC_pass_canonical_cut;
            Bool_t          NukeCC_is_cc;
            Int_t           NukeCC_in_analyzable_area;
            Int_t           NukeCC_in_fiducial_area;
            Int_t           NukeCC_minos_trk_end_plane;
            Int_t           NukeCC_minos_trk_quality;
            Int_t           NukeCC_r_minos_trk_vtx_plane;
            Int_t           NukeCC_t_minos_trk_numFSMuons;
            Int_t           NukeCC_t_minos_trk_primFSLeptonPDG;
            Int_t           NukeCC_targetID;
            Int_t           NukeCC_targetZ;
            Int_t           NukeCC_target_code;
            Int_t           NukeCC_vtx_module;
            Int_t           NukeCC_vtx_plane;
            Double_t        NukeCC_E_ccqe;
            Double_t        NukeCC_E_wide_window;
            Double_t        NukeCC_Q2_ccqe;
            Double_t        NukeCC_Q2_wide_window;
            Double_t        NukeCC_W_wide_window;
            Double_t        NukeCC_minos_trk_bave;
            Double_t        NukeCC_minos_trk_chi2;
            Double_t        NukeCC_minos_trk_end_u;
            Double_t        NukeCC_minos_trk_end_v;
            Double_t        NukeCC_minos_trk_end_x;
            Double_t        NukeCC_minos_trk_end_y;
            Double_t        NukeCC_minos_trk_end_z;
            Double_t        NukeCC_minos_trk_eqp;
            Double_t        NukeCC_minos_trk_eqp_qp;
            Double_t        NukeCC_minos_trk_fit_pass;
            Double_t        NukeCC_minos_trk_ndf;
            Double_t        NukeCC_minos_trk_p;
            Double_t        NukeCC_minos_trk_p_curvature;
            Double_t        NukeCC_minos_trk_p_range;
            Double_t        NukeCC_minos_trk_qp;
            Double_t        NukeCC_minos_trk_vtx_x;
            Double_t        NukeCC_minos_trk_vtx_y;
            Double_t        NukeCC_minos_trk_vtx_z;
            Double_t        NukeCC_nu_energy_recoil;
            Double_t        NukeCC_r_minos_trk_bdL;
            Double_t        NukeCC_r_minos_trk_end_dcosx;
            Double_t        NukeCC_r_minos_trk_end_dcosy;
            Double_t        NukeCC_r_minos_trk_end_dcosz;
            Double_t        NukeCC_r_minos_trk_vtx_dcosx;
            Double_t        NukeCC_r_minos_trk_vtx_dcosy;
            Double_t        NukeCC_r_minos_trk_vtx_dcosz;
            Double_t        NukeCC_recoil_E;
            Double_t        NukeCC_recoil_E_wide_window;
            Double_t        NukeCC_t_minos_trk_primFSLepMinosInitProjPx;
            Double_t        NukeCC_t_minos_trk_primFSLepMinosInitProjPy;
            Double_t        NukeCC_t_minos_trk_primFSLepMinosInitProjPz;
            Double_t        NukeCC_t_minos_trk_primFSLepMinosInitProjX;
            Double_t        NukeCC_t_minos_trk_primFSLepMinosInitProjY;
            Double_t        NukeCC_t_minos_trk_primFSLepMinosInitProjZ;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvFinalPx;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvFinalPy;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvFinalPz;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvFinalX;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvFinalY;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvFinalZ;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvInitPx;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvInitPy;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvInitPz;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvInitX;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvInitY;
            Double_t        NukeCC_t_minos_trk_primFSLepMnvInitZ;
            Double_t        NukeCC_target_dist_to_division;
            Double_t        NukeCC_target_zDist;
            Double_t        NukeCC_x_wide_window;
            Double_t        NukeCC_y_wide_window;
            Int_t           NukeCC_ref_targZ[5];
            Int_t           NukeCC_smeared_is_fiducial[100];
            Int_t           NukeCC_smeared_pass_dist_to_div[100];
            Int_t           NukeCC_smeared_targetID[100];
            Int_t           NukeCC_smeared_targetZ[100];
            Int_t           NukeCC_smeared_vtx_mod[100];
            Double_t        NukeCC_muon_vtx[4];
            Double_t        NukeCC_ref_dist_to_division[5];
            Double_t        NukeCC_ref_dist_to_target[5];
            Double_t        NukeCC_sys_muon_curve_energy_shift[2];
            Double_t        NukeCC_sys_muon_energy_shift[2];
            Double_t        NukeCC_sys_muon_minerva_energy_shift[2];
            Double_t        NukeCC_sys_muon_qSquared_shift[2];
            Double_t        NukeCC_sys_muon_range_energy_shift[2];
            Double_t        NukeCC_sys_muon_wSquared_shift[2];
            Double_t        NukeCC_sys_muon_xbj_shift[2];
            Double_t        NukeCC_sys_muon_y_shift[2];
            Double_t        NukeCC_sys_nu_energy_shift[2];
            Double_t        NukeCC_sys_recoil_energy_shift[2];
            Double_t        NukeCC_sys_recoil_qSquared_shift[2];
            Double_t        NukeCC_sys_recoil_wSquared_shift[2];
            Double_t        NukeCC_sys_recoil_xbj_shift[2];
            Double_t        NukeCC_sys_recoil_y_shift[2];
            Double_t        NukeCC_sys_total_qSquared_shift[2];
            Double_t        NukeCC_sys_total_wSquared_shift[2];
            Double_t        NukeCC_sys_total_xbj_shift[2];
            Double_t        NukeCC_sys_total_y_shift[2];
            Int_t           ev_run;
            Int_t           ev_subrun;
            Int_t           ev_detector;
            Int_t           ev_triggerType;
            Int_t           ev_gate;
            Int_t           ev_global_gate;
            Int_t           ev_gps_time_sec;
            Int_t           ev_gps_time_usec;
            Int_t           mc_run;
            Int_t           mc_subrun;
            Int_t           mc_nInteractions;
            Int_t           mc_MIState;
            Double_t        mc_pot;
            Int_t           mc_beamConfig;
            Int_t           mc_processType;
            Int_t           mc_nthEvtInSpill;
            Int_t           mc_nthEvtInFile;
            Int_t           mc_intType;
            Int_t           mc_current;
            Int_t           mc_charm;
            Double_t        mc_weight;
            Double_t        mc_XSec;
            Double_t        mc_diffXSec;
            Int_t           mc_incoming;
            Double_t        mc_fluxDriverProb;
            Int_t           mc_targetNucleus;
            Int_t           mc_targetZ;
            Int_t           mc_targetA;
            Int_t           mc_targetNucleon;
            Int_t           mc_struckQuark;
            Int_t           mc_seaQuark;
            Int_t           mc_resID;
            Int_t           mc_primaryLepton;
            Double_t        mc_incomingE;
            Double_t        mc_Bjorkenx;
            Double_t        mc_Bjorkeny;
            Double_t        mc_Q2;
            Double_t        mc_nuT;
            Double_t        mc_w;
            Double_t        mc_vtx[4];
            Double_t        mc_incomingPartVec[4];
            Double_t        mc_initNucVec[4];
            Double_t        mc_primFSLepton[4];
            Int_t           mc_nFSPart;
            Double_t        mc_FSPartPx[MAX_MC_NFSPART];   //[mc_nFSPart]
            Double_t        mc_FSPartPy[MAX_MC_NFSPART];   //[mc_nFSPart]
            Double_t        mc_FSPartPz[MAX_MC_NFSPART];   //[mc_nFSPart]
            Double_t        mc_FSPartE[MAX_MC_NFSPART];   //[mc_nFSPart]
            Int_t           mc_FSPartPDG[MAX_MC_NFSPART];   //[mc_nFSPart]
            Int_t           mc_er_nPart;
            Int_t           mc_er_ID[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Int_t           mc_er_status[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Double_t        mc_er_posInNucX[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Double_t        mc_er_posInNucY[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Double_t        mc_er_posInNucZ[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Double_t        mc_er_Px[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Double_t        mc_er_Py[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Double_t        mc_er_Pz[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Double_t        mc_er_E[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Int_t           mc_er_FD[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Int_t           mc_er_LD[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Int_t           mc_er_mother[MAX_MC_ER_NPART];   //[mc_er_nPart]
            Int_t           mc_fr_nNuAncestorIDs;
            Int_t           mc_fr_nuAncestorIDs[MAX_MC_FR_NNUANCESTORIDS];   //[mc_fr_nNuAncestorIDs]
            Int_t           mc_fr_nuParentID;
            Int_t           mc_fr_decMode;
            Double_t        mc_fr_primProtonVtx[3];
            Double_t        mc_fr_primProtonP[4];
            Double_t        mc_fr_nuParentDecVtx[3];
            Double_t        mc_fr_nuParentProdVtx[3];
            Double_t        mc_fr_nuParentProdP[4];
            Double_t        mc_cvweight_total;
            Double_t        wgt;
            Double_t        mc_cvweight_totalFlux;
            Double_t        mc_cvweight_totalXsec;
            Double_t        mc_ppfx1_cvweight;
            Double_t        mc_hornCurrent_cvweight;
            Double_t        mc_gen1_cvweight_total;
            Double_t        gen1_wgt;
            Double_t        mc_gen1_cvweight_totalFlux;
            Double_t        mc_gen1_cvweight_NA49;
            Int_t           mc_wgt_Flux_BeamFocus_sz;
            Double_t        mc_wgt_Flux_BeamFocus[MAX_MC_WGT_FLUX_BEAMFOCUS_SZ];   //[mc_wgt_Flux_BeamFocus_sz]
            Int_t           mc_wgt_gen1_Flux_Tertiary_sz;
            Double_t        mc_wgt_gen1_Flux_Tertiary[100];   //[mc_wgt_gen1_Flux_Tertiary_sz]
            Int_t           mc_wgt_gen1_Flux_NA49_sz;
            Double_t        mc_wgt_gen1_Flux_NA49[100];   //[mc_wgt_gen1_Flux_NA49_sz]
            Int_t           mc_wgt_Norm_sz;
            Double_t        mc_wgt_Norm[1];   //[mc_wgt_Norm_sz]
            Int_t           mc_wgt_ppfx1_Total_sz;
            Double_t        mc_wgt_ppfx1_Total[100];   //[mc_wgt_ppfx1_Total_sz]
            Int_t           mc_vertex_batch;
            Double_t        numi_x_pos;
            Double_t        numi_y_pos;
            Int_t           batch_structure;
            Int_t           n_prongs;
            Int_t           prong_nParticles[MAX_N_PRONGS];   //[n_prongs]
            Double_t        prong_part_score[MAX_N_PRONGS];   //[n_prongs]
            Double_t        prong_part_mass[MAX_N_PRONGS];   //[n_prongs]
            Int_t           prong_part_charge[MAX_N_PRONGS];   //[n_prongs]
            Int_t           prong_part_pid[MAX_N_PRONGS];   //[n_prongs]
            std::vector<std::vector<double> > *prong_part_E;
            std::vector<std::vector<double> > *prong_part_pos;

            // List of branches
            TBranch        *b_eventID;   //!
            TBranch        *b_physEvtNum;   //!
            TBranch        *b_n_hyps;   //!
            TBranch        *b_processType;   //!
            TBranch        *b_primaryPart;   //!
            TBranch        *b_n_slices;   //!
            TBranch        *b_slice_numbers;   //!
            TBranch        *b_shared_slice;   //!
            TBranch        *b_vtx;   //!
            TBranch        *b_vtxErr;   //!
            TBranch        *b_E;   //!
            TBranch        *b_reco_vertex_batch;   //!
            TBranch        *b_found_truth;   //!
            TBranch        *b_phys_front_activity;   //!
            TBranch        *b_phys_energy_in_road_upstream_is_rockmuon_consistent;   //!
            TBranch        *b_rock_muons_removed;   //!
            TBranch        *b_minos_track_match;   //!
            TBranch        *b_minos_stub_match;   //!
            TBranch        *b_unknown_helicity;   //!
            TBranch        *b_minos_track_inside_partial_plane;   //!
            TBranch        *b_prim_vtx_has_misassigned_track_direction;   //!
            TBranch        *b_prim_vtx_has_broken_track;   //!
            TBranch        *b_pass_NukeCC;   //!
            TBranch        *b_short_track_vtx_used;   //!
            TBranch        *b_muon_sp_moved;   //!
            TBranch        *b_vtx_fit_converged;   //!
            TBranch        *b_muon_is_correct;   //!
            TBranch        *b_has_int_vtx;   //!
            TBranch        *b_has_bad_object;   //!
            TBranch        *b_has_muon;   //!
            TBranch        *b_muon_has_charge;   //!
            TBranch        *b_has_good_vtx;   //!
            TBranch        *b_is_rock_muon;   //!
            TBranch        *b_MuonTaggedAsVetoButNotMatched;   //!
            TBranch        *b_NonVetoMuonExtrpToVeto;   //!
            TBranch        *b_NonVetoMuonWallOnePaddle;   //!
            TBranch        *b_NonVetoMuonWallOnePaddleOverlap;   //!
            TBranch        *b_NonVetoMuonWallOneSector;   //!
            TBranch        *b_NonVetoMuonWallTwoPaddle;   //!
            TBranch        *b_NonVetoMuonWallTwoPaddleOverlap;   //!
            TBranch        *b_NonVetoMuonWallTwoSector;   //!
            TBranch        *b_VetoMuonWallOnePaddle;   //!
            TBranch        *b_VetoMuonWallOnePaddleOverlap;   //!
            TBranch        *b_VetoMuonWallOneSector;   //!
            TBranch        *b_VetoMuonWallOneTypeOfMatchNonOverlap;   //!
            TBranch        *b_VetoMuonWallOneTypeOfMatchOverlap;   //!
            TBranch        *b_VetoMuonWallTwoPaddle;   //!
            TBranch        *b_VetoMuonWallTwoPaddleOverlap;   //!
            TBranch        *b_VetoMuonWallTwoSector;   //!
            TBranch        *b_VetoMuonWallTwoTypeOfMatchNonOverlap;   //!
            TBranch        *b_VetoMuonWallTwoTypeOfMatchOverlap;   //!
            TBranch        *b_blob_disp_nBlobs;   //!
            TBranch        *b_blob_disp_nClus;   //!
            TBranch        *b_blob_disp_nClus_ecal;   //!
            TBranch        *b_blob_disp_nClus_hcal;   //!
            TBranch        *b_blob_disp_nClus_nucl;   //!
            TBranch        *b_blob_disp_nClus_od;   //!
            TBranch        *b_blob_disp_nClus_tracker;   //!
            TBranch        *b_blob_iso_nBlobs;   //!
            TBranch        *b_blob_iso_nClus;   //!
            TBranch        *b_blob_iso_nClus_ecal;   //!
            TBranch        *b_blob_iso_nClus_hcal;   //!
            TBranch        *b_blob_iso_nClus_nucl;   //!
            TBranch        *b_blob_iso_nClus_od;   //!
            TBranch        *b_blob_iso_nClus_tracker;   //!
            TBranch        *b_blob_mufuzz_nBlobs;   //!
            TBranch        *b_blob_mufuzz_nClus;   //!
            TBranch        *b_blob_mufuzz_nClus_ecal;   //!
            TBranch        *b_blob_mufuzz_nClus_hcal;   //!
            TBranch        *b_blob_mufuzz_nClus_nucl;   //!
            TBranch        *b_blob_mufuzz_nClus_od;   //!
            TBranch        *b_blob_mufuzz_nClus_tracker;   //!
            TBranch        *b_blob_recoil_nBlobs;   //!
            TBranch        *b_blob_recoil_nClus;   //!
            TBranch        *b_blob_recoil_nClus_ecal;   //!
            TBranch        *b_blob_recoil_nClus_hcal;   //!
            TBranch        *b_blob_recoil_nClus_nucl;   //!
            TBranch        *b_blob_recoil_nClus_od;   //!
            TBranch        *b_blob_recoil_nClus_tracker;   //!
            TBranch        *b_blob_vtx_nBlobs;   //!
            TBranch        *b_blob_vtx_nClus;   //!
            TBranch        *b_blob_vtx_nClus_ecal;   //!
            TBranch        *b_blob_vtx_nClus_hcal;   //!
            TBranch        *b_blob_vtx_nClus_nucl;   //!
            TBranch        *b_blob_vtx_nClus_od;   //!
            TBranch        *b_blob_vtx_nClus_tracker;   //!
            TBranch        *b_broken_track_most_us_plane;   //!
            TBranch        *b_muon_n_USclusters;   //!
            TBranch        *b_muon_truthMatch_track_id;   //!
            TBranch        *b_n_indices;   //!
            TBranch        *b_n_prim_long_tracks;   //!
            TBranch        *b_n_prim_short_tracks;   //!
            TBranch        *b_n_start_vertices;   //!
            TBranch        *b_n_tracks;   //!
            TBranch        *b_n_tracks_non_prim;   //!
            TBranch        *b_n_tracks_prim;   //!
            TBranch        *b_n_tracks_prim_forked;   //!
            TBranch        *b_n_tracks_prim_kinked;   //!
            TBranch        *b_n_vertices_startpoint;   //!
            TBranch        *b_passVetoMuonCut;   //!
            TBranch        *b_phys_energy_in_road_downstream_nplanes;   //!
            TBranch        *b_phys_energy_in_road_upstream_nplanes;   //!
            TBranch        *b_phys_n_dead_discr_pair;   //!
            TBranch        *b_phys_n_dead_discr_pair_in_prim_track_region;   //!
            TBranch        *b_phys_n_dead_discr_pair_two_mod_downstream_prim_track;   //!
            TBranch        *b_phys_n_dead_discr_pair_two_mod_upstream_prim_vtx;   //!
            TBranch        *b_phys_n_dead_discr_pair_upstream_prim_track_proj;   //!
            TBranch        *b_phys_vertex_is_fiducial;   //!
            TBranch        *b_rock_muon_code;   //!
            TBranch        *b_truth_has_michel_electron;   //!
            TBranch        *b_usact_extent_huge;   //!
            TBranch        *b_usact_extent_inf;   //!
            TBranch        *b_usact_extent_large;   //!
            TBranch        *b_usact_extent_normal;   //!
            TBranch        *b_usact_extent_small;   //!
            TBranch        *b_usact_extent_texas_sized;   //!
            TBranch        *b_usact_extent_tiny;   //!
            TBranch        *b_usact_n_consecutive_huge;   //!
            TBranch        *b_usact_n_consecutive_inf;   //!
            TBranch        *b_usact_n_consecutive_large;   //!
            TBranch        *b_usact_n_consecutive_normal;   //!
            TBranch        *b_usact_n_consecutive_small;   //!
            TBranch        *b_usact_n_consecutive_texas_sized;   //!
            TBranch        *b_usact_n_consecutive_tiny;   //!
            TBranch        *b_usact_n_planes_huge;   //!
            TBranch        *b_usact_n_planes_inf;   //!
            TBranch        *b_usact_n_planes_large;   //!
            TBranch        *b_usact_n_planes_normal;   //!
            TBranch        *b_usact_n_planes_small;   //!
            TBranch        *b_usact_n_planes_texas_sized;   //!
            TBranch        *b_usact_n_planes_tiny;   //!
            TBranch        *b_NonVetoMuonWallOneBadPosX;   //!
            TBranch        *b_NonVetoMuonWallOneBadPosY;   //!
            TBranch        *b_NonVetoMuonWallOnePosX;   //!
            TBranch        *b_NonVetoMuonWallOnePosY;   //!
            TBranch        *b_NonVetoMuonWallOne_ANDEfficiency_Central;   //!
            TBranch        *b_NonVetoMuonWallOne_ANDEfficiency_Overlap;   //!
            TBranch        *b_NonVetoMuonWallOne_ANDError_Central;   //!
            TBranch        *b_NonVetoMuonWallOne_ANDError_Overlap;   //!
            TBranch        *b_NonVetoMuonWallOne_AccRatesError_PaddleAbove;   //!
            TBranch        *b_NonVetoMuonWallOne_AccRatesError_PaddleBelow;   //!
            TBranch        *b_NonVetoMuonWallOne_AccRates_PaddleAbove;   //!
            TBranch        *b_NonVetoMuonWallOne_AccRates_PaddleBelow;   //!
            TBranch        *b_NonVetoMuonWallOne_OREfficiency_Central;   //!
            TBranch        *b_NonVetoMuonWallOne_OREfficiency_Overlap;   //!
            TBranch        *b_NonVetoMuonWallOne_ORError_Central;   //!
            TBranch        *b_NonVetoMuonWallOne_ORError_Overlap;   //!
            TBranch        *b_NonVetoMuonWallTwoBadPosX;   //!
            TBranch        *b_NonVetoMuonWallTwoBadPosY;   //!
            TBranch        *b_NonVetoMuonWallTwoPosX;   //!
            TBranch        *b_NonVetoMuonWallTwoPosY;   //!
            TBranch        *b_NonVetoMuonWallTwo_ANDEfficiency_Central;   //!
            TBranch        *b_NonVetoMuonWallTwo_ANDEfficiency_Overlap;   //!
            TBranch        *b_NonVetoMuonWallTwo_ANDError_Central;   //!
            TBranch        *b_NonVetoMuonWallTwo_ANDError_Overlap;   //!
            TBranch        *b_NonVetoMuonWallTwo_AccRatesError_PaddleAbove;   //!
            TBranch        *b_NonVetoMuonWallTwo_AccRatesError_PaddleBelow;   //!
            TBranch        *b_NonVetoMuonWallTwo_AccRates_PaddleAbove;   //!
            TBranch        *b_NonVetoMuonWallTwo_AccRates_PaddleBelow;   //!
            TBranch        *b_NonVetoMuonWallTwo_OREfficiency_Central;   //!
            TBranch        *b_NonVetoMuonWallTwo_OREfficiency_Overlap;   //!
            TBranch        *b_NonVetoMuonWallTwo_ORError_Central;   //!
            TBranch        *b_NonVetoMuonWallTwo_ORError_Overlap;   //!
            TBranch        *b_VetoMuonWallOneDeltaTime;   //!
            TBranch        *b_VetoMuonWallOnePosX;   //!
            TBranch        *b_VetoMuonWallOnePosY;   //!
            TBranch        *b_VetoMuonWallOne_ANDEfficiency_Central;   //!
            TBranch        *b_VetoMuonWallOne_ANDEfficiency_Overlap;   //!
            TBranch        *b_VetoMuonWallOne_ANDError_Central;   //!
            TBranch        *b_VetoMuonWallOne_ANDError_Overlap;   //!
            TBranch        *b_VetoMuonWallOne_AccRatesError_PaddleAbove;   //!
            TBranch        *b_VetoMuonWallOne_AccRatesError_PaddleBelow;   //!
            TBranch        *b_VetoMuonWallOne_AccRates_PaddleAbove;   //!
            TBranch        *b_VetoMuonWallOne_AccRates_PaddleBelow;   //!
            TBranch        *b_VetoMuonWallOne_OREfficiency_Central;   //!
            TBranch        *b_VetoMuonWallOne_OREfficiency_Overlap;   //!
            TBranch        *b_VetoMuonWallOne_ORError_Central;   //!
            TBranch        *b_VetoMuonWallOne_ORError_Overlap;   //!
            TBranch        *b_VetoMuonWallTwoDeltaTime;   //!
            TBranch        *b_VetoMuonWallTwoPosX;   //!
            TBranch        *b_VetoMuonWallTwoPosY;   //!
            TBranch        *b_VetoMuonWallTwo_ANDEfficiency_Central;   //!
            TBranch        *b_VetoMuonWallTwo_ANDEfficiency_Overlap;   //!
            TBranch        *b_VetoMuonWallTwo_ANDError_Central;   //!
            TBranch        *b_VetoMuonWallTwo_ANDError_Overlap;   //!
            TBranch        *b_VetoMuonWallTwo_AccRatesError_PaddleAbove;   //!
            TBranch        *b_VetoMuonWallTwo_AccRatesError_PaddleBelow;   //!
            TBranch        *b_VetoMuonWallTwo_AccRates_PaddleAbove;   //!
            TBranch        *b_VetoMuonWallTwo_AccRates_PaddleBelow;   //!
            TBranch        *b_VetoMuonWallTwo_OREfficiency_Central;   //!
            TBranch        *b_VetoMuonWallTwo_OREfficiency_Overlap;   //!
            TBranch        *b_VetoMuonWallTwo_ORError_Central;   //!
            TBranch        *b_VetoMuonWallTwo_ORError_Overlap;   //!
            TBranch        *b_blob_ccqe_recoil_E;   //!
            TBranch        *b_blob_disp_E;   //!
            TBranch        *b_blob_disp_E_ecal;   //!
            TBranch        *b_blob_disp_E_ecal_em;   //!
            TBranch        *b_blob_disp_E_ecal_highn;   //!
            TBranch        *b_blob_disp_E_ecal_lown;   //!
            TBranch        *b_blob_disp_E_ecal_meson;   //!
            TBranch        *b_blob_disp_E_ecal_midn;   //!
            TBranch        *b_blob_disp_E_ecal_mu;   //!
            TBranch        *b_blob_disp_E_ecal_other;   //!
            TBranch        *b_blob_disp_E_ecal_p;   //!
            TBranch        *b_blob_disp_E_ecal_xtalk;   //!
            TBranch        *b_blob_disp_E_em;   //!
            TBranch        *b_blob_disp_E_hcal;   //!
            TBranch        *b_blob_disp_E_hcal_em;   //!
            TBranch        *b_blob_disp_E_hcal_highn;   //!
            TBranch        *b_blob_disp_E_hcal_lown;   //!
            TBranch        *b_blob_disp_E_hcal_meson;   //!
            TBranch        *b_blob_disp_E_hcal_midn;   //!
            TBranch        *b_blob_disp_E_hcal_mu;   //!
            TBranch        *b_blob_disp_E_hcal_other;   //!
            TBranch        *b_blob_disp_E_hcal_p;   //!
            TBranch        *b_blob_disp_E_hcal_xtalk;   //!
            TBranch        *b_blob_disp_E_highn;   //!
            TBranch        *b_blob_disp_E_lown;   //!
            TBranch        *b_blob_disp_E_meson;   //!
            TBranch        *b_blob_disp_E_midn;   //!
            TBranch        *b_blob_disp_E_mu;   //!
            TBranch        *b_blob_disp_E_nucl;   //!
            TBranch        *b_blob_disp_E_nucl_em;   //!
            TBranch        *b_blob_disp_E_nucl_highn;   //!
            TBranch        *b_blob_disp_E_nucl_lown;   //!
            TBranch        *b_blob_disp_E_nucl_meson;   //!
            TBranch        *b_blob_disp_E_nucl_midn;   //!
            TBranch        *b_blob_disp_E_nucl_mu;   //!
            TBranch        *b_blob_disp_E_nucl_other;   //!
            TBranch        *b_blob_disp_E_nucl_p;   //!
            TBranch        *b_blob_disp_E_nucl_xtalk;   //!
            TBranch        *b_blob_disp_E_od;   //!
            TBranch        *b_blob_disp_E_od_em;   //!
            TBranch        *b_blob_disp_E_od_highn;   //!
            TBranch        *b_blob_disp_E_od_lown;   //!
            TBranch        *b_blob_disp_E_od_meson;   //!
            TBranch        *b_blob_disp_E_od_midn;   //!
            TBranch        *b_blob_disp_E_od_mu;   //!
            TBranch        *b_blob_disp_E_od_other;   //!
            TBranch        *b_blob_disp_E_od_p;   //!
            TBranch        *b_blob_disp_E_od_xtalk;   //!
            TBranch        *b_blob_disp_E_other;   //!
            TBranch        *b_blob_disp_E_p;   //!
            TBranch        *b_blob_disp_E_tracker;   //!
            TBranch        *b_blob_disp_E_tracker_em;   //!
            TBranch        *b_blob_disp_E_tracker_highn;   //!
            TBranch        *b_blob_disp_E_tracker_lown;   //!
            TBranch        *b_blob_disp_E_tracker_meson;   //!
            TBranch        *b_blob_disp_E_tracker_midn;   //!
            TBranch        *b_blob_disp_E_tracker_mu;   //!
            TBranch        *b_blob_disp_E_tracker_other;   //!
            TBranch        *b_blob_disp_E_tracker_p;   //!
            TBranch        *b_blob_disp_E_tracker_xtalk;   //!
            TBranch        *b_blob_disp_E_xtalk;   //!
            TBranch        *b_blob_iso_E;   //!
            TBranch        *b_blob_iso_E_ecal;   //!
            TBranch        *b_blob_iso_E_ecal_em;   //!
            TBranch        *b_blob_iso_E_ecal_highn;   //!
            TBranch        *b_blob_iso_E_ecal_lown;   //!
            TBranch        *b_blob_iso_E_ecal_meson;   //!
            TBranch        *b_blob_iso_E_ecal_midn;   //!
            TBranch        *b_blob_iso_E_ecal_mu;   //!
            TBranch        *b_blob_iso_E_ecal_other;   //!
            TBranch        *b_blob_iso_E_ecal_p;   //!
            TBranch        *b_blob_iso_E_ecal_xtalk;   //!
            TBranch        *b_blob_iso_E_em;   //!
            TBranch        *b_blob_iso_E_hcal;   //!
            TBranch        *b_blob_iso_E_hcal_em;   //!
            TBranch        *b_blob_iso_E_hcal_highn;   //!
            TBranch        *b_blob_iso_E_hcal_lown;   //!
            TBranch        *b_blob_iso_E_hcal_meson;   //!
            TBranch        *b_blob_iso_E_hcal_midn;   //!
            TBranch        *b_blob_iso_E_hcal_mu;   //!
            TBranch        *b_blob_iso_E_hcal_other;   //!
            TBranch        *b_blob_iso_E_hcal_p;   //!
            TBranch        *b_blob_iso_E_hcal_xtalk;   //!
            TBranch        *b_blob_iso_E_highn;   //!
            TBranch        *b_blob_iso_E_lown;   //!
            TBranch        *b_blob_iso_E_meson;   //!
            TBranch        *b_blob_iso_E_midn;   //!
            TBranch        *b_blob_iso_E_mu;   //!
            TBranch        *b_blob_iso_E_nucl;   //!
            TBranch        *b_blob_iso_E_nucl_em;   //!
            TBranch        *b_blob_iso_E_nucl_highn;   //!
            TBranch        *b_blob_iso_E_nucl_lown;   //!
            TBranch        *b_blob_iso_E_nucl_meson;   //!
            TBranch        *b_blob_iso_E_nucl_midn;   //!
            TBranch        *b_blob_iso_E_nucl_mu;   //!
            TBranch        *b_blob_iso_E_nucl_other;   //!
            TBranch        *b_blob_iso_E_nucl_p;   //!
            TBranch        *b_blob_iso_E_nucl_xtalk;   //!
            TBranch        *b_blob_iso_E_od;   //!
            TBranch        *b_blob_iso_E_od_em;   //!
            TBranch        *b_blob_iso_E_od_highn;   //!
            TBranch        *b_blob_iso_E_od_lown;   //!
            TBranch        *b_blob_iso_E_od_meson;   //!
            TBranch        *b_blob_iso_E_od_midn;   //!
            TBranch        *b_blob_iso_E_od_mu;   //!
            TBranch        *b_blob_iso_E_od_other;   //!
            TBranch        *b_blob_iso_E_od_p;   //!
            TBranch        *b_blob_iso_E_od_xtalk;   //!
            TBranch        *b_blob_iso_E_other;   //!
            TBranch        *b_blob_iso_E_p;   //!
            TBranch        *b_blob_iso_E_tracker;   //!
            TBranch        *b_blob_iso_E_tracker_em;   //!
            TBranch        *b_blob_iso_E_tracker_highn;   //!
            TBranch        *b_blob_iso_E_tracker_lown;   //!
            TBranch        *b_blob_iso_E_tracker_meson;   //!
            TBranch        *b_blob_iso_E_tracker_midn;   //!
            TBranch        *b_blob_iso_E_tracker_mu;   //!
            TBranch        *b_blob_iso_E_tracker_other;   //!
            TBranch        *b_blob_iso_E_tracker_p;   //!
            TBranch        *b_blob_iso_E_tracker_xtalk;   //!
            TBranch        *b_blob_iso_E_xtalk;   //!
            TBranch        *b_blob_mufuzz_E;   //!
            TBranch        *b_blob_mufuzz_E_ecal;   //!
            TBranch        *b_blob_mufuzz_E_ecal_em;   //!
            TBranch        *b_blob_mufuzz_E_ecal_highn;   //!
            TBranch        *b_blob_mufuzz_E_ecal_lown;   //!
            TBranch        *b_blob_mufuzz_E_ecal_meson;   //!
            TBranch        *b_blob_mufuzz_E_ecal_midn;   //!
            TBranch        *b_blob_mufuzz_E_ecal_mu;   //!
            TBranch        *b_blob_mufuzz_E_ecal_other;   //!
            TBranch        *b_blob_mufuzz_E_ecal_p;   //!
            TBranch        *b_blob_mufuzz_E_ecal_xtalk;   //!
            TBranch        *b_blob_mufuzz_E_em;   //!
            TBranch        *b_blob_mufuzz_E_hcal;   //!
            TBranch        *b_blob_mufuzz_E_hcal_em;   //!
            TBranch        *b_blob_mufuzz_E_hcal_highn;   //!
            TBranch        *b_blob_mufuzz_E_hcal_lown;   //!
            TBranch        *b_blob_mufuzz_E_hcal_meson;   //!
            TBranch        *b_blob_mufuzz_E_hcal_midn;   //!
            TBranch        *b_blob_mufuzz_E_hcal_mu;   //!
            TBranch        *b_blob_mufuzz_E_hcal_other;   //!
            TBranch        *b_blob_mufuzz_E_hcal_p;   //!
            TBranch        *b_blob_mufuzz_E_hcal_xtalk;   //!
            TBranch        *b_blob_mufuzz_E_highn;   //!
            TBranch        *b_blob_mufuzz_E_lown;   //!
            TBranch        *b_blob_mufuzz_E_meson;   //!
            TBranch        *b_blob_mufuzz_E_midn;   //!
            TBranch        *b_blob_mufuzz_E_mu;   //!
            TBranch        *b_blob_mufuzz_E_nucl;   //!
            TBranch        *b_blob_mufuzz_E_nucl_em;   //!
            TBranch        *b_blob_mufuzz_E_nucl_highn;   //!
            TBranch        *b_blob_mufuzz_E_nucl_lown;   //!
            TBranch        *b_blob_mufuzz_E_nucl_meson;   //!
            TBranch        *b_blob_mufuzz_E_nucl_midn;   //!
            TBranch        *b_blob_mufuzz_E_nucl_mu;   //!
            TBranch        *b_blob_mufuzz_E_nucl_other;   //!
            TBranch        *b_blob_mufuzz_E_nucl_p;   //!
            TBranch        *b_blob_mufuzz_E_nucl_xtalk;   //!
            TBranch        *b_blob_mufuzz_E_od;   //!
            TBranch        *b_blob_mufuzz_E_od_em;   //!
            TBranch        *b_blob_mufuzz_E_od_highn;   //!
            TBranch        *b_blob_mufuzz_E_od_lown;   //!
            TBranch        *b_blob_mufuzz_E_od_meson;   //!
            TBranch        *b_blob_mufuzz_E_od_midn;   //!
            TBranch        *b_blob_mufuzz_E_od_mu;   //!
            TBranch        *b_blob_mufuzz_E_od_other;   //!
            TBranch        *b_blob_mufuzz_E_od_p;   //!
            TBranch        *b_blob_mufuzz_E_od_xtalk;   //!
            TBranch        *b_blob_mufuzz_E_other;   //!
            TBranch        *b_blob_mufuzz_E_p;   //!
            TBranch        *b_blob_mufuzz_E_tracker;   //!
            TBranch        *b_blob_mufuzz_E_tracker_em;   //!
            TBranch        *b_blob_mufuzz_E_tracker_highn;   //!
            TBranch        *b_blob_mufuzz_E_tracker_lown;   //!
            TBranch        *b_blob_mufuzz_E_tracker_meson;   //!
            TBranch        *b_blob_mufuzz_E_tracker_midn;   //!
            TBranch        *b_blob_mufuzz_E_tracker_mu;   //!
            TBranch        *b_blob_mufuzz_E_tracker_other;   //!
            TBranch        *b_blob_mufuzz_E_tracker_p;   //!
            TBranch        *b_blob_mufuzz_E_tracker_xtalk;   //!
            TBranch        *b_blob_mufuzz_E_xtalk;   //!
            TBranch        *b_blob_recoil_E;   //!
            TBranch        *b_blob_recoil_E_ecal;   //!
            TBranch        *b_blob_recoil_E_ecal_em;   //!
            TBranch        *b_blob_recoil_E_ecal_highn;   //!
            TBranch        *b_blob_recoil_E_ecal_lown;   //!
            TBranch        *b_blob_recoil_E_ecal_meson;   //!
            TBranch        *b_blob_recoil_E_ecal_midn;   //!
            TBranch        *b_blob_recoil_E_ecal_mu;   //!
            TBranch        *b_blob_recoil_E_ecal_other;   //!
            TBranch        *b_blob_recoil_E_ecal_p;   //!
            TBranch        *b_blob_recoil_E_ecal_xtalk;   //!
            TBranch        *b_blob_recoil_E_em;   //!
            TBranch        *b_blob_recoil_E_hcal;   //!
            TBranch        *b_blob_recoil_E_hcal_em;   //!
            TBranch        *b_blob_recoil_E_hcal_highn;   //!
            TBranch        *b_blob_recoil_E_hcal_lown;   //!
            TBranch        *b_blob_recoil_E_hcal_meson;   //!
            TBranch        *b_blob_recoil_E_hcal_midn;   //!
            TBranch        *b_blob_recoil_E_hcal_mu;   //!
            TBranch        *b_blob_recoil_E_hcal_other;   //!
            TBranch        *b_blob_recoil_E_hcal_p;   //!
            TBranch        *b_blob_recoil_E_hcal_xtalk;   //!
            TBranch        *b_blob_recoil_E_highn;   //!
            TBranch        *b_blob_recoil_E_lown;   //!
            TBranch        *b_blob_recoil_E_meson;   //!
            TBranch        *b_blob_recoil_E_midn;   //!
            TBranch        *b_blob_recoil_E_mu;   //!
            TBranch        *b_blob_recoil_E_nucl;   //!
            TBranch        *b_blob_recoil_E_nucl_em;   //!
            TBranch        *b_blob_recoil_E_nucl_highn;   //!
            TBranch        *b_blob_recoil_E_nucl_lown;   //!
            TBranch        *b_blob_recoil_E_nucl_meson;   //!
            TBranch        *b_blob_recoil_E_nucl_midn;   //!
            TBranch        *b_blob_recoil_E_nucl_mu;   //!
            TBranch        *b_blob_recoil_E_nucl_other;   //!
            TBranch        *b_blob_recoil_E_nucl_p;   //!
            TBranch        *b_blob_recoil_E_nucl_xtalk;   //!
            TBranch        *b_blob_recoil_E_od;   //!
            TBranch        *b_blob_recoil_E_od_em;   //!
            TBranch        *b_blob_recoil_E_od_highn;   //!
            TBranch        *b_blob_recoil_E_od_lown;   //!
            TBranch        *b_blob_recoil_E_od_meson;   //!
            TBranch        *b_blob_recoil_E_od_midn;   //!
            TBranch        *b_blob_recoil_E_od_mu;   //!
            TBranch        *b_blob_recoil_E_od_other;   //!
            TBranch        *b_blob_recoil_E_od_p;   //!
            TBranch        *b_blob_recoil_E_od_xtalk;   //!
            TBranch        *b_blob_recoil_E_other;   //!
            TBranch        *b_blob_recoil_E_p;   //!
            TBranch        *b_blob_recoil_E_tracker;   //!
            TBranch        *b_blob_recoil_E_tracker_em;   //!
            TBranch        *b_blob_recoil_E_tracker_highn;   //!
            TBranch        *b_blob_recoil_E_tracker_lown;   //!
            TBranch        *b_blob_recoil_E_tracker_meson;   //!
            TBranch        *b_blob_recoil_E_tracker_midn;   //!
            TBranch        *b_blob_recoil_E_tracker_mu;   //!
            TBranch        *b_blob_recoil_E_tracker_other;   //!
            TBranch        *b_blob_recoil_E_tracker_p;   //!
            TBranch        *b_blob_recoil_E_tracker_xtalk;   //!
            TBranch        *b_blob_recoil_E_xtalk;   //!
            TBranch        *b_blob_vtx_E;   //!
            TBranch        *b_blob_vtx_E_ecal;   //!
            TBranch        *b_blob_vtx_E_ecal_em;   //!
            TBranch        *b_blob_vtx_E_ecal_highn;   //!
            TBranch        *b_blob_vtx_E_ecal_lown;   //!
            TBranch        *b_blob_vtx_E_ecal_meson;   //!
            TBranch        *b_blob_vtx_E_ecal_midn;   //!
            TBranch        *b_blob_vtx_E_ecal_mu;   //!
            TBranch        *b_blob_vtx_E_ecal_other;   //!
            TBranch        *b_blob_vtx_E_ecal_p;   //!
            TBranch        *b_blob_vtx_E_ecal_xtalk;   //!
            TBranch        *b_blob_vtx_E_em;   //!
            TBranch        *b_blob_vtx_E_hcal;   //!
            TBranch        *b_blob_vtx_E_hcal_em;   //!
            TBranch        *b_blob_vtx_E_hcal_highn;   //!
            TBranch        *b_blob_vtx_E_hcal_lown;   //!
            TBranch        *b_blob_vtx_E_hcal_meson;   //!
            TBranch        *b_blob_vtx_E_hcal_midn;   //!
            TBranch        *b_blob_vtx_E_hcal_mu;   //!
            TBranch        *b_blob_vtx_E_hcal_other;   //!
            TBranch        *b_blob_vtx_E_hcal_p;   //!
            TBranch        *b_blob_vtx_E_hcal_xtalk;   //!
            TBranch        *b_blob_vtx_E_highn;   //!
            TBranch        *b_blob_vtx_E_lown;   //!
            TBranch        *b_blob_vtx_E_meson;   //!
            TBranch        *b_blob_vtx_E_midn;   //!
            TBranch        *b_blob_vtx_E_mu;   //!
            TBranch        *b_blob_vtx_E_nucl;   //!
            TBranch        *b_blob_vtx_E_nucl_em;   //!
            TBranch        *b_blob_vtx_E_nucl_highn;   //!
            TBranch        *b_blob_vtx_E_nucl_lown;   //!
            TBranch        *b_blob_vtx_E_nucl_meson;   //!
            TBranch        *b_blob_vtx_E_nucl_midn;   //!
            TBranch        *b_blob_vtx_E_nucl_mu;   //!
            TBranch        *b_blob_vtx_E_nucl_other;   //!
            TBranch        *b_blob_vtx_E_nucl_p;   //!
            TBranch        *b_blob_vtx_E_nucl_xtalk;   //!
            TBranch        *b_blob_vtx_E_od;   //!
            TBranch        *b_blob_vtx_E_od_em;   //!
            TBranch        *b_blob_vtx_E_od_highn;   //!
            TBranch        *b_blob_vtx_E_od_lown;   //!
            TBranch        *b_blob_vtx_E_od_meson;   //!
            TBranch        *b_blob_vtx_E_od_midn;   //!
            TBranch        *b_blob_vtx_E_od_mu;   //!
            TBranch        *b_blob_vtx_E_od_other;   //!
            TBranch        *b_blob_vtx_E_od_p;   //!
            TBranch        *b_blob_vtx_E_od_xtalk;   //!
            TBranch        *b_blob_vtx_E_other;   //!
            TBranch        *b_blob_vtx_E_p;   //!
            TBranch        *b_blob_vtx_E_tracker;   //!
            TBranch        *b_blob_vtx_E_tracker_em;   //!
            TBranch        *b_blob_vtx_E_tracker_highn;   //!
            TBranch        *b_blob_vtx_E_tracker_lown;   //!
            TBranch        *b_blob_vtx_E_tracker_meson;   //!
            TBranch        *b_blob_vtx_E_tracker_midn;   //!
            TBranch        *b_blob_vtx_E_tracker_mu;   //!
            TBranch        *b_blob_vtx_E_tracker_other;   //!
            TBranch        *b_blob_vtx_E_tracker_p;   //!
            TBranch        *b_blob_vtx_E_tracker_xtalk;   //!
            TBranch        *b_blob_vtx_E_xtalk;   //!
            TBranch        *b_energy_from_mc;   //!
            TBranch        *b_energy_from_mc_fraction;   //!
            TBranch        *b_energy_from_mc_fraction_of_highest;   //!
            TBranch        *b_muon_phi;   //!
            TBranch        *b_muon_theta;   //!
            TBranch        *b_muon_thetaX;   //!
            TBranch        *b_muon_thetaY;   //!
            TBranch        *b_muon_trackVertexTime;   //!
            TBranch        *b_muon_truthMatch_fraction;   //!
            TBranch        *b_numi_bpm1;   //!
            TBranch        *b_numi_bpm2;   //!
            TBranch        *b_numi_bpm3;   //!
            TBranch        *b_numi_bpm4;   //!
            TBranch        *b_numi_bpm5;   //!
            TBranch        *b_numi_bpm6;   //!
            TBranch        *b_numi_horn_curr;   //!
            TBranch        *b_numi_pot;   //!
            TBranch        *b_numi_tor101;   //!
            TBranch        *b_numi_tortgt;   //!
            TBranch        *b_numi_tr101d;   //!
            TBranch        *b_numi_trtgtd;   //!
            TBranch        *b_numi_x;   //!
            TBranch        *b_numi_x_width;   //!
            TBranch        *b_numi_y;   //!
            TBranch        *b_numi_y_width;   //!
            TBranch        *b_phys_energy_dispersed;   //!
            TBranch        *b_phys_energy_in_road_downstream;   //!
            TBranch        *b_phys_energy_in_road_upstream;   //!
            TBranch        *b_phys_energy_unattached;   //!
            TBranch        *b_prim_vtx_smallest_opening_angle;   //!
            TBranch        *b_primary_track_minerva_energy;   //!
            TBranch        *b_primary_track_minerva_phi;   //!
            TBranch        *b_primary_track_minerva_theta;   //!
            TBranch        *b_usact_avg_E_consecutive_huge;   //!
            TBranch        *b_usact_avg_E_consecutive_inf;   //!
            TBranch        *b_usact_avg_E_consecutive_large;   //!
            TBranch        *b_usact_avg_E_consecutive_normal;   //!
            TBranch        *b_usact_avg_E_consecutive_small;   //!
            TBranch        *b_usact_avg_E_consecutive_texas_sized;   //!
            TBranch        *b_usact_avg_E_consecutive_tiny;   //!
            TBranch        *b_usact_avg_E_huge;   //!
            TBranch        *b_usact_avg_E_inf;   //!
            TBranch        *b_usact_avg_E_large;   //!
            TBranch        *b_usact_avg_E_normal;   //!
            TBranch        *b_usact_avg_E_small;   //!
            TBranch        *b_usact_avg_E_texas_sized;   //!
            TBranch        *b_usact_avg_E_tiny;   //!
            TBranch        *b_usact_frac_withE_huge;   //!
            TBranch        *b_usact_frac_withE_inf;   //!
            TBranch        *b_usact_frac_withE_large;   //!
            TBranch        *b_usact_frac_withE_normal;   //!
            TBranch        *b_usact_frac_withE_small;   //!
            TBranch        *b_usact_frac_withE_texas_sized;   //!
            TBranch        *b_usact_frac_withE_tiny;   //!
            TBranch        *b_vetoMuonTime;   //!
            TBranch        *b_vtx_fit_chi2;   //!
            TBranch        *b_n_vetoDigits;   //!
            TBranch        *b_discrFired;   //!
            TBranch        *b_has_michel_at_vertex_sz;   //!
            TBranch        *b_has_michel_at_vertex;   //!
            TBranch        *b_has_michel_beginModule_sz;   //!
            TBranch        *b_has_michel_beginModule;   //!
            TBranch        *b_has_michel_category_sz;   //!
            TBranch        *b_has_michel_category;   //!
            TBranch        *b_has_michel_endModule_sz;   //!
            TBranch        *b_has_michel_endModule;   //!
            TBranch        *b_has_michel_numDigits_sz;   //!
            TBranch        *b_has_michel_numDigits;   //!
            TBranch        *b_has_michel_numModules_sz;   //!
            TBranch        *b_has_michel_numModules;   //!
            TBranch        *b_has_michel_numPlanes_sz;   //!
            TBranch        *b_has_michel_numPlanes;   //!
            TBranch        *b_has_michel_numTracks_sz;   //!
            TBranch        *b_has_michel_numTracks;   //!
            TBranch        *b_has_michel_slice_number_sz;   //!
            TBranch        *b_has_michel_slice_number;   //!
            TBranch        *b_has_michel_vertex_type_sz;   //!
            TBranch        *b_has_michel_vertex_type;   //!
            TBranch        *b_has_michel_view_sum_sz;   //!
            TBranch        *b_has_michel_view_sum;   //!
            TBranch        *b_latticeEnergyIndices;   //!
            TBranch        *b_paddle;   //!
            TBranch        *b_pmt;   //!
            TBranch        *b_pmt_occupancy;   //!
            TBranch        *b_wall;   //!
            TBranch        *b_has_michel_distance_sz;   //!
            TBranch        *b_has_michel_distance;   //!
            TBranch        *b_has_michel_energy_sz;   //!
            TBranch        *b_has_michel_energy;   //!
            TBranch        *b_has_michel_slice_energy_sz;   //!
            TBranch        *b_has_michel_slice_energy;   //!
            TBranch        *b_has_michel_time_diff_sz;   //!
            TBranch        *b_has_michel_time_diff;   //!
            TBranch        *b_latticeNormEnergySums;   //!
            TBranch        *b_latticeRelativeTimes;   //!
            TBranch        *b_muon_DSnode_pos;   //!
            TBranch        *b_muon_corrected_p;   //!
            TBranch        *b_muon_sp;   //!
            TBranch        *b_muon_sp_orig;   //!
            TBranch        *b_orig_short_vtx;   //!
            TBranch        *b_orig_vtx;   //!
            TBranch        *b_primary_track_minerva_end_position;   //!
            TBranch        *b_primary_track_minerva_start_position;   //!
            TBranch        *b_time_distribution;   //!
            TBranch        *b_truth_has_michel_from_pion_minus_momentum_sz;   //!
            TBranch        *b_truth_has_michel_from_pion_minus_momentum;   //!
            TBranch        *b_truth_has_michel_from_pion_plus_momentum_sz;   //!
            TBranch        *b_truth_has_michel_from_pion_plus_momentum;   //!
            TBranch        *b_usact_E_per_plane_huge;   //!
            TBranch        *b_usact_E_per_plane_inf;   //!
            TBranch        *b_usact_E_per_plane_large;   //!
            TBranch        *b_usact_E_per_plane_normal;   //!
            TBranch        *b_usact_E_per_plane_small;   //!
            TBranch        *b_usact_E_per_plane_texas_sized;   //!
            TBranch        *b_usact_E_per_plane_tiny;   //!
            TBranch        *b_vtx_blob_radius;   //!
            TBranch        *b_truth_has_physics_event;   //!
            TBranch        *b_truth_muon_is_plausible;   //!
            TBranch        *b_truth_reco_has_int_vtx;   //!
            TBranch        *b_truth_reco_has_bad_object;   //!
            TBranch        *b_truth_reco_has_muon;   //!
            TBranch        *b_truth_reco_muon_has_charge;   //!
            TBranch        *b_truth_reco_has_good_vtx;   //!
            TBranch        *b_truth_reco_is_rock_muon;   //!
            TBranch        *b_truth_pass_NukeCC;   //!
            TBranch        *b_truth_in_analyzable_area;   //!
            TBranch        *b_truth_in_fiducial_area;   //!
            TBranch        *b_truth_muon_leaving_code;   //!
            TBranch        *b_truth_muon_track_id;   //!
            TBranch        *b_truth_reco_has_michel_electron;   //!
            TBranch        *b_truth_targetID;   //!
            TBranch        *b_truth_targetZ;   //!
            TBranch        *b_truth_target_code;   //!
            TBranch        *b_truth_vtx_module;   //!
            TBranch        *b_truth_vtx_plane;   //!
            TBranch        *b_truth_fs_energy_em;   //!
            TBranch        *b_truth_fs_energy_highn;   //!
            TBranch        *b_truth_fs_energy_hmidn;   //!
            TBranch        *b_truth_fs_energy_lown;   //!
            TBranch        *b_truth_fs_energy_meson;   //!
            TBranch        *b_truth_fs_energy_mu;   //!
            TBranch        *b_truth_fs_energy_o;   //!
            TBranch        *b_truth_fs_energy_p;   //!
            TBranch        *b_truth_muon_phi;   //!
            TBranch        *b_truth_muon_theta;   //!
            TBranch        *b_truth_muon_thetaX;   //!
            TBranch        *b_truth_muon_thetaY;   //!
            TBranch        *b_truth_target_dist_to_division;   //!
            TBranch        *b_truth_target_zDist;   //!
            TBranch        *b_truth_ref_targZ;   //!
            TBranch        *b_genie_wgt_n_shifts;   //!
            TBranch        *b_truth_genie_wgt_AGKYxF1pi;   //!
            TBranch        *b_truth_genie_wgt_AhtBY;   //!
            TBranch        *b_truth_genie_wgt_BhtBY;   //!
            TBranch        *b_truth_genie_wgt_CCQEPauliSupViaKF;   //!
            TBranch        *b_truth_genie_wgt_CV1uBY;   //!
            TBranch        *b_truth_genie_wgt_CV2uBY;   //!
            TBranch        *b_truth_genie_wgt_EtaNCEL;   //!
            TBranch        *b_truth_genie_wgt_FrAbs_N;   //!
            TBranch        *b_truth_genie_wgt_FrAbs_pi;   //!
            TBranch        *b_truth_genie_wgt_FrCEx_N;   //!
            TBranch        *b_truth_genie_wgt_FrCEx_pi;   //!
            TBranch        *b_truth_genie_wgt_FrElas_N;   //!
            TBranch        *b_truth_genie_wgt_FrElas_pi;   //!
            TBranch        *b_truth_genie_wgt_FrInel_N;   //!
            TBranch        *b_truth_genie_wgt_FrInel_pi;   //!
            TBranch        *b_truth_genie_wgt_FrPiProd_N;   //!
            TBranch        *b_truth_genie_wgt_FrPiProd_pi;   //!
            TBranch        *b_truth_genie_wgt_MFP_N;   //!
            TBranch        *b_truth_genie_wgt_MFP_pi;   //!
            TBranch        *b_truth_genie_wgt_MaCCQE;   //!
            TBranch        *b_truth_genie_wgt_MaCCQEshape;   //!
            TBranch        *b_truth_genie_wgt_MaNCEL;   //!
            TBranch        *b_truth_genie_wgt_MaRES;   //!
            TBranch        *b_truth_genie_wgt_MvRES;   //!
            TBranch        *b_truth_genie_wgt_NormCCQE;   //!
            TBranch        *b_truth_genie_wgt_NormCCRES;   //!
            TBranch        *b_truth_genie_wgt_NormDISCC;   //!
            TBranch        *b_truth_genie_wgt_NormNCRES;   //!
            TBranch        *b_truth_genie_wgt_RDecBR1gamma;   //!
            TBranch        *b_truth_genie_wgt_Rvn1pi;   //!
            TBranch        *b_truth_genie_wgt_Rvn2pi;   //!
            TBranch        *b_truth_genie_wgt_Rvp1pi;   //!
            TBranch        *b_truth_genie_wgt_Rvp2pi;   //!
            TBranch        *b_truth_genie_wgt_Theta_Delta2Npi;   //!
            TBranch        *b_truth_genie_wgt_VecFFCCQEshape;   //!
            TBranch        *b_truth_genie_wgt_shifts;   //!
            TBranch        *b_truth_muon_end_momentum;   //!
            TBranch        *b_truth_muon_end_position;   //!
            TBranch        *b_truth_ref_dist_to_division;   //!
            TBranch        *b_truth_ref_dist_to_target;   //!
            TBranch        *b_NukeCC_nuFlavor;   //!
            TBranch        *b_NukeCC_nuHelicity;   //!
            TBranch        *b_NukeCC_intCurrent;   //!
            TBranch        *b_NukeCC_intType;   //!
            TBranch        *b_NukeCC_E;   //!
            TBranch        *b_NukeCC_Q2;   //!
            TBranch        *b_NukeCC_x;   //!
            TBranch        *b_NukeCC_y;   //!
            TBranch        *b_NukeCC_W;   //!
            TBranch        *b_NukeCC_score;   //!
            TBranch        *b_NukeCC_leptonE;   //!
            TBranch        *b_NukeCC_vtx;   //!
            TBranch        *b_NukeCC_minos_trk_is_contained;   //!
            TBranch        *b_NukeCC_minos_trk_is_ok;   //!
            TBranch        *b_NukeCC_minos_used_range;   //!
            TBranch        *b_NukeCC_minos_used_curvature;   //!
            TBranch        *b_NukeCC_pass_canonical_cut;   //!
            TBranch        *b_NukeCC_is_cc;   //!
            TBranch        *b_NukeCC_in_analyzable_area;   //!
            TBranch        *b_NukeCC_in_fiducial_area;   //!
            TBranch        *b_NukeCC_minos_trk_end_plane;   //!
            TBranch        *b_NukeCC_minos_trk_quality;   //!
            TBranch        *b_NukeCC_r_minos_trk_vtx_plane;   //!
            TBranch        *b_NukeCC_t_minos_trk_numFSMuons;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLeptonPDG;   //!
            TBranch        *b_NukeCC_targetID;   //!
            TBranch        *b_NukeCC_targetZ;   //!
            TBranch        *b_NukeCC_target_code;   //!
            TBranch        *b_NukeCC_vtx_module;   //!
            TBranch        *b_NukeCC_vtx_plane;   //!
            TBranch        *b_NukeCC_E_ccqe;   //!
            TBranch        *b_NukeCC_E_wide_window;   //!
            TBranch        *b_NukeCC_Q2_ccqe;   //!
            TBranch        *b_NukeCC_Q2_wide_window;   //!
            TBranch        *b_NukeCC_W_wide_window;   //!
            TBranch        *b_NukeCC_minos_trk_bave;   //!
            TBranch        *b_NukeCC_minos_trk_chi2;   //!
            TBranch        *b_NukeCC_minos_trk_end_u;   //!
            TBranch        *b_NukeCC_minos_trk_end_v;   //!
            TBranch        *b_NukeCC_minos_trk_end_x;   //!
            TBranch        *b_NukeCC_minos_trk_end_y;   //!
            TBranch        *b_NukeCC_minos_trk_end_z;   //!
            TBranch        *b_NukeCC_minos_trk_eqp;   //!
            TBranch        *b_NukeCC_minos_trk_eqp_qp;   //!
            TBranch        *b_NukeCC_minos_trk_fit_pass;   //!
            TBranch        *b_NukeCC_minos_trk_ndf;   //!
            TBranch        *b_NukeCC_minos_trk_p;   //!
            TBranch        *b_NukeCC_minos_trk_p_curvature;   //!
            TBranch        *b_NukeCC_minos_trk_p_range;   //!
            TBranch        *b_NukeCC_minos_trk_qp;   //!
            TBranch        *b_NukeCC_minos_trk_vtx_x;   //!
            TBranch        *b_NukeCC_minos_trk_vtx_y;   //!
            TBranch        *b_NukeCC_minos_trk_vtx_z;   //!
            TBranch        *b_NukeCC_nu_energy_recoil;   //!
            TBranch        *b_NukeCC_r_minos_trk_bdL;   //!
            TBranch        *b_NukeCC_r_minos_trk_end_dcosx;   //!
            TBranch        *b_NukeCC_r_minos_trk_end_dcosy;   //!
            TBranch        *b_NukeCC_r_minos_trk_end_dcosz;   //!
            TBranch        *b_NukeCC_r_minos_trk_vtx_dcosx;   //!
            TBranch        *b_NukeCC_r_minos_trk_vtx_dcosy;   //!
            TBranch        *b_NukeCC_r_minos_trk_vtx_dcosz;   //!
            TBranch        *b_NukeCC_recoil_E;   //!
            TBranch        *b_NukeCC_recoil_E_wide_window;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMinosInitProjPx;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMinosInitProjPy;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMinosInitProjPz;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMinosInitProjX;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMinosInitProjY;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMinosInitProjZ;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvFinalPx;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvFinalPy;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvFinalPz;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvFinalX;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvFinalY;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvFinalZ;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvInitPx;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvInitPy;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvInitPz;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvInitX;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvInitY;   //!
            TBranch        *b_NukeCC_t_minos_trk_primFSLepMnvInitZ;   //!
            TBranch        *b_NukeCC_target_dist_to_division;   //!
            TBranch        *b_NukeCC_target_zDist;   //!
            TBranch        *b_NukeCC_x_wide_window;   //!
            TBranch        *b_NukeCC_y_wide_window;   //!
            TBranch        *b_NukeCC_ref_targZ;   //!
            TBranch        *b_NukeCC_smeared_is_fiducial;   //!
            TBranch        *b_NukeCC_smeared_pass_dist_to_div;   //!
            TBranch        *b_NukeCC_smeared_targetID;   //!
            TBranch        *b_NukeCC_smeared_targetZ;   //!
            TBranch        *b_NukeCC_smeared_vtx_mod;   //!
            TBranch        *b_NukeCC_muon_vtx;   //!
            TBranch        *b_NukeCC_ref_dist_to_division;   //!
            TBranch        *b_NukeCC_ref_dist_to_target;   //!
            TBranch        *b_NukeCC_sys_muon_curve_energy_shift;   //!
            TBranch        *b_NukeCC_sys_muon_energy_shift;   //!
            TBranch        *b_NukeCC_sys_muon_minerva_energy_shift;   //!
            TBranch        *b_NukeCC_sys_muon_qSquared_shift;   //!
            TBranch        *b_NukeCC_sys_muon_range_energy_shift;   //!
            TBranch        *b_NukeCC_sys_muon_wSquared_shift;   //!
            TBranch        *b_NukeCC_sys_muon_xbj_shift;   //!
            TBranch        *b_NukeCC_sys_muon_y_shift;   //!
            TBranch        *b_NukeCC_sys_nu_energy_shift;   //!
            TBranch        *b_NukeCC_sys_recoil_energy_shift;   //!
            TBranch        *b_NukeCC_sys_recoil_qSquared_shift;   //!
            TBranch        *b_NukeCC_sys_recoil_wSquared_shift;   //!
            TBranch        *b_NukeCC_sys_recoil_xbj_shift;   //!
            TBranch        *b_NukeCC_sys_recoil_y_shift;   //!
            TBranch        *b_NukeCC_sys_total_qSquared_shift;   //!
            TBranch        *b_NukeCC_sys_total_wSquared_shift;   //!
            TBranch        *b_NukeCC_sys_total_xbj_shift;   //!
            TBranch        *b_NukeCC_sys_total_y_shift;   //!
            TBranch        *b_ev_run;   //!
            TBranch        *b_ev_subrun;   //!
            TBranch        *b_ev_detector;   //!
            TBranch        *b_ev_triggerType;   //!
            TBranch        *b_ev_gate;   //!
            TBranch        *b_ev_global_gate;   //!
            TBranch        *b_ev_gps_time_sec;   //!
            TBranch        *b_ev_gps_time_usec;   //!
            TBranch        *b_mc_run;   //!
            TBranch        *b_mc_subrun;   //!
            TBranch        *b_mc_nInteractions;   //!
            TBranch        *b_mc_MIState;   //!
            TBranch        *b_mc_pot;   //!
            TBranch        *b_mc_beamConfig;   //!
            TBranch        *b_mc_processType;   //!
            TBranch        *b_mc_nthEvtInSpill;   //!
            TBranch        *b_mc_nthEvtInFile;   //!
            TBranch        *b_mc_intType;   //!
            TBranch        *b_mc_current;   //!
            TBranch        *b_mc_charm;   //!
            TBranch        *b_mc_weight;   //!
            TBranch        *b_mc_XSec;   //!
            TBranch        *b_mc_diffXSec;   //!
            TBranch        *b_mc_incoming;   //!
            TBranch        *b_mc_fluxDriverProb;   //!
            TBranch        *b_mc_targetNucleus;   //!
            TBranch        *b_mc_targetZ;   //!
            TBranch        *b_mc_targetA;   //!
            TBranch        *b_mc_targetNucleon;   //!
            TBranch        *b_mc_struckQuark;   //!
            TBranch        *b_mc_seaQuark;   //!
            TBranch        *b_mc_resID;   //!
            TBranch        *b_mc_primaryLepton;   //!
            TBranch        *b_mc_incomingE;   //!
            TBranch        *b_mc_Bjorkenx;   //!
            TBranch        *b_mc_Bjorkeny;   //!
            TBranch        *b_mc_Q2;   //!
            TBranch        *b_mc_nuT;   //!
            TBranch        *b_mc_w;   //!
            TBranch        *b_mc_vtx;   //!
            TBranch        *b_mc_incomingPartVec;   //!
            TBranch        *b_mc_initNucVec;   //!
            TBranch        *b_mc_primFSLepton;   //!
            TBranch        *b_mc_nFSPart;   //!
            TBranch        *b_mc_FSPartPx;   //!
            TBranch        *b_mc_FSPartPy;   //!
            TBranch        *b_mc_FSPartPz;   //!
            TBranch        *b_mc_FSPartE;   //!
            TBranch        *b_mc_FSPartPDG;   //!
            TBranch        *b_mc_er_nPart;   //!
            TBranch        *b_mc_er_ID;   //!
            TBranch        *b_mc_er_status;   //!
            TBranch        *b_mc_er_posInNucX;   //!
            TBranch        *b_mc_er_posInNucY;   //!
            TBranch        *b_mc_er_posInNucZ;   //!
            TBranch        *b_mc_er_Px;   //!
            TBranch        *b_mc_er_Py;   //!
            TBranch        *b_mc_er_Pz;   //!
            TBranch        *b_mc_er_E;   //!
            TBranch        *b_mc_er_FD;   //!
            TBranch        *b_mc_er_LD;   //!
            TBranch        *b_mc_er_mother;   //!
            TBranch        *b_mc_fr_nNuAncestorIDs;   //!
            TBranch        *b_mc_fr_nuAncestorIDs;   //!
            TBranch        *b_mc_fr_nuParentID;   //!
            TBranch        *b_mc_fr_decMode;   //!
            TBranch        *b_mc_fr_primProtonVtx;   //!
            TBranch        *b_mc_fr_primProtonP;   //!
            TBranch        *b_mc_fr_nuParentDecVtx;   //!
            TBranch        *b_mc_fr_nuParentProdVtx;   //!
            TBranch        *b_mc_fr_nuParentProdP;   //!
            TBranch        *b_mc_cvweight_total;   //!
            TBranch        *b_wgt;   //!
            TBranch        *b_mc_cvweight_totalFlux;   //!
            TBranch        *b_mc_cvweight_totalXsec;   //!
            TBranch        *b_mc_ppfx1_cvweight;   //!
            TBranch        *b_mc_hornCurrent_cvweight;   //!
            TBranch        *b_mc_gen1_cvweight_total;   //!
            TBranch        *b_gen1_wgt;   //!
            TBranch        *b_mc_gen1_cvweight_totalFlux;   //!
            TBranch        *b_mc_gen1_cvweight_NA49;   //!
            TBranch        *b_mc_wgt_Flux_BeamFocus_sz;   //!
            TBranch        *b_mc_wgt_Flux_BeamFocus;   //!
            TBranch        *b_mc_wgt_gen1_Flux_Tertiary_sz;   //!
            TBranch        *b_mc_wgt_gen1_Flux_Tertiary;   //!
            TBranch        *b_mc_wgt_gen1_Flux_NA49_sz;   //!
            TBranch        *b_mc_wgt_gen1_Flux_NA49;   //!
            TBranch        *b_mc_wgt_Norm_sz;   //!
            TBranch        *b_mc_wgt_Norm;   //!
            TBranch        *b_mc_wgt_ppfx1_Total_sz;   //!
            TBranch        *b_mc_wgt_ppfx1_Total;   //!
            TBranch        *b_mc_vertex_batch;   //!
            TBranch        *b_numi_x_pos;   //!
            TBranch        *b_numi_y_pos;   //!
            TBranch        *b_batch_structure;   //!
            TBranch        *b_n_prongs;   //!
            TBranch        *b_prong_nParticles;   //!
            TBranch        *b_prong_part_score;   //!
            TBranch        *b_prong_part_mass;   //!
            TBranch        *b_prong_part_charge;   //!
            TBranch        *b_prong_part_pid;   //!
            TBranch        *b_prong_part_E;   //!
            TBranch        *b_prong_part_pos;   //!

            NukeCC(TTree *tree=0);
            virtual ~NukeCC();
            virtual Int_t    Cut(Long64_t entry);
            virtual Int_t    GetEntry(Long64_t entry);
            virtual Long64_t LoadTree(Long64_t entry);
            virtual void     Init(TTree *tree);
            virtual void     Loop();
            virtual Bool_t   Notify();
            virtual void     Show(Long64_t entry = -1);
    };

} // end namespace

#endif

#ifdef NukeCC_cxx
RECOTRACKS_ANA::NukeCC::NukeCC(TTree *tree) : fChain(0) 
{
    // if parameter tree is not specified (or zero), connect the file
    // used to generate this class and read the Tree.
    if (tree == 0) {
        TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("SIM_minerva_00117200_Subruns_0002_NukeCCInclusive_Ana_Tuple_v10r8p12.root");
        if (!f || !f->IsOpen()) {
            f = new TFile("SIM_minerva_00117200_Subruns_0002_NukeCCInclusive_Ana_Tuple_v10r8p12.root");
        }
        f->GetObject("NukeCC",tree);

    }
    Init(tree);
}

RECOTRACKS_ANA::NukeCC::~NukeCC()
{
    if (!fChain) return;
    delete fChain->GetCurrentFile();
}

Int_t RECOTRACKS_ANA::NukeCC::GetEntry(Long64_t entry)
{
    // Read contents of entry.
    if (!fChain) return 0;
    return fChain->GetEntry(entry);
}
Long64_t RECOTRACKS_ANA::NukeCC::LoadTree(Long64_t entry)
{
    // Set the environment to read one entry
    if (!fChain) return -5;
    Long64_t centry = fChain->LoadTree(entry);
    if (centry < 0) return centry;
    if (fChain->GetTreeNumber() != fCurrent) {
        fCurrent = fChain->GetTreeNumber();
        Notify();
    }
    return centry;
}

void RECOTRACKS_ANA::NukeCC::Init(TTree *tree)
{
    // The Init() function is called when the selector needs to initialize
    // a new tree or chain. Typically here the branch addresses and branch
    // pointers of the tree will be set.
    // It is normally not necessary to make changes to the generated
    // code, but the routine can be extended by the user if needed.
    // Init() will be called many times when running on PROOF
    // (once per file to be processed).

    // Set object pointer
    prong_part_E = 0;
    prong_part_pos = 0;
    // Set branch addresses and branch pointers
    if (!tree) return;
    fChain = tree;
    fCurrent = -1;
    fChain->SetMakeClass(1);

    fChain->SetBranchAddress("eventID", &eventID, &b_eventID);
    fChain->SetBranchAddress("physEvtNum", &physEvtNum, &b_physEvtNum);
    fChain->SetBranchAddress("n_hyps", &n_hyps, &b_n_hyps);
    fChain->SetBranchAddress("processType", &processType, &b_processType);
    fChain->SetBranchAddress("primaryPart", &primaryPart, &b_primaryPart);
    fChain->SetBranchAddress("n_slices", &n_slices, &b_n_slices);
    fChain->SetBranchAddress("slice_numbers", slice_numbers, &b_slice_numbers);
    fChain->SetBranchAddress("shared_slice", &shared_slice, &b_shared_slice);
    fChain->SetBranchAddress("vtx", vtx, &b_vtx);
    fChain->SetBranchAddress("vtxErr", vtxErr, &b_vtxErr);
    fChain->SetBranchAddress("E", E, &b_E);
    fChain->SetBranchAddress("reco_vertex_batch", &reco_vertex_batch, &b_reco_vertex_batch);
    fChain->SetBranchAddress("found_truth", &found_truth, &b_found_truth);
    fChain->SetBranchAddress("phys_front_activity", &phys_front_activity, &b_phys_front_activity);
    fChain->SetBranchAddress("phys_energy_in_road_upstream_is_rockmuon_consistent", &phys_energy_in_road_upstream_is_rockmuon_consistent, &b_phys_energy_in_road_upstream_is_rockmuon_consistent);
    fChain->SetBranchAddress("rock_muons_removed", &rock_muons_removed, &b_rock_muons_removed);
    fChain->SetBranchAddress("minos_track_match", &minos_track_match, &b_minos_track_match);
    fChain->SetBranchAddress("minos_stub_match", &minos_stub_match, &b_minos_stub_match);
    fChain->SetBranchAddress("unknown_helicity", &unknown_helicity, &b_unknown_helicity);
    fChain->SetBranchAddress("minos_track_inside_partial_plane", &minos_track_inside_partial_plane, &b_minos_track_inside_partial_plane);
    fChain->SetBranchAddress("prim_vtx_has_misassigned_track_direction", &prim_vtx_has_misassigned_track_direction, &b_prim_vtx_has_misassigned_track_direction);
    fChain->SetBranchAddress("prim_vtx_has_broken_track", &prim_vtx_has_broken_track, &b_prim_vtx_has_broken_track);
    fChain->SetBranchAddress("pass_NukeCC", &pass_NukeCC, &b_pass_NukeCC);
    fChain->SetBranchAddress("short_track_vtx_used", &short_track_vtx_used, &b_short_track_vtx_used);
    fChain->SetBranchAddress("muon_sp_moved", &muon_sp_moved, &b_muon_sp_moved);
    fChain->SetBranchAddress("vtx_fit_converged", &vtx_fit_converged, &b_vtx_fit_converged);
    fChain->SetBranchAddress("muon_is_correct", &muon_is_correct, &b_muon_is_correct);
    fChain->SetBranchAddress("has_int_vtx", &has_int_vtx, &b_has_int_vtx);
    fChain->SetBranchAddress("has_bad_object", &has_bad_object, &b_has_bad_object);
    fChain->SetBranchAddress("has_muon", &has_muon, &b_has_muon);
    fChain->SetBranchAddress("muon_has_charge", &muon_has_charge, &b_muon_has_charge);
    fChain->SetBranchAddress("has_good_vtx", &has_good_vtx, &b_has_good_vtx);
    fChain->SetBranchAddress("is_rock_muon", &is_rock_muon, &b_is_rock_muon);
    fChain->SetBranchAddress("MuonTaggedAsVetoButNotMatched", &MuonTaggedAsVetoButNotMatched, &b_MuonTaggedAsVetoButNotMatched);
    fChain->SetBranchAddress("NonVetoMuonExtrpToVeto", &NonVetoMuonExtrpToVeto, &b_NonVetoMuonExtrpToVeto);
    fChain->SetBranchAddress("NonVetoMuonWallOnePaddle", &NonVetoMuonWallOnePaddle, &b_NonVetoMuonWallOnePaddle);
    fChain->SetBranchAddress("NonVetoMuonWallOnePaddleOverlap", &NonVetoMuonWallOnePaddleOverlap, &b_NonVetoMuonWallOnePaddleOverlap);
    fChain->SetBranchAddress("NonVetoMuonWallOneSector", &NonVetoMuonWallOneSector, &b_NonVetoMuonWallOneSector);
    fChain->SetBranchAddress("NonVetoMuonWallTwoPaddle", &NonVetoMuonWallTwoPaddle, &b_NonVetoMuonWallTwoPaddle);
    fChain->SetBranchAddress("NonVetoMuonWallTwoPaddleOverlap", &NonVetoMuonWallTwoPaddleOverlap, &b_NonVetoMuonWallTwoPaddleOverlap);
    fChain->SetBranchAddress("NonVetoMuonWallTwoSector", &NonVetoMuonWallTwoSector, &b_NonVetoMuonWallTwoSector);
    fChain->SetBranchAddress("VetoMuonWallOnePaddle", &VetoMuonWallOnePaddle, &b_VetoMuonWallOnePaddle);
    fChain->SetBranchAddress("VetoMuonWallOnePaddleOverlap", &VetoMuonWallOnePaddleOverlap, &b_VetoMuonWallOnePaddleOverlap);
    fChain->SetBranchAddress("VetoMuonWallOneSector", &VetoMuonWallOneSector, &b_VetoMuonWallOneSector);
    fChain->SetBranchAddress("VetoMuonWallOneTypeOfMatchNonOverlap", &VetoMuonWallOneTypeOfMatchNonOverlap, &b_VetoMuonWallOneTypeOfMatchNonOverlap);
    fChain->SetBranchAddress("VetoMuonWallOneTypeOfMatchOverlap", &VetoMuonWallOneTypeOfMatchOverlap, &b_VetoMuonWallOneTypeOfMatchOverlap);
    fChain->SetBranchAddress("VetoMuonWallTwoPaddle", &VetoMuonWallTwoPaddle, &b_VetoMuonWallTwoPaddle);
    fChain->SetBranchAddress("VetoMuonWallTwoPaddleOverlap", &VetoMuonWallTwoPaddleOverlap, &b_VetoMuonWallTwoPaddleOverlap);
    fChain->SetBranchAddress("VetoMuonWallTwoSector", &VetoMuonWallTwoSector, &b_VetoMuonWallTwoSector);
    fChain->SetBranchAddress("VetoMuonWallTwoTypeOfMatchNonOverlap", &VetoMuonWallTwoTypeOfMatchNonOverlap, &b_VetoMuonWallTwoTypeOfMatchNonOverlap);
    fChain->SetBranchAddress("VetoMuonWallTwoTypeOfMatchOverlap", &VetoMuonWallTwoTypeOfMatchOverlap, &b_VetoMuonWallTwoTypeOfMatchOverlap);
    fChain->SetBranchAddress("blob_disp_nBlobs", &blob_disp_nBlobs, &b_blob_disp_nBlobs);
    fChain->SetBranchAddress("blob_disp_nClus", &blob_disp_nClus, &b_blob_disp_nClus);
    fChain->SetBranchAddress("blob_disp_nClus_ecal", &blob_disp_nClus_ecal, &b_blob_disp_nClus_ecal);
    fChain->SetBranchAddress("blob_disp_nClus_hcal", &blob_disp_nClus_hcal, &b_blob_disp_nClus_hcal);
    fChain->SetBranchAddress("blob_disp_nClus_nucl", &blob_disp_nClus_nucl, &b_blob_disp_nClus_nucl);
    fChain->SetBranchAddress("blob_disp_nClus_od", &blob_disp_nClus_od, &b_blob_disp_nClus_od);
    fChain->SetBranchAddress("blob_disp_nClus_tracker", &blob_disp_nClus_tracker, &b_blob_disp_nClus_tracker);
    fChain->SetBranchAddress("blob_iso_nBlobs", &blob_iso_nBlobs, &b_blob_iso_nBlobs);
    fChain->SetBranchAddress("blob_iso_nClus", &blob_iso_nClus, &b_blob_iso_nClus);
    fChain->SetBranchAddress("blob_iso_nClus_ecal", &blob_iso_nClus_ecal, &b_blob_iso_nClus_ecal);
    fChain->SetBranchAddress("blob_iso_nClus_hcal", &blob_iso_nClus_hcal, &b_blob_iso_nClus_hcal);
    fChain->SetBranchAddress("blob_iso_nClus_nucl", &blob_iso_nClus_nucl, &b_blob_iso_nClus_nucl);
    fChain->SetBranchAddress("blob_iso_nClus_od", &blob_iso_nClus_od, &b_blob_iso_nClus_od);
    fChain->SetBranchAddress("blob_iso_nClus_tracker", &blob_iso_nClus_tracker, &b_blob_iso_nClus_tracker);
    fChain->SetBranchAddress("blob_mufuzz_nBlobs", &blob_mufuzz_nBlobs, &b_blob_mufuzz_nBlobs);
    fChain->SetBranchAddress("blob_mufuzz_nClus", &blob_mufuzz_nClus, &b_blob_mufuzz_nClus);
    fChain->SetBranchAddress("blob_mufuzz_nClus_ecal", &blob_mufuzz_nClus_ecal, &b_blob_mufuzz_nClus_ecal);
    fChain->SetBranchAddress("blob_mufuzz_nClus_hcal", &blob_mufuzz_nClus_hcal, &b_blob_mufuzz_nClus_hcal);
    fChain->SetBranchAddress("blob_mufuzz_nClus_nucl", &blob_mufuzz_nClus_nucl, &b_blob_mufuzz_nClus_nucl);
    fChain->SetBranchAddress("blob_mufuzz_nClus_od", &blob_mufuzz_nClus_od, &b_blob_mufuzz_nClus_od);
    fChain->SetBranchAddress("blob_mufuzz_nClus_tracker", &blob_mufuzz_nClus_tracker, &b_blob_mufuzz_nClus_tracker);
    fChain->SetBranchAddress("blob_recoil_nBlobs", &blob_recoil_nBlobs, &b_blob_recoil_nBlobs);
    fChain->SetBranchAddress("blob_recoil_nClus", &blob_recoil_nClus, &b_blob_recoil_nClus);
    fChain->SetBranchAddress("blob_recoil_nClus_ecal", &blob_recoil_nClus_ecal, &b_blob_recoil_nClus_ecal);
    fChain->SetBranchAddress("blob_recoil_nClus_hcal", &blob_recoil_nClus_hcal, &b_blob_recoil_nClus_hcal);
    fChain->SetBranchAddress("blob_recoil_nClus_nucl", &blob_recoil_nClus_nucl, &b_blob_recoil_nClus_nucl);
    fChain->SetBranchAddress("blob_recoil_nClus_od", &blob_recoil_nClus_od, &b_blob_recoil_nClus_od);
    fChain->SetBranchAddress("blob_recoil_nClus_tracker", &blob_recoil_nClus_tracker, &b_blob_recoil_nClus_tracker);
    fChain->SetBranchAddress("blob_vtx_nBlobs", &blob_vtx_nBlobs, &b_blob_vtx_nBlobs);
    fChain->SetBranchAddress("blob_vtx_nClus", &blob_vtx_nClus, &b_blob_vtx_nClus);
    fChain->SetBranchAddress("blob_vtx_nClus_ecal", &blob_vtx_nClus_ecal, &b_blob_vtx_nClus_ecal);
    fChain->SetBranchAddress("blob_vtx_nClus_hcal", &blob_vtx_nClus_hcal, &b_blob_vtx_nClus_hcal);
    fChain->SetBranchAddress("blob_vtx_nClus_nucl", &blob_vtx_nClus_nucl, &b_blob_vtx_nClus_nucl);
    fChain->SetBranchAddress("blob_vtx_nClus_od", &blob_vtx_nClus_od, &b_blob_vtx_nClus_od);
    fChain->SetBranchAddress("blob_vtx_nClus_tracker", &blob_vtx_nClus_tracker, &b_blob_vtx_nClus_tracker);
    fChain->SetBranchAddress("broken_track_most_us_plane", &broken_track_most_us_plane, &b_broken_track_most_us_plane);
    fChain->SetBranchAddress("muon_n_USclusters", &muon_n_USclusters, &b_muon_n_USclusters);
    fChain->SetBranchAddress("muon_truthMatch_track_id", &muon_truthMatch_track_id, &b_muon_truthMatch_track_id);
    fChain->SetBranchAddress("n_indices", &n_indices, &b_n_indices);
    fChain->SetBranchAddress("n_prim_long_tracks", &n_prim_long_tracks, &b_n_prim_long_tracks);
    fChain->SetBranchAddress("n_prim_short_tracks", &n_prim_short_tracks, &b_n_prim_short_tracks);
    fChain->SetBranchAddress("n_start_vertices", &n_start_vertices, &b_n_start_vertices);
    fChain->SetBranchAddress("n_tracks", &n_tracks, &b_n_tracks);
    fChain->SetBranchAddress("n_tracks_non_prim", &n_tracks_non_prim, &b_n_tracks_non_prim);
    fChain->SetBranchAddress("n_tracks_prim", &n_tracks_prim, &b_n_tracks_prim);
    fChain->SetBranchAddress("n_tracks_prim_forked", &n_tracks_prim_forked, &b_n_tracks_prim_forked);
    fChain->SetBranchAddress("n_tracks_prim_kinked", &n_tracks_prim_kinked, &b_n_tracks_prim_kinked);
    fChain->SetBranchAddress("n_vertices_startpoint", &n_vertices_startpoint, &b_n_vertices_startpoint);
    fChain->SetBranchAddress("passVetoMuonCut", &passVetoMuonCut, &b_passVetoMuonCut);
    fChain->SetBranchAddress("phys_energy_in_road_downstream_nplanes", &phys_energy_in_road_downstream_nplanes, &b_phys_energy_in_road_downstream_nplanes);
    fChain->SetBranchAddress("phys_energy_in_road_upstream_nplanes", &phys_energy_in_road_upstream_nplanes, &b_phys_energy_in_road_upstream_nplanes);
    fChain->SetBranchAddress("phys_n_dead_discr_pair", &phys_n_dead_discr_pair, &b_phys_n_dead_discr_pair);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_in_prim_track_region", &phys_n_dead_discr_pair_in_prim_track_region, &b_phys_n_dead_discr_pair_in_prim_track_region);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_two_mod_downstream_prim_track", &phys_n_dead_discr_pair_two_mod_downstream_prim_track, &b_phys_n_dead_discr_pair_two_mod_downstream_prim_track);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_two_mod_upstream_prim_vtx", &phys_n_dead_discr_pair_two_mod_upstream_prim_vtx, &b_phys_n_dead_discr_pair_two_mod_upstream_prim_vtx);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_upstream_prim_track_proj", &phys_n_dead_discr_pair_upstream_prim_track_proj, &b_phys_n_dead_discr_pair_upstream_prim_track_proj);
    fChain->SetBranchAddress("phys_vertex_is_fiducial", &phys_vertex_is_fiducial, &b_phys_vertex_is_fiducial);
    fChain->SetBranchAddress("rock_muon_code", &rock_muon_code, &b_rock_muon_code);
    fChain->SetBranchAddress("truth_has_michel_electron", &truth_has_michel_electron, &b_truth_has_michel_electron);
    fChain->SetBranchAddress("usact_extent_huge", &usact_extent_huge, &b_usact_extent_huge);
    fChain->SetBranchAddress("usact_extent_inf", &usact_extent_inf, &b_usact_extent_inf);
    fChain->SetBranchAddress("usact_extent_large", &usact_extent_large, &b_usact_extent_large);
    fChain->SetBranchAddress("usact_extent_normal", &usact_extent_normal, &b_usact_extent_normal);
    fChain->SetBranchAddress("usact_extent_small", &usact_extent_small, &b_usact_extent_small);
    fChain->SetBranchAddress("usact_extent_texas_sized", &usact_extent_texas_sized, &b_usact_extent_texas_sized);
    fChain->SetBranchAddress("usact_extent_tiny", &usact_extent_tiny, &b_usact_extent_tiny);
    fChain->SetBranchAddress("usact_n_consecutive_huge", &usact_n_consecutive_huge, &b_usact_n_consecutive_huge);
    fChain->SetBranchAddress("usact_n_consecutive_inf", &usact_n_consecutive_inf, &b_usact_n_consecutive_inf);
    fChain->SetBranchAddress("usact_n_consecutive_large", &usact_n_consecutive_large, &b_usact_n_consecutive_large);
    fChain->SetBranchAddress("usact_n_consecutive_normal", &usact_n_consecutive_normal, &b_usact_n_consecutive_normal);
    fChain->SetBranchAddress("usact_n_consecutive_small", &usact_n_consecutive_small, &b_usact_n_consecutive_small);
    fChain->SetBranchAddress("usact_n_consecutive_texas_sized", &usact_n_consecutive_texas_sized, &b_usact_n_consecutive_texas_sized);
    fChain->SetBranchAddress("usact_n_consecutive_tiny", &usact_n_consecutive_tiny, &b_usact_n_consecutive_tiny);
    fChain->SetBranchAddress("usact_n_planes_huge", &usact_n_planes_huge, &b_usact_n_planes_huge);
    fChain->SetBranchAddress("usact_n_planes_inf", &usact_n_planes_inf, &b_usact_n_planes_inf);
    fChain->SetBranchAddress("usact_n_planes_large", &usact_n_planes_large, &b_usact_n_planes_large);
    fChain->SetBranchAddress("usact_n_planes_normal", &usact_n_planes_normal, &b_usact_n_planes_normal);
    fChain->SetBranchAddress("usact_n_planes_small", &usact_n_planes_small, &b_usact_n_planes_small);
    fChain->SetBranchAddress("usact_n_planes_texas_sized", &usact_n_planes_texas_sized, &b_usact_n_planes_texas_sized);
    fChain->SetBranchAddress("usact_n_planes_tiny", &usact_n_planes_tiny, &b_usact_n_planes_tiny);
    fChain->SetBranchAddress("NonVetoMuonWallOneBadPosX", &NonVetoMuonWallOneBadPosX, &b_NonVetoMuonWallOneBadPosX);
    fChain->SetBranchAddress("NonVetoMuonWallOneBadPosY", &NonVetoMuonWallOneBadPosY, &b_NonVetoMuonWallOneBadPosY);
    fChain->SetBranchAddress("NonVetoMuonWallOnePosX", &NonVetoMuonWallOnePosX, &b_NonVetoMuonWallOnePosX);
    fChain->SetBranchAddress("NonVetoMuonWallOnePosY", &NonVetoMuonWallOnePosY, &b_NonVetoMuonWallOnePosY);
    fChain->SetBranchAddress("NonVetoMuonWallOne_ANDEfficiency_Central", &NonVetoMuonWallOne_ANDEfficiency_Central, &b_NonVetoMuonWallOne_ANDEfficiency_Central);
    fChain->SetBranchAddress("NonVetoMuonWallOne_ANDEfficiency_Overlap", &NonVetoMuonWallOne_ANDEfficiency_Overlap, &b_NonVetoMuonWallOne_ANDEfficiency_Overlap);
    fChain->SetBranchAddress("NonVetoMuonWallOne_ANDError_Central", &NonVetoMuonWallOne_ANDError_Central, &b_NonVetoMuonWallOne_ANDError_Central);
    fChain->SetBranchAddress("NonVetoMuonWallOne_ANDError_Overlap", &NonVetoMuonWallOne_ANDError_Overlap, &b_NonVetoMuonWallOne_ANDError_Overlap);
    fChain->SetBranchAddress("NonVetoMuonWallOne_AccRatesError_PaddleAbove", &NonVetoMuonWallOne_AccRatesError_PaddleAbove, &b_NonVetoMuonWallOne_AccRatesError_PaddleAbove);
    fChain->SetBranchAddress("NonVetoMuonWallOne_AccRatesError_PaddleBelow", &NonVetoMuonWallOne_AccRatesError_PaddleBelow, &b_NonVetoMuonWallOne_AccRatesError_PaddleBelow);
    fChain->SetBranchAddress("NonVetoMuonWallOne_AccRates_PaddleAbove", &NonVetoMuonWallOne_AccRates_PaddleAbove, &b_NonVetoMuonWallOne_AccRates_PaddleAbove);
    fChain->SetBranchAddress("NonVetoMuonWallOne_AccRates_PaddleBelow", &NonVetoMuonWallOne_AccRates_PaddleBelow, &b_NonVetoMuonWallOne_AccRates_PaddleBelow);
    fChain->SetBranchAddress("NonVetoMuonWallOne_OREfficiency_Central", &NonVetoMuonWallOne_OREfficiency_Central, &b_NonVetoMuonWallOne_OREfficiency_Central);
    fChain->SetBranchAddress("NonVetoMuonWallOne_OREfficiency_Overlap", &NonVetoMuonWallOne_OREfficiency_Overlap, &b_NonVetoMuonWallOne_OREfficiency_Overlap);
    fChain->SetBranchAddress("NonVetoMuonWallOne_ORError_Central", &NonVetoMuonWallOne_ORError_Central, &b_NonVetoMuonWallOne_ORError_Central);
    fChain->SetBranchAddress("NonVetoMuonWallOne_ORError_Overlap", &NonVetoMuonWallOne_ORError_Overlap, &b_NonVetoMuonWallOne_ORError_Overlap);
    fChain->SetBranchAddress("NonVetoMuonWallTwoBadPosX", &NonVetoMuonWallTwoBadPosX, &b_NonVetoMuonWallTwoBadPosX);
    fChain->SetBranchAddress("NonVetoMuonWallTwoBadPosY", &NonVetoMuonWallTwoBadPosY, &b_NonVetoMuonWallTwoBadPosY);
    fChain->SetBranchAddress("NonVetoMuonWallTwoPosX", &NonVetoMuonWallTwoPosX, &b_NonVetoMuonWallTwoPosX);
    fChain->SetBranchAddress("NonVetoMuonWallTwoPosY", &NonVetoMuonWallTwoPosY, &b_NonVetoMuonWallTwoPosY);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_ANDEfficiency_Central", &NonVetoMuonWallTwo_ANDEfficiency_Central, &b_NonVetoMuonWallTwo_ANDEfficiency_Central);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_ANDEfficiency_Overlap", &NonVetoMuonWallTwo_ANDEfficiency_Overlap, &b_NonVetoMuonWallTwo_ANDEfficiency_Overlap);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_ANDError_Central", &NonVetoMuonWallTwo_ANDError_Central, &b_NonVetoMuonWallTwo_ANDError_Central);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_ANDError_Overlap", &NonVetoMuonWallTwo_ANDError_Overlap, &b_NonVetoMuonWallTwo_ANDError_Overlap);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_AccRatesError_PaddleAbove", &NonVetoMuonWallTwo_AccRatesError_PaddleAbove, &b_NonVetoMuonWallTwo_AccRatesError_PaddleAbove);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_AccRatesError_PaddleBelow", &NonVetoMuonWallTwo_AccRatesError_PaddleBelow, &b_NonVetoMuonWallTwo_AccRatesError_PaddleBelow);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_AccRates_PaddleAbove", &NonVetoMuonWallTwo_AccRates_PaddleAbove, &b_NonVetoMuonWallTwo_AccRates_PaddleAbove);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_AccRates_PaddleBelow", &NonVetoMuonWallTwo_AccRates_PaddleBelow, &b_NonVetoMuonWallTwo_AccRates_PaddleBelow);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_OREfficiency_Central", &NonVetoMuonWallTwo_OREfficiency_Central, &b_NonVetoMuonWallTwo_OREfficiency_Central);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_OREfficiency_Overlap", &NonVetoMuonWallTwo_OREfficiency_Overlap, &b_NonVetoMuonWallTwo_OREfficiency_Overlap);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_ORError_Central", &NonVetoMuonWallTwo_ORError_Central, &b_NonVetoMuonWallTwo_ORError_Central);
    fChain->SetBranchAddress("NonVetoMuonWallTwo_ORError_Overlap", &NonVetoMuonWallTwo_ORError_Overlap, &b_NonVetoMuonWallTwo_ORError_Overlap);
    fChain->SetBranchAddress("VetoMuonWallOneDeltaTime", &VetoMuonWallOneDeltaTime, &b_VetoMuonWallOneDeltaTime);
    fChain->SetBranchAddress("VetoMuonWallOnePosX", &VetoMuonWallOnePosX, &b_VetoMuonWallOnePosX);
    fChain->SetBranchAddress("VetoMuonWallOnePosY", &VetoMuonWallOnePosY, &b_VetoMuonWallOnePosY);
    fChain->SetBranchAddress("VetoMuonWallOne_ANDEfficiency_Central", &VetoMuonWallOne_ANDEfficiency_Central, &b_VetoMuonWallOne_ANDEfficiency_Central);
    fChain->SetBranchAddress("VetoMuonWallOne_ANDEfficiency_Overlap", &VetoMuonWallOne_ANDEfficiency_Overlap, &b_VetoMuonWallOne_ANDEfficiency_Overlap);
    fChain->SetBranchAddress("VetoMuonWallOne_ANDError_Central", &VetoMuonWallOne_ANDError_Central, &b_VetoMuonWallOne_ANDError_Central);
    fChain->SetBranchAddress("VetoMuonWallOne_ANDError_Overlap", &VetoMuonWallOne_ANDError_Overlap, &b_VetoMuonWallOne_ANDError_Overlap);
    fChain->SetBranchAddress("VetoMuonWallOne_AccRatesError_PaddleAbove", &VetoMuonWallOne_AccRatesError_PaddleAbove, &b_VetoMuonWallOne_AccRatesError_PaddleAbove);
    fChain->SetBranchAddress("VetoMuonWallOne_AccRatesError_PaddleBelow", &VetoMuonWallOne_AccRatesError_PaddleBelow, &b_VetoMuonWallOne_AccRatesError_PaddleBelow);
    fChain->SetBranchAddress("VetoMuonWallOne_AccRates_PaddleAbove", &VetoMuonWallOne_AccRates_PaddleAbove, &b_VetoMuonWallOne_AccRates_PaddleAbove);
    fChain->SetBranchAddress("VetoMuonWallOne_AccRates_PaddleBelow", &VetoMuonWallOne_AccRates_PaddleBelow, &b_VetoMuonWallOne_AccRates_PaddleBelow);
    fChain->SetBranchAddress("VetoMuonWallOne_OREfficiency_Central", &VetoMuonWallOne_OREfficiency_Central, &b_VetoMuonWallOne_OREfficiency_Central);
    fChain->SetBranchAddress("VetoMuonWallOne_OREfficiency_Overlap", &VetoMuonWallOne_OREfficiency_Overlap, &b_VetoMuonWallOne_OREfficiency_Overlap);
    fChain->SetBranchAddress("VetoMuonWallOne_ORError_Central", &VetoMuonWallOne_ORError_Central, &b_VetoMuonWallOne_ORError_Central);
    fChain->SetBranchAddress("VetoMuonWallOne_ORError_Overlap", &VetoMuonWallOne_ORError_Overlap, &b_VetoMuonWallOne_ORError_Overlap);
    fChain->SetBranchAddress("VetoMuonWallTwoDeltaTime", &VetoMuonWallTwoDeltaTime, &b_VetoMuonWallTwoDeltaTime);
    fChain->SetBranchAddress("VetoMuonWallTwoPosX", &VetoMuonWallTwoPosX, &b_VetoMuonWallTwoPosX);
    fChain->SetBranchAddress("VetoMuonWallTwoPosY", &VetoMuonWallTwoPosY, &b_VetoMuonWallTwoPosY);
    fChain->SetBranchAddress("VetoMuonWallTwo_ANDEfficiency_Central", &VetoMuonWallTwo_ANDEfficiency_Central, &b_VetoMuonWallTwo_ANDEfficiency_Central);
    fChain->SetBranchAddress("VetoMuonWallTwo_ANDEfficiency_Overlap", &VetoMuonWallTwo_ANDEfficiency_Overlap, &b_VetoMuonWallTwo_ANDEfficiency_Overlap);
    fChain->SetBranchAddress("VetoMuonWallTwo_ANDError_Central", &VetoMuonWallTwo_ANDError_Central, &b_VetoMuonWallTwo_ANDError_Central);
    fChain->SetBranchAddress("VetoMuonWallTwo_ANDError_Overlap", &VetoMuonWallTwo_ANDError_Overlap, &b_VetoMuonWallTwo_ANDError_Overlap);
    fChain->SetBranchAddress("VetoMuonWallTwo_AccRatesError_PaddleAbove", &VetoMuonWallTwo_AccRatesError_PaddleAbove, &b_VetoMuonWallTwo_AccRatesError_PaddleAbove);
    fChain->SetBranchAddress("VetoMuonWallTwo_AccRatesError_PaddleBelow", &VetoMuonWallTwo_AccRatesError_PaddleBelow, &b_VetoMuonWallTwo_AccRatesError_PaddleBelow);
    fChain->SetBranchAddress("VetoMuonWallTwo_AccRates_PaddleAbove", &VetoMuonWallTwo_AccRates_PaddleAbove, &b_VetoMuonWallTwo_AccRates_PaddleAbove);
    fChain->SetBranchAddress("VetoMuonWallTwo_AccRates_PaddleBelow", &VetoMuonWallTwo_AccRates_PaddleBelow, &b_VetoMuonWallTwo_AccRates_PaddleBelow);
    fChain->SetBranchAddress("VetoMuonWallTwo_OREfficiency_Central", &VetoMuonWallTwo_OREfficiency_Central, &b_VetoMuonWallTwo_OREfficiency_Central);
    fChain->SetBranchAddress("VetoMuonWallTwo_OREfficiency_Overlap", &VetoMuonWallTwo_OREfficiency_Overlap, &b_VetoMuonWallTwo_OREfficiency_Overlap);
    fChain->SetBranchAddress("VetoMuonWallTwo_ORError_Central", &VetoMuonWallTwo_ORError_Central, &b_VetoMuonWallTwo_ORError_Central);
    fChain->SetBranchAddress("VetoMuonWallTwo_ORError_Overlap", &VetoMuonWallTwo_ORError_Overlap, &b_VetoMuonWallTwo_ORError_Overlap);
    fChain->SetBranchAddress("blob_ccqe_recoil_E", &blob_ccqe_recoil_E, &b_blob_ccqe_recoil_E);
    fChain->SetBranchAddress("blob_disp_E", &blob_disp_E, &b_blob_disp_E);
    fChain->SetBranchAddress("blob_disp_E_ecal", &blob_disp_E_ecal, &b_blob_disp_E_ecal);
    fChain->SetBranchAddress("blob_disp_E_ecal_em", &blob_disp_E_ecal_em, &b_blob_disp_E_ecal_em);
    fChain->SetBranchAddress("blob_disp_E_ecal_highn", &blob_disp_E_ecal_highn, &b_blob_disp_E_ecal_highn);
    fChain->SetBranchAddress("blob_disp_E_ecal_lown", &blob_disp_E_ecal_lown, &b_blob_disp_E_ecal_lown);
    fChain->SetBranchAddress("blob_disp_E_ecal_meson", &blob_disp_E_ecal_meson, &b_blob_disp_E_ecal_meson);
    fChain->SetBranchAddress("blob_disp_E_ecal_midn", &blob_disp_E_ecal_midn, &b_blob_disp_E_ecal_midn);
    fChain->SetBranchAddress("blob_disp_E_ecal_mu", &blob_disp_E_ecal_mu, &b_blob_disp_E_ecal_mu);
    fChain->SetBranchAddress("blob_disp_E_ecal_other", &blob_disp_E_ecal_other, &b_blob_disp_E_ecal_other);
    fChain->SetBranchAddress("blob_disp_E_ecal_p", &blob_disp_E_ecal_p, &b_blob_disp_E_ecal_p);
    fChain->SetBranchAddress("blob_disp_E_ecal_xtalk", &blob_disp_E_ecal_xtalk, &b_blob_disp_E_ecal_xtalk);
    fChain->SetBranchAddress("blob_disp_E_em", &blob_disp_E_em, &b_blob_disp_E_em);
    fChain->SetBranchAddress("blob_disp_E_hcal", &blob_disp_E_hcal, &b_blob_disp_E_hcal);
    fChain->SetBranchAddress("blob_disp_E_hcal_em", &blob_disp_E_hcal_em, &b_blob_disp_E_hcal_em);
    fChain->SetBranchAddress("blob_disp_E_hcal_highn", &blob_disp_E_hcal_highn, &b_blob_disp_E_hcal_highn);
    fChain->SetBranchAddress("blob_disp_E_hcal_lown", &blob_disp_E_hcal_lown, &b_blob_disp_E_hcal_lown);
    fChain->SetBranchAddress("blob_disp_E_hcal_meson", &blob_disp_E_hcal_meson, &b_blob_disp_E_hcal_meson);
    fChain->SetBranchAddress("blob_disp_E_hcal_midn", &blob_disp_E_hcal_midn, &b_blob_disp_E_hcal_midn);
    fChain->SetBranchAddress("blob_disp_E_hcal_mu", &blob_disp_E_hcal_mu, &b_blob_disp_E_hcal_mu);
    fChain->SetBranchAddress("blob_disp_E_hcal_other", &blob_disp_E_hcal_other, &b_blob_disp_E_hcal_other);
    fChain->SetBranchAddress("blob_disp_E_hcal_p", &blob_disp_E_hcal_p, &b_blob_disp_E_hcal_p);
    fChain->SetBranchAddress("blob_disp_E_hcal_xtalk", &blob_disp_E_hcal_xtalk, &b_blob_disp_E_hcal_xtalk);
    fChain->SetBranchAddress("blob_disp_E_highn", &blob_disp_E_highn, &b_blob_disp_E_highn);
    fChain->SetBranchAddress("blob_disp_E_lown", &blob_disp_E_lown, &b_blob_disp_E_lown);
    fChain->SetBranchAddress("blob_disp_E_meson", &blob_disp_E_meson, &b_blob_disp_E_meson);
    fChain->SetBranchAddress("blob_disp_E_midn", &blob_disp_E_midn, &b_blob_disp_E_midn);
    fChain->SetBranchAddress("blob_disp_E_mu", &blob_disp_E_mu, &b_blob_disp_E_mu);
    fChain->SetBranchAddress("blob_disp_E_nucl", &blob_disp_E_nucl, &b_blob_disp_E_nucl);
    fChain->SetBranchAddress("blob_disp_E_nucl_em", &blob_disp_E_nucl_em, &b_blob_disp_E_nucl_em);
    fChain->SetBranchAddress("blob_disp_E_nucl_highn", &blob_disp_E_nucl_highn, &b_blob_disp_E_nucl_highn);
    fChain->SetBranchAddress("blob_disp_E_nucl_lown", &blob_disp_E_nucl_lown, &b_blob_disp_E_nucl_lown);
    fChain->SetBranchAddress("blob_disp_E_nucl_meson", &blob_disp_E_nucl_meson, &b_blob_disp_E_nucl_meson);
    fChain->SetBranchAddress("blob_disp_E_nucl_midn", &blob_disp_E_nucl_midn, &b_blob_disp_E_nucl_midn);
    fChain->SetBranchAddress("blob_disp_E_nucl_mu", &blob_disp_E_nucl_mu, &b_blob_disp_E_nucl_mu);
    fChain->SetBranchAddress("blob_disp_E_nucl_other", &blob_disp_E_nucl_other, &b_blob_disp_E_nucl_other);
    fChain->SetBranchAddress("blob_disp_E_nucl_p", &blob_disp_E_nucl_p, &b_blob_disp_E_nucl_p);
    fChain->SetBranchAddress("blob_disp_E_nucl_xtalk", &blob_disp_E_nucl_xtalk, &b_blob_disp_E_nucl_xtalk);
    fChain->SetBranchAddress("blob_disp_E_od", &blob_disp_E_od, &b_blob_disp_E_od);
    fChain->SetBranchAddress("blob_disp_E_od_em", &blob_disp_E_od_em, &b_blob_disp_E_od_em);
    fChain->SetBranchAddress("blob_disp_E_od_highn", &blob_disp_E_od_highn, &b_blob_disp_E_od_highn);
    fChain->SetBranchAddress("blob_disp_E_od_lown", &blob_disp_E_od_lown, &b_blob_disp_E_od_lown);
    fChain->SetBranchAddress("blob_disp_E_od_meson", &blob_disp_E_od_meson, &b_blob_disp_E_od_meson);
    fChain->SetBranchAddress("blob_disp_E_od_midn", &blob_disp_E_od_midn, &b_blob_disp_E_od_midn);
    fChain->SetBranchAddress("blob_disp_E_od_mu", &blob_disp_E_od_mu, &b_blob_disp_E_od_mu);
    fChain->SetBranchAddress("blob_disp_E_od_other", &blob_disp_E_od_other, &b_blob_disp_E_od_other);
    fChain->SetBranchAddress("blob_disp_E_od_p", &blob_disp_E_od_p, &b_blob_disp_E_od_p);
    fChain->SetBranchAddress("blob_disp_E_od_xtalk", &blob_disp_E_od_xtalk, &b_blob_disp_E_od_xtalk);
    fChain->SetBranchAddress("blob_disp_E_other", &blob_disp_E_other, &b_blob_disp_E_other);
    fChain->SetBranchAddress("blob_disp_E_p", &blob_disp_E_p, &b_blob_disp_E_p);
    fChain->SetBranchAddress("blob_disp_E_tracker", &blob_disp_E_tracker, &b_blob_disp_E_tracker);
    fChain->SetBranchAddress("blob_disp_E_tracker_em", &blob_disp_E_tracker_em, &b_blob_disp_E_tracker_em);
    fChain->SetBranchAddress("blob_disp_E_tracker_highn", &blob_disp_E_tracker_highn, &b_blob_disp_E_tracker_highn);
    fChain->SetBranchAddress("blob_disp_E_tracker_lown", &blob_disp_E_tracker_lown, &b_blob_disp_E_tracker_lown);
    fChain->SetBranchAddress("blob_disp_E_tracker_meson", &blob_disp_E_tracker_meson, &b_blob_disp_E_tracker_meson);
    fChain->SetBranchAddress("blob_disp_E_tracker_midn", &blob_disp_E_tracker_midn, &b_blob_disp_E_tracker_midn);
    fChain->SetBranchAddress("blob_disp_E_tracker_mu", &blob_disp_E_tracker_mu, &b_blob_disp_E_tracker_mu);
    fChain->SetBranchAddress("blob_disp_E_tracker_other", &blob_disp_E_tracker_other, &b_blob_disp_E_tracker_other);
    fChain->SetBranchAddress("blob_disp_E_tracker_p", &blob_disp_E_tracker_p, &b_blob_disp_E_tracker_p);
    fChain->SetBranchAddress("blob_disp_E_tracker_xtalk", &blob_disp_E_tracker_xtalk, &b_blob_disp_E_tracker_xtalk);
    fChain->SetBranchAddress("blob_disp_E_xtalk", &blob_disp_E_xtalk, &b_blob_disp_E_xtalk);
    fChain->SetBranchAddress("blob_iso_E", &blob_iso_E, &b_blob_iso_E);
    fChain->SetBranchAddress("blob_iso_E_ecal", &blob_iso_E_ecal, &b_blob_iso_E_ecal);
    fChain->SetBranchAddress("blob_iso_E_ecal_em", &blob_iso_E_ecal_em, &b_blob_iso_E_ecal_em);
    fChain->SetBranchAddress("blob_iso_E_ecal_highn", &blob_iso_E_ecal_highn, &b_blob_iso_E_ecal_highn);
    fChain->SetBranchAddress("blob_iso_E_ecal_lown", &blob_iso_E_ecal_lown, &b_blob_iso_E_ecal_lown);
    fChain->SetBranchAddress("blob_iso_E_ecal_meson", &blob_iso_E_ecal_meson, &b_blob_iso_E_ecal_meson);
    fChain->SetBranchAddress("blob_iso_E_ecal_midn", &blob_iso_E_ecal_midn, &b_blob_iso_E_ecal_midn);
    fChain->SetBranchAddress("blob_iso_E_ecal_mu", &blob_iso_E_ecal_mu, &b_blob_iso_E_ecal_mu);
    fChain->SetBranchAddress("blob_iso_E_ecal_other", &blob_iso_E_ecal_other, &b_blob_iso_E_ecal_other);
    fChain->SetBranchAddress("blob_iso_E_ecal_p", &blob_iso_E_ecal_p, &b_blob_iso_E_ecal_p);
    fChain->SetBranchAddress("blob_iso_E_ecal_xtalk", &blob_iso_E_ecal_xtalk, &b_blob_iso_E_ecal_xtalk);
    fChain->SetBranchAddress("blob_iso_E_em", &blob_iso_E_em, &b_blob_iso_E_em);
    fChain->SetBranchAddress("blob_iso_E_hcal", &blob_iso_E_hcal, &b_blob_iso_E_hcal);
    fChain->SetBranchAddress("blob_iso_E_hcal_em", &blob_iso_E_hcal_em, &b_blob_iso_E_hcal_em);
    fChain->SetBranchAddress("blob_iso_E_hcal_highn", &blob_iso_E_hcal_highn, &b_blob_iso_E_hcal_highn);
    fChain->SetBranchAddress("blob_iso_E_hcal_lown", &blob_iso_E_hcal_lown, &b_blob_iso_E_hcal_lown);
    fChain->SetBranchAddress("blob_iso_E_hcal_meson", &blob_iso_E_hcal_meson, &b_blob_iso_E_hcal_meson);
    fChain->SetBranchAddress("blob_iso_E_hcal_midn", &blob_iso_E_hcal_midn, &b_blob_iso_E_hcal_midn);
    fChain->SetBranchAddress("blob_iso_E_hcal_mu", &blob_iso_E_hcal_mu, &b_blob_iso_E_hcal_mu);
    fChain->SetBranchAddress("blob_iso_E_hcal_other", &blob_iso_E_hcal_other, &b_blob_iso_E_hcal_other);
    fChain->SetBranchAddress("blob_iso_E_hcal_p", &blob_iso_E_hcal_p, &b_blob_iso_E_hcal_p);
    fChain->SetBranchAddress("blob_iso_E_hcal_xtalk", &blob_iso_E_hcal_xtalk, &b_blob_iso_E_hcal_xtalk);
    fChain->SetBranchAddress("blob_iso_E_highn", &blob_iso_E_highn, &b_blob_iso_E_highn);
    fChain->SetBranchAddress("blob_iso_E_lown", &blob_iso_E_lown, &b_blob_iso_E_lown);
    fChain->SetBranchAddress("blob_iso_E_meson", &blob_iso_E_meson, &b_blob_iso_E_meson);
    fChain->SetBranchAddress("blob_iso_E_midn", &blob_iso_E_midn, &b_blob_iso_E_midn);
    fChain->SetBranchAddress("blob_iso_E_mu", &blob_iso_E_mu, &b_blob_iso_E_mu);
    fChain->SetBranchAddress("blob_iso_E_nucl", &blob_iso_E_nucl, &b_blob_iso_E_nucl);
    fChain->SetBranchAddress("blob_iso_E_nucl_em", &blob_iso_E_nucl_em, &b_blob_iso_E_nucl_em);
    fChain->SetBranchAddress("blob_iso_E_nucl_highn", &blob_iso_E_nucl_highn, &b_blob_iso_E_nucl_highn);
    fChain->SetBranchAddress("blob_iso_E_nucl_lown", &blob_iso_E_nucl_lown, &b_blob_iso_E_nucl_lown);
    fChain->SetBranchAddress("blob_iso_E_nucl_meson", &blob_iso_E_nucl_meson, &b_blob_iso_E_nucl_meson);
    fChain->SetBranchAddress("blob_iso_E_nucl_midn", &blob_iso_E_nucl_midn, &b_blob_iso_E_nucl_midn);
    fChain->SetBranchAddress("blob_iso_E_nucl_mu", &blob_iso_E_nucl_mu, &b_blob_iso_E_nucl_mu);
    fChain->SetBranchAddress("blob_iso_E_nucl_other", &blob_iso_E_nucl_other, &b_blob_iso_E_nucl_other);
    fChain->SetBranchAddress("blob_iso_E_nucl_p", &blob_iso_E_nucl_p, &b_blob_iso_E_nucl_p);
    fChain->SetBranchAddress("blob_iso_E_nucl_xtalk", &blob_iso_E_nucl_xtalk, &b_blob_iso_E_nucl_xtalk);
    fChain->SetBranchAddress("blob_iso_E_od", &blob_iso_E_od, &b_blob_iso_E_od);
    fChain->SetBranchAddress("blob_iso_E_od_em", &blob_iso_E_od_em, &b_blob_iso_E_od_em);
    fChain->SetBranchAddress("blob_iso_E_od_highn", &blob_iso_E_od_highn, &b_blob_iso_E_od_highn);
    fChain->SetBranchAddress("blob_iso_E_od_lown", &blob_iso_E_od_lown, &b_blob_iso_E_od_lown);
    fChain->SetBranchAddress("blob_iso_E_od_meson", &blob_iso_E_od_meson, &b_blob_iso_E_od_meson);
    fChain->SetBranchAddress("blob_iso_E_od_midn", &blob_iso_E_od_midn, &b_blob_iso_E_od_midn);
    fChain->SetBranchAddress("blob_iso_E_od_mu", &blob_iso_E_od_mu, &b_blob_iso_E_od_mu);
    fChain->SetBranchAddress("blob_iso_E_od_other", &blob_iso_E_od_other, &b_blob_iso_E_od_other);
    fChain->SetBranchAddress("blob_iso_E_od_p", &blob_iso_E_od_p, &b_blob_iso_E_od_p);
    fChain->SetBranchAddress("blob_iso_E_od_xtalk", &blob_iso_E_od_xtalk, &b_blob_iso_E_od_xtalk);
    fChain->SetBranchAddress("blob_iso_E_other", &blob_iso_E_other, &b_blob_iso_E_other);
    fChain->SetBranchAddress("blob_iso_E_p", &blob_iso_E_p, &b_blob_iso_E_p);
    fChain->SetBranchAddress("blob_iso_E_tracker", &blob_iso_E_tracker, &b_blob_iso_E_tracker);
    fChain->SetBranchAddress("blob_iso_E_tracker_em", &blob_iso_E_tracker_em, &b_blob_iso_E_tracker_em);
    fChain->SetBranchAddress("blob_iso_E_tracker_highn", &blob_iso_E_tracker_highn, &b_blob_iso_E_tracker_highn);
    fChain->SetBranchAddress("blob_iso_E_tracker_lown", &blob_iso_E_tracker_lown, &b_blob_iso_E_tracker_lown);
    fChain->SetBranchAddress("blob_iso_E_tracker_meson", &blob_iso_E_tracker_meson, &b_blob_iso_E_tracker_meson);
    fChain->SetBranchAddress("blob_iso_E_tracker_midn", &blob_iso_E_tracker_midn, &b_blob_iso_E_tracker_midn);
    fChain->SetBranchAddress("blob_iso_E_tracker_mu", &blob_iso_E_tracker_mu, &b_blob_iso_E_tracker_mu);
    fChain->SetBranchAddress("blob_iso_E_tracker_other", &blob_iso_E_tracker_other, &b_blob_iso_E_tracker_other);
    fChain->SetBranchAddress("blob_iso_E_tracker_p", &blob_iso_E_tracker_p, &b_blob_iso_E_tracker_p);
    fChain->SetBranchAddress("blob_iso_E_tracker_xtalk", &blob_iso_E_tracker_xtalk, &b_blob_iso_E_tracker_xtalk);
    fChain->SetBranchAddress("blob_iso_E_xtalk", &blob_iso_E_xtalk, &b_blob_iso_E_xtalk);
    fChain->SetBranchAddress("blob_mufuzz_E", &blob_mufuzz_E, &b_blob_mufuzz_E);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal", &blob_mufuzz_E_ecal, &b_blob_mufuzz_E_ecal);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_em", &blob_mufuzz_E_ecal_em, &b_blob_mufuzz_E_ecal_em);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_highn", &blob_mufuzz_E_ecal_highn, &b_blob_mufuzz_E_ecal_highn);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_lown", &blob_mufuzz_E_ecal_lown, &b_blob_mufuzz_E_ecal_lown);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_meson", &blob_mufuzz_E_ecal_meson, &b_blob_mufuzz_E_ecal_meson);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_midn", &blob_mufuzz_E_ecal_midn, &b_blob_mufuzz_E_ecal_midn);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_mu", &blob_mufuzz_E_ecal_mu, &b_blob_mufuzz_E_ecal_mu);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_other", &blob_mufuzz_E_ecal_other, &b_blob_mufuzz_E_ecal_other);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_p", &blob_mufuzz_E_ecal_p, &b_blob_mufuzz_E_ecal_p);
    fChain->SetBranchAddress("blob_mufuzz_E_ecal_xtalk", &blob_mufuzz_E_ecal_xtalk, &b_blob_mufuzz_E_ecal_xtalk);
    fChain->SetBranchAddress("blob_mufuzz_E_em", &blob_mufuzz_E_em, &b_blob_mufuzz_E_em);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal", &blob_mufuzz_E_hcal, &b_blob_mufuzz_E_hcal);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_em", &blob_mufuzz_E_hcal_em, &b_blob_mufuzz_E_hcal_em);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_highn", &blob_mufuzz_E_hcal_highn, &b_blob_mufuzz_E_hcal_highn);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_lown", &blob_mufuzz_E_hcal_lown, &b_blob_mufuzz_E_hcal_lown);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_meson", &blob_mufuzz_E_hcal_meson, &b_blob_mufuzz_E_hcal_meson);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_midn", &blob_mufuzz_E_hcal_midn, &b_blob_mufuzz_E_hcal_midn);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_mu", &blob_mufuzz_E_hcal_mu, &b_blob_mufuzz_E_hcal_mu);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_other", &blob_mufuzz_E_hcal_other, &b_blob_mufuzz_E_hcal_other);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_p", &blob_mufuzz_E_hcal_p, &b_blob_mufuzz_E_hcal_p);
    fChain->SetBranchAddress("blob_mufuzz_E_hcal_xtalk", &blob_mufuzz_E_hcal_xtalk, &b_blob_mufuzz_E_hcal_xtalk);
    fChain->SetBranchAddress("blob_mufuzz_E_highn", &blob_mufuzz_E_highn, &b_blob_mufuzz_E_highn);
    fChain->SetBranchAddress("blob_mufuzz_E_lown", &blob_mufuzz_E_lown, &b_blob_mufuzz_E_lown);
    fChain->SetBranchAddress("blob_mufuzz_E_meson", &blob_mufuzz_E_meson, &b_blob_mufuzz_E_meson);
    fChain->SetBranchAddress("blob_mufuzz_E_midn", &blob_mufuzz_E_midn, &b_blob_mufuzz_E_midn);
    fChain->SetBranchAddress("blob_mufuzz_E_mu", &blob_mufuzz_E_mu, &b_blob_mufuzz_E_mu);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl", &blob_mufuzz_E_nucl, &b_blob_mufuzz_E_nucl);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_em", &blob_mufuzz_E_nucl_em, &b_blob_mufuzz_E_nucl_em);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_highn", &blob_mufuzz_E_nucl_highn, &b_blob_mufuzz_E_nucl_highn);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_lown", &blob_mufuzz_E_nucl_lown, &b_blob_mufuzz_E_nucl_lown);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_meson", &blob_mufuzz_E_nucl_meson, &b_blob_mufuzz_E_nucl_meson);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_midn", &blob_mufuzz_E_nucl_midn, &b_blob_mufuzz_E_nucl_midn);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_mu", &blob_mufuzz_E_nucl_mu, &b_blob_mufuzz_E_nucl_mu);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_other", &blob_mufuzz_E_nucl_other, &b_blob_mufuzz_E_nucl_other);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_p", &blob_mufuzz_E_nucl_p, &b_blob_mufuzz_E_nucl_p);
    fChain->SetBranchAddress("blob_mufuzz_E_nucl_xtalk", &blob_mufuzz_E_nucl_xtalk, &b_blob_mufuzz_E_nucl_xtalk);
    fChain->SetBranchAddress("blob_mufuzz_E_od", &blob_mufuzz_E_od, &b_blob_mufuzz_E_od);
    fChain->SetBranchAddress("blob_mufuzz_E_od_em", &blob_mufuzz_E_od_em, &b_blob_mufuzz_E_od_em);
    fChain->SetBranchAddress("blob_mufuzz_E_od_highn", &blob_mufuzz_E_od_highn, &b_blob_mufuzz_E_od_highn);
    fChain->SetBranchAddress("blob_mufuzz_E_od_lown", &blob_mufuzz_E_od_lown, &b_blob_mufuzz_E_od_lown);
    fChain->SetBranchAddress("blob_mufuzz_E_od_meson", &blob_mufuzz_E_od_meson, &b_blob_mufuzz_E_od_meson);
    fChain->SetBranchAddress("blob_mufuzz_E_od_midn", &blob_mufuzz_E_od_midn, &b_blob_mufuzz_E_od_midn);
    fChain->SetBranchAddress("blob_mufuzz_E_od_mu", &blob_mufuzz_E_od_mu, &b_blob_mufuzz_E_od_mu);
    fChain->SetBranchAddress("blob_mufuzz_E_od_other", &blob_mufuzz_E_od_other, &b_blob_mufuzz_E_od_other);
    fChain->SetBranchAddress("blob_mufuzz_E_od_p", &blob_mufuzz_E_od_p, &b_blob_mufuzz_E_od_p);
    fChain->SetBranchAddress("blob_mufuzz_E_od_xtalk", &blob_mufuzz_E_od_xtalk, &b_blob_mufuzz_E_od_xtalk);
    fChain->SetBranchAddress("blob_mufuzz_E_other", &blob_mufuzz_E_other, &b_blob_mufuzz_E_other);
    fChain->SetBranchAddress("blob_mufuzz_E_p", &blob_mufuzz_E_p, &b_blob_mufuzz_E_p);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker", &blob_mufuzz_E_tracker, &b_blob_mufuzz_E_tracker);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_em", &blob_mufuzz_E_tracker_em, &b_blob_mufuzz_E_tracker_em);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_highn", &blob_mufuzz_E_tracker_highn, &b_blob_mufuzz_E_tracker_highn);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_lown", &blob_mufuzz_E_tracker_lown, &b_blob_mufuzz_E_tracker_lown);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_meson", &blob_mufuzz_E_tracker_meson, &b_blob_mufuzz_E_tracker_meson);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_midn", &blob_mufuzz_E_tracker_midn, &b_blob_mufuzz_E_tracker_midn);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_mu", &blob_mufuzz_E_tracker_mu, &b_blob_mufuzz_E_tracker_mu);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_other", &blob_mufuzz_E_tracker_other, &b_blob_mufuzz_E_tracker_other);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_p", &blob_mufuzz_E_tracker_p, &b_blob_mufuzz_E_tracker_p);
    fChain->SetBranchAddress("blob_mufuzz_E_tracker_xtalk", &blob_mufuzz_E_tracker_xtalk, &b_blob_mufuzz_E_tracker_xtalk);
    fChain->SetBranchAddress("blob_mufuzz_E_xtalk", &blob_mufuzz_E_xtalk, &b_blob_mufuzz_E_xtalk);
    fChain->SetBranchAddress("blob_recoil_E", &blob_recoil_E, &b_blob_recoil_E);
    fChain->SetBranchAddress("blob_recoil_E_ecal", &blob_recoil_E_ecal, &b_blob_recoil_E_ecal);
    fChain->SetBranchAddress("blob_recoil_E_ecal_em", &blob_recoil_E_ecal_em, &b_blob_recoil_E_ecal_em);
    fChain->SetBranchAddress("blob_recoil_E_ecal_highn", &blob_recoil_E_ecal_highn, &b_blob_recoil_E_ecal_highn);
    fChain->SetBranchAddress("blob_recoil_E_ecal_lown", &blob_recoil_E_ecal_lown, &b_blob_recoil_E_ecal_lown);
    fChain->SetBranchAddress("blob_recoil_E_ecal_meson", &blob_recoil_E_ecal_meson, &b_blob_recoil_E_ecal_meson);
    fChain->SetBranchAddress("blob_recoil_E_ecal_midn", &blob_recoil_E_ecal_midn, &b_blob_recoil_E_ecal_midn);
    fChain->SetBranchAddress("blob_recoil_E_ecal_mu", &blob_recoil_E_ecal_mu, &b_blob_recoil_E_ecal_mu);
    fChain->SetBranchAddress("blob_recoil_E_ecal_other", &blob_recoil_E_ecal_other, &b_blob_recoil_E_ecal_other);
    fChain->SetBranchAddress("blob_recoil_E_ecal_p", &blob_recoil_E_ecal_p, &b_blob_recoil_E_ecal_p);
    fChain->SetBranchAddress("blob_recoil_E_ecal_xtalk", &blob_recoil_E_ecal_xtalk, &b_blob_recoil_E_ecal_xtalk);
    fChain->SetBranchAddress("blob_recoil_E_em", &blob_recoil_E_em, &b_blob_recoil_E_em);
    fChain->SetBranchAddress("blob_recoil_E_hcal", &blob_recoil_E_hcal, &b_blob_recoil_E_hcal);
    fChain->SetBranchAddress("blob_recoil_E_hcal_em", &blob_recoil_E_hcal_em, &b_blob_recoil_E_hcal_em);
    fChain->SetBranchAddress("blob_recoil_E_hcal_highn", &blob_recoil_E_hcal_highn, &b_blob_recoil_E_hcal_highn);
    fChain->SetBranchAddress("blob_recoil_E_hcal_lown", &blob_recoil_E_hcal_lown, &b_blob_recoil_E_hcal_lown);
    fChain->SetBranchAddress("blob_recoil_E_hcal_meson", &blob_recoil_E_hcal_meson, &b_blob_recoil_E_hcal_meson);
    fChain->SetBranchAddress("blob_recoil_E_hcal_midn", &blob_recoil_E_hcal_midn, &b_blob_recoil_E_hcal_midn);
    fChain->SetBranchAddress("blob_recoil_E_hcal_mu", &blob_recoil_E_hcal_mu, &b_blob_recoil_E_hcal_mu);
    fChain->SetBranchAddress("blob_recoil_E_hcal_other", &blob_recoil_E_hcal_other, &b_blob_recoil_E_hcal_other);
    fChain->SetBranchAddress("blob_recoil_E_hcal_p", &blob_recoil_E_hcal_p, &b_blob_recoil_E_hcal_p);
    fChain->SetBranchAddress("blob_recoil_E_hcal_xtalk", &blob_recoil_E_hcal_xtalk, &b_blob_recoil_E_hcal_xtalk);
    fChain->SetBranchAddress("blob_recoil_E_highn", &blob_recoil_E_highn, &b_blob_recoil_E_highn);
    fChain->SetBranchAddress("blob_recoil_E_lown", &blob_recoil_E_lown, &b_blob_recoil_E_lown);
    fChain->SetBranchAddress("blob_recoil_E_meson", &blob_recoil_E_meson, &b_blob_recoil_E_meson);
    fChain->SetBranchAddress("blob_recoil_E_midn", &blob_recoil_E_midn, &b_blob_recoil_E_midn);
    fChain->SetBranchAddress("blob_recoil_E_mu", &blob_recoil_E_mu, &b_blob_recoil_E_mu);
    fChain->SetBranchAddress("blob_recoil_E_nucl", &blob_recoil_E_nucl, &b_blob_recoil_E_nucl);
    fChain->SetBranchAddress("blob_recoil_E_nucl_em", &blob_recoil_E_nucl_em, &b_blob_recoil_E_nucl_em);
    fChain->SetBranchAddress("blob_recoil_E_nucl_highn", &blob_recoil_E_nucl_highn, &b_blob_recoil_E_nucl_highn);
    fChain->SetBranchAddress("blob_recoil_E_nucl_lown", &blob_recoil_E_nucl_lown, &b_blob_recoil_E_nucl_lown);
    fChain->SetBranchAddress("blob_recoil_E_nucl_meson", &blob_recoil_E_nucl_meson, &b_blob_recoil_E_nucl_meson);
    fChain->SetBranchAddress("blob_recoil_E_nucl_midn", &blob_recoil_E_nucl_midn, &b_blob_recoil_E_nucl_midn);
    fChain->SetBranchAddress("blob_recoil_E_nucl_mu", &blob_recoil_E_nucl_mu, &b_blob_recoil_E_nucl_mu);
    fChain->SetBranchAddress("blob_recoil_E_nucl_other", &blob_recoil_E_nucl_other, &b_blob_recoil_E_nucl_other);
    fChain->SetBranchAddress("blob_recoil_E_nucl_p", &blob_recoil_E_nucl_p, &b_blob_recoil_E_nucl_p);
    fChain->SetBranchAddress("blob_recoil_E_nucl_xtalk", &blob_recoil_E_nucl_xtalk, &b_blob_recoil_E_nucl_xtalk);
    fChain->SetBranchAddress("blob_recoil_E_od", &blob_recoil_E_od, &b_blob_recoil_E_od);
    fChain->SetBranchAddress("blob_recoil_E_od_em", &blob_recoil_E_od_em, &b_blob_recoil_E_od_em);
    fChain->SetBranchAddress("blob_recoil_E_od_highn", &blob_recoil_E_od_highn, &b_blob_recoil_E_od_highn);
    fChain->SetBranchAddress("blob_recoil_E_od_lown", &blob_recoil_E_od_lown, &b_blob_recoil_E_od_lown);
    fChain->SetBranchAddress("blob_recoil_E_od_meson", &blob_recoil_E_od_meson, &b_blob_recoil_E_od_meson);
    fChain->SetBranchAddress("blob_recoil_E_od_midn", &blob_recoil_E_od_midn, &b_blob_recoil_E_od_midn);
    fChain->SetBranchAddress("blob_recoil_E_od_mu", &blob_recoil_E_od_mu, &b_blob_recoil_E_od_mu);
    fChain->SetBranchAddress("blob_recoil_E_od_other", &blob_recoil_E_od_other, &b_blob_recoil_E_od_other);
    fChain->SetBranchAddress("blob_recoil_E_od_p", &blob_recoil_E_od_p, &b_blob_recoil_E_od_p);
    fChain->SetBranchAddress("blob_recoil_E_od_xtalk", &blob_recoil_E_od_xtalk, &b_blob_recoil_E_od_xtalk);
    fChain->SetBranchAddress("blob_recoil_E_other", &blob_recoil_E_other, &b_blob_recoil_E_other);
    fChain->SetBranchAddress("blob_recoil_E_p", &blob_recoil_E_p, &b_blob_recoil_E_p);
    fChain->SetBranchAddress("blob_recoil_E_tracker", &blob_recoil_E_tracker, &b_blob_recoil_E_tracker);
    fChain->SetBranchAddress("blob_recoil_E_tracker_em", &blob_recoil_E_tracker_em, &b_blob_recoil_E_tracker_em);
    fChain->SetBranchAddress("blob_recoil_E_tracker_highn", &blob_recoil_E_tracker_highn, &b_blob_recoil_E_tracker_highn);
    fChain->SetBranchAddress("blob_recoil_E_tracker_lown", &blob_recoil_E_tracker_lown, &b_blob_recoil_E_tracker_lown);
    fChain->SetBranchAddress("blob_recoil_E_tracker_meson", &blob_recoil_E_tracker_meson, &b_blob_recoil_E_tracker_meson);
    fChain->SetBranchAddress("blob_recoil_E_tracker_midn", &blob_recoil_E_tracker_midn, &b_blob_recoil_E_tracker_midn);
    fChain->SetBranchAddress("blob_recoil_E_tracker_mu", &blob_recoil_E_tracker_mu, &b_blob_recoil_E_tracker_mu);
    fChain->SetBranchAddress("blob_recoil_E_tracker_other", &blob_recoil_E_tracker_other, &b_blob_recoil_E_tracker_other);
    fChain->SetBranchAddress("blob_recoil_E_tracker_p", &blob_recoil_E_tracker_p, &b_blob_recoil_E_tracker_p);
    fChain->SetBranchAddress("blob_recoil_E_tracker_xtalk", &blob_recoil_E_tracker_xtalk, &b_blob_recoil_E_tracker_xtalk);
    fChain->SetBranchAddress("blob_recoil_E_xtalk", &blob_recoil_E_xtalk, &b_blob_recoil_E_xtalk);
    fChain->SetBranchAddress("blob_vtx_E", &blob_vtx_E, &b_blob_vtx_E);
    fChain->SetBranchAddress("blob_vtx_E_ecal", &blob_vtx_E_ecal, &b_blob_vtx_E_ecal);
    fChain->SetBranchAddress("blob_vtx_E_ecal_em", &blob_vtx_E_ecal_em, &b_blob_vtx_E_ecal_em);
    fChain->SetBranchAddress("blob_vtx_E_ecal_highn", &blob_vtx_E_ecal_highn, &b_blob_vtx_E_ecal_highn);
    fChain->SetBranchAddress("blob_vtx_E_ecal_lown", &blob_vtx_E_ecal_lown, &b_blob_vtx_E_ecal_lown);
    fChain->SetBranchAddress("blob_vtx_E_ecal_meson", &blob_vtx_E_ecal_meson, &b_blob_vtx_E_ecal_meson);
    fChain->SetBranchAddress("blob_vtx_E_ecal_midn", &blob_vtx_E_ecal_midn, &b_blob_vtx_E_ecal_midn);
    fChain->SetBranchAddress("blob_vtx_E_ecal_mu", &blob_vtx_E_ecal_mu, &b_blob_vtx_E_ecal_mu);
    fChain->SetBranchAddress("blob_vtx_E_ecal_other", &blob_vtx_E_ecal_other, &b_blob_vtx_E_ecal_other);
    fChain->SetBranchAddress("blob_vtx_E_ecal_p", &blob_vtx_E_ecal_p, &b_blob_vtx_E_ecal_p);
    fChain->SetBranchAddress("blob_vtx_E_ecal_xtalk", &blob_vtx_E_ecal_xtalk, &b_blob_vtx_E_ecal_xtalk);
    fChain->SetBranchAddress("blob_vtx_E_em", &blob_vtx_E_em, &b_blob_vtx_E_em);
    fChain->SetBranchAddress("blob_vtx_E_hcal", &blob_vtx_E_hcal, &b_blob_vtx_E_hcal);
    fChain->SetBranchAddress("blob_vtx_E_hcal_em", &blob_vtx_E_hcal_em, &b_blob_vtx_E_hcal_em);
    fChain->SetBranchAddress("blob_vtx_E_hcal_highn", &blob_vtx_E_hcal_highn, &b_blob_vtx_E_hcal_highn);
    fChain->SetBranchAddress("blob_vtx_E_hcal_lown", &blob_vtx_E_hcal_lown, &b_blob_vtx_E_hcal_lown);
    fChain->SetBranchAddress("blob_vtx_E_hcal_meson", &blob_vtx_E_hcal_meson, &b_blob_vtx_E_hcal_meson);
    fChain->SetBranchAddress("blob_vtx_E_hcal_midn", &blob_vtx_E_hcal_midn, &b_blob_vtx_E_hcal_midn);
    fChain->SetBranchAddress("blob_vtx_E_hcal_mu", &blob_vtx_E_hcal_mu, &b_blob_vtx_E_hcal_mu);
    fChain->SetBranchAddress("blob_vtx_E_hcal_other", &blob_vtx_E_hcal_other, &b_blob_vtx_E_hcal_other);
    fChain->SetBranchAddress("blob_vtx_E_hcal_p", &blob_vtx_E_hcal_p, &b_blob_vtx_E_hcal_p);
    fChain->SetBranchAddress("blob_vtx_E_hcal_xtalk", &blob_vtx_E_hcal_xtalk, &b_blob_vtx_E_hcal_xtalk);
    fChain->SetBranchAddress("blob_vtx_E_highn", &blob_vtx_E_highn, &b_blob_vtx_E_highn);
    fChain->SetBranchAddress("blob_vtx_E_lown", &blob_vtx_E_lown, &b_blob_vtx_E_lown);
    fChain->SetBranchAddress("blob_vtx_E_meson", &blob_vtx_E_meson, &b_blob_vtx_E_meson);
    fChain->SetBranchAddress("blob_vtx_E_midn", &blob_vtx_E_midn, &b_blob_vtx_E_midn);
    fChain->SetBranchAddress("blob_vtx_E_mu", &blob_vtx_E_mu, &b_blob_vtx_E_mu);
    fChain->SetBranchAddress("blob_vtx_E_nucl", &blob_vtx_E_nucl, &b_blob_vtx_E_nucl);
    fChain->SetBranchAddress("blob_vtx_E_nucl_em", &blob_vtx_E_nucl_em, &b_blob_vtx_E_nucl_em);
    fChain->SetBranchAddress("blob_vtx_E_nucl_highn", &blob_vtx_E_nucl_highn, &b_blob_vtx_E_nucl_highn);
    fChain->SetBranchAddress("blob_vtx_E_nucl_lown", &blob_vtx_E_nucl_lown, &b_blob_vtx_E_nucl_lown);
    fChain->SetBranchAddress("blob_vtx_E_nucl_meson", &blob_vtx_E_nucl_meson, &b_blob_vtx_E_nucl_meson);
    fChain->SetBranchAddress("blob_vtx_E_nucl_midn", &blob_vtx_E_nucl_midn, &b_blob_vtx_E_nucl_midn);
    fChain->SetBranchAddress("blob_vtx_E_nucl_mu", &blob_vtx_E_nucl_mu, &b_blob_vtx_E_nucl_mu);
    fChain->SetBranchAddress("blob_vtx_E_nucl_other", &blob_vtx_E_nucl_other, &b_blob_vtx_E_nucl_other);
    fChain->SetBranchAddress("blob_vtx_E_nucl_p", &blob_vtx_E_nucl_p, &b_blob_vtx_E_nucl_p);
    fChain->SetBranchAddress("blob_vtx_E_nucl_xtalk", &blob_vtx_E_nucl_xtalk, &b_blob_vtx_E_nucl_xtalk);
    fChain->SetBranchAddress("blob_vtx_E_od", &blob_vtx_E_od, &b_blob_vtx_E_od);
    fChain->SetBranchAddress("blob_vtx_E_od_em", &blob_vtx_E_od_em, &b_blob_vtx_E_od_em);
    fChain->SetBranchAddress("blob_vtx_E_od_highn", &blob_vtx_E_od_highn, &b_blob_vtx_E_od_highn);
    fChain->SetBranchAddress("blob_vtx_E_od_lown", &blob_vtx_E_od_lown, &b_blob_vtx_E_od_lown);
    fChain->SetBranchAddress("blob_vtx_E_od_meson", &blob_vtx_E_od_meson, &b_blob_vtx_E_od_meson);
    fChain->SetBranchAddress("blob_vtx_E_od_midn", &blob_vtx_E_od_midn, &b_blob_vtx_E_od_midn);
    fChain->SetBranchAddress("blob_vtx_E_od_mu", &blob_vtx_E_od_mu, &b_blob_vtx_E_od_mu);
    fChain->SetBranchAddress("blob_vtx_E_od_other", &blob_vtx_E_od_other, &b_blob_vtx_E_od_other);
    fChain->SetBranchAddress("blob_vtx_E_od_p", &blob_vtx_E_od_p, &b_blob_vtx_E_od_p);
    fChain->SetBranchAddress("blob_vtx_E_od_xtalk", &blob_vtx_E_od_xtalk, &b_blob_vtx_E_od_xtalk);
    fChain->SetBranchAddress("blob_vtx_E_other", &blob_vtx_E_other, &b_blob_vtx_E_other);
    fChain->SetBranchAddress("blob_vtx_E_p", &blob_vtx_E_p, &b_blob_vtx_E_p);
    fChain->SetBranchAddress("blob_vtx_E_tracker", &blob_vtx_E_tracker, &b_blob_vtx_E_tracker);
    fChain->SetBranchAddress("blob_vtx_E_tracker_em", &blob_vtx_E_tracker_em, &b_blob_vtx_E_tracker_em);
    fChain->SetBranchAddress("blob_vtx_E_tracker_highn", &blob_vtx_E_tracker_highn, &b_blob_vtx_E_tracker_highn);
    fChain->SetBranchAddress("blob_vtx_E_tracker_lown", &blob_vtx_E_tracker_lown, &b_blob_vtx_E_tracker_lown);
    fChain->SetBranchAddress("blob_vtx_E_tracker_meson", &blob_vtx_E_tracker_meson, &b_blob_vtx_E_tracker_meson);
    fChain->SetBranchAddress("blob_vtx_E_tracker_midn", &blob_vtx_E_tracker_midn, &b_blob_vtx_E_tracker_midn);
    fChain->SetBranchAddress("blob_vtx_E_tracker_mu", &blob_vtx_E_tracker_mu, &b_blob_vtx_E_tracker_mu);
    fChain->SetBranchAddress("blob_vtx_E_tracker_other", &blob_vtx_E_tracker_other, &b_blob_vtx_E_tracker_other);
    fChain->SetBranchAddress("blob_vtx_E_tracker_p", &blob_vtx_E_tracker_p, &b_blob_vtx_E_tracker_p);
    fChain->SetBranchAddress("blob_vtx_E_tracker_xtalk", &blob_vtx_E_tracker_xtalk, &b_blob_vtx_E_tracker_xtalk);
    fChain->SetBranchAddress("blob_vtx_E_xtalk", &blob_vtx_E_xtalk, &b_blob_vtx_E_xtalk);
    fChain->SetBranchAddress("energy_from_mc", &energy_from_mc, &b_energy_from_mc);
    fChain->SetBranchAddress("energy_from_mc_fraction", &energy_from_mc_fraction, &b_energy_from_mc_fraction);
    fChain->SetBranchAddress("energy_from_mc_fraction_of_highest", &energy_from_mc_fraction_of_highest, &b_energy_from_mc_fraction_of_highest);
    fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
    fChain->SetBranchAddress("muon_theta", &muon_theta, &b_muon_theta);
    fChain->SetBranchAddress("muon_thetaX", &muon_thetaX, &b_muon_thetaX);
    fChain->SetBranchAddress("muon_thetaY", &muon_thetaY, &b_muon_thetaY);
    fChain->SetBranchAddress("muon_trackVertexTime", &muon_trackVertexTime, &b_muon_trackVertexTime);
    fChain->SetBranchAddress("muon_truthMatch_fraction", &muon_truthMatch_fraction, &b_muon_truthMatch_fraction);
    fChain->SetBranchAddress("numi_bpm1", &numi_bpm1, &b_numi_bpm1);
    fChain->SetBranchAddress("numi_bpm2", &numi_bpm2, &b_numi_bpm2);
    fChain->SetBranchAddress("numi_bpm3", &numi_bpm3, &b_numi_bpm3);
    fChain->SetBranchAddress("numi_bpm4", &numi_bpm4, &b_numi_bpm4);
    fChain->SetBranchAddress("numi_bpm5", &numi_bpm5, &b_numi_bpm5);
    fChain->SetBranchAddress("numi_bpm6", &numi_bpm6, &b_numi_bpm6);
    fChain->SetBranchAddress("numi_horn_curr", &numi_horn_curr, &b_numi_horn_curr);
    fChain->SetBranchAddress("numi_pot", &numi_pot, &b_numi_pot);
    fChain->SetBranchAddress("numi_tor101", &numi_tor101, &b_numi_tor101);
    fChain->SetBranchAddress("numi_tortgt", &numi_tortgt, &b_numi_tortgt);
    fChain->SetBranchAddress("numi_tr101d", &numi_tr101d, &b_numi_tr101d);
    fChain->SetBranchAddress("numi_trtgtd", &numi_trtgtd, &b_numi_trtgtd);
    fChain->SetBranchAddress("numi_x", &numi_x, &b_numi_x);
    fChain->SetBranchAddress("numi_x_width", &numi_x_width, &b_numi_x_width);
    fChain->SetBranchAddress("numi_y", &numi_y, &b_numi_y);
    fChain->SetBranchAddress("numi_y_width", &numi_y_width, &b_numi_y_width);
    fChain->SetBranchAddress("phys_energy_dispersed", &phys_energy_dispersed, &b_phys_energy_dispersed);
    fChain->SetBranchAddress("phys_energy_in_road_downstream", &phys_energy_in_road_downstream, &b_phys_energy_in_road_downstream);
    fChain->SetBranchAddress("phys_energy_in_road_upstream", &phys_energy_in_road_upstream, &b_phys_energy_in_road_upstream);
    fChain->SetBranchAddress("phys_energy_unattached", &phys_energy_unattached, &b_phys_energy_unattached);
    fChain->SetBranchAddress("prim_vtx_smallest_opening_angle", &prim_vtx_smallest_opening_angle, &b_prim_vtx_smallest_opening_angle);
    fChain->SetBranchAddress("primary_track_minerva_energy", &primary_track_minerva_energy, &b_primary_track_minerva_energy);
    fChain->SetBranchAddress("primary_track_minerva_phi", &primary_track_minerva_phi, &b_primary_track_minerva_phi);
    fChain->SetBranchAddress("primary_track_minerva_theta", &primary_track_minerva_theta, &b_primary_track_minerva_theta);
    fChain->SetBranchAddress("usact_avg_E_consecutive_huge", &usact_avg_E_consecutive_huge, &b_usact_avg_E_consecutive_huge);
    fChain->SetBranchAddress("usact_avg_E_consecutive_inf", &usact_avg_E_consecutive_inf, &b_usact_avg_E_consecutive_inf);
    fChain->SetBranchAddress("usact_avg_E_consecutive_large", &usact_avg_E_consecutive_large, &b_usact_avg_E_consecutive_large);
    fChain->SetBranchAddress("usact_avg_E_consecutive_normal", &usact_avg_E_consecutive_normal, &b_usact_avg_E_consecutive_normal);
    fChain->SetBranchAddress("usact_avg_E_consecutive_small", &usact_avg_E_consecutive_small, &b_usact_avg_E_consecutive_small);
    fChain->SetBranchAddress("usact_avg_E_consecutive_texas_sized", &usact_avg_E_consecutive_texas_sized, &b_usact_avg_E_consecutive_texas_sized);
    fChain->SetBranchAddress("usact_avg_E_consecutive_tiny", &usact_avg_E_consecutive_tiny, &b_usact_avg_E_consecutive_tiny);
    fChain->SetBranchAddress("usact_avg_E_huge", &usact_avg_E_huge, &b_usact_avg_E_huge);
    fChain->SetBranchAddress("usact_avg_E_inf", &usact_avg_E_inf, &b_usact_avg_E_inf);
    fChain->SetBranchAddress("usact_avg_E_large", &usact_avg_E_large, &b_usact_avg_E_large);
    fChain->SetBranchAddress("usact_avg_E_normal", &usact_avg_E_normal, &b_usact_avg_E_normal);
    fChain->SetBranchAddress("usact_avg_E_small", &usact_avg_E_small, &b_usact_avg_E_small);
    fChain->SetBranchAddress("usact_avg_E_texas_sized", &usact_avg_E_texas_sized, &b_usact_avg_E_texas_sized);
    fChain->SetBranchAddress("usact_avg_E_tiny", &usact_avg_E_tiny, &b_usact_avg_E_tiny);
    fChain->SetBranchAddress("usact_frac_withE_huge", &usact_frac_withE_huge, &b_usact_frac_withE_huge);
    fChain->SetBranchAddress("usact_frac_withE_inf", &usact_frac_withE_inf, &b_usact_frac_withE_inf);
    fChain->SetBranchAddress("usact_frac_withE_large", &usact_frac_withE_large, &b_usact_frac_withE_large);
    fChain->SetBranchAddress("usact_frac_withE_normal", &usact_frac_withE_normal, &b_usact_frac_withE_normal);
    fChain->SetBranchAddress("usact_frac_withE_small", &usact_frac_withE_small, &b_usact_frac_withE_small);
    fChain->SetBranchAddress("usact_frac_withE_texas_sized", &usact_frac_withE_texas_sized, &b_usact_frac_withE_texas_sized);
    fChain->SetBranchAddress("usact_frac_withE_tiny", &usact_frac_withE_tiny, &b_usact_frac_withE_tiny);
    fChain->SetBranchAddress("vetoMuonTime", &vetoMuonTime, &b_vetoMuonTime);
    fChain->SetBranchAddress("vtx_fit_chi2", &vtx_fit_chi2, &b_vtx_fit_chi2);
    fChain->SetBranchAddress("n_vetoDigits", &n_vetoDigits, &b_n_vetoDigits);
    fChain->SetBranchAddress("discrFired", &discrFired, &b_discrFired);
    fChain->SetBranchAddress("has_michel_at_vertex_sz", &has_michel_at_vertex_sz, &b_has_michel_at_vertex_sz);
    fChain->SetBranchAddress("has_michel_at_vertex", has_michel_at_vertex, &b_has_michel_at_vertex);
    fChain->SetBranchAddress("has_michel_beginModule_sz", &has_michel_beginModule_sz, &b_has_michel_beginModule_sz);
    fChain->SetBranchAddress("has_michel_beginModule", has_michel_beginModule, &b_has_michel_beginModule);
    fChain->SetBranchAddress("has_michel_category_sz", &has_michel_category_sz, &b_has_michel_category_sz);
    fChain->SetBranchAddress("has_michel_category", has_michel_category, &b_has_michel_category);
    fChain->SetBranchAddress("has_michel_endModule_sz", &has_michel_endModule_sz, &b_has_michel_endModule_sz);
    fChain->SetBranchAddress("has_michel_endModule", has_michel_endModule, &b_has_michel_endModule);
    fChain->SetBranchAddress("has_michel_numDigits_sz", &has_michel_numDigits_sz, &b_has_michel_numDigits_sz);
    fChain->SetBranchAddress("has_michel_numDigits", has_michel_numDigits, &b_has_michel_numDigits);
    fChain->SetBranchAddress("has_michel_numModules_sz", &has_michel_numModules_sz, &b_has_michel_numModules_sz);
    fChain->SetBranchAddress("has_michel_numModules", has_michel_numModules, &b_has_michel_numModules);
    fChain->SetBranchAddress("has_michel_numPlanes_sz", &has_michel_numPlanes_sz, &b_has_michel_numPlanes_sz);
    fChain->SetBranchAddress("has_michel_numPlanes", has_michel_numPlanes, &b_has_michel_numPlanes);
    fChain->SetBranchAddress("has_michel_numTracks_sz", &has_michel_numTracks_sz, &b_has_michel_numTracks_sz);
    fChain->SetBranchAddress("has_michel_numTracks", has_michel_numTracks, &b_has_michel_numTracks);
    fChain->SetBranchAddress("has_michel_slice_number_sz", &has_michel_slice_number_sz, &b_has_michel_slice_number_sz);
    fChain->SetBranchAddress("has_michel_slice_number", &has_michel_slice_number, &b_has_michel_slice_number);
    fChain->SetBranchAddress("has_michel_vertex_type_sz", &has_michel_vertex_type_sz, &b_has_michel_vertex_type_sz);
    fChain->SetBranchAddress("has_michel_vertex_type", has_michel_vertex_type, &b_has_michel_vertex_type);
    fChain->SetBranchAddress("has_michel_view_sum_sz", &has_michel_view_sum_sz, &b_has_michel_view_sum_sz);
    fChain->SetBranchAddress("has_michel_view_sum", has_michel_view_sum, &b_has_michel_view_sum);
    fChain->SetBranchAddress("latticeEnergyIndices", latticeEnergyIndices, &b_latticeEnergyIndices);
    fChain->SetBranchAddress("paddle", &paddle, &b_paddle);
    fChain->SetBranchAddress("pmt", &pmt, &b_pmt);
    fChain->SetBranchAddress("pmt_occupancy", &pmt_occupancy, &b_pmt_occupancy);
    fChain->SetBranchAddress("wall", &wall, &b_wall);
    fChain->SetBranchAddress("has_michel_distance_sz", &has_michel_distance_sz, &b_has_michel_distance_sz);
    fChain->SetBranchAddress("has_michel_distance", has_michel_distance, &b_has_michel_distance);
    fChain->SetBranchAddress("has_michel_energy_sz", &has_michel_energy_sz, &b_has_michel_energy_sz);
    fChain->SetBranchAddress("has_michel_energy", has_michel_energy, &b_has_michel_energy);
    fChain->SetBranchAddress("has_michel_slice_energy_sz", &has_michel_slice_energy_sz, &b_has_michel_slice_energy_sz);
    fChain->SetBranchAddress("has_michel_slice_energy", has_michel_slice_energy, &b_has_michel_slice_energy);
    fChain->SetBranchAddress("has_michel_time_diff_sz", &has_michel_time_diff_sz, &b_has_michel_time_diff_sz);
    fChain->SetBranchAddress("has_michel_time_diff", has_michel_time_diff, &b_has_michel_time_diff);
    fChain->SetBranchAddress("latticeNormEnergySums", latticeNormEnergySums, &b_latticeNormEnergySums);
    fChain->SetBranchAddress("latticeRelativeTimes", latticeRelativeTimes, &b_latticeRelativeTimes);
    fChain->SetBranchAddress("muon_DSnode_pos", muon_DSnode_pos, &b_muon_DSnode_pos);
    fChain->SetBranchAddress("muon_corrected_p", muon_corrected_p, &b_muon_corrected_p);
    fChain->SetBranchAddress("muon_sp", muon_sp, &b_muon_sp);
    fChain->SetBranchAddress("muon_sp_orig", muon_sp_orig, &b_muon_sp_orig);
    fChain->SetBranchAddress("orig_short_vtx", orig_short_vtx, &b_orig_short_vtx);
    fChain->SetBranchAddress("orig_vtx", orig_vtx, &b_orig_vtx);
    fChain->SetBranchAddress("primary_track_minerva_end_position", primary_track_minerva_end_position, &b_primary_track_minerva_end_position);
    fChain->SetBranchAddress("primary_track_minerva_start_position", primary_track_minerva_start_position, &b_primary_track_minerva_start_position);
    fChain->SetBranchAddress("time_distribution", &time_distribution, &b_time_distribution);
    fChain->SetBranchAddress("truth_has_michel_from_pion_minus_momentum_sz", &truth_has_michel_from_pion_minus_momentum_sz, &b_truth_has_michel_from_pion_minus_momentum_sz);
    fChain->SetBranchAddress("truth_has_michel_from_pion_minus_momentum", &truth_has_michel_from_pion_minus_momentum, &b_truth_has_michel_from_pion_minus_momentum);
    fChain->SetBranchAddress("truth_has_michel_from_pion_plus_momentum_sz", &truth_has_michel_from_pion_plus_momentum_sz, &b_truth_has_michel_from_pion_plus_momentum_sz);
    fChain->SetBranchAddress("truth_has_michel_from_pion_plus_momentum", truth_has_michel_from_pion_plus_momentum, &b_truth_has_michel_from_pion_plus_momentum);
    fChain->SetBranchAddress("usact_E_per_plane_huge", usact_E_per_plane_huge, &b_usact_E_per_plane_huge);
    fChain->SetBranchAddress("usact_E_per_plane_inf", usact_E_per_plane_inf, &b_usact_E_per_plane_inf);
    fChain->SetBranchAddress("usact_E_per_plane_large", usact_E_per_plane_large, &b_usact_E_per_plane_large);
    fChain->SetBranchAddress("usact_E_per_plane_normal", usact_E_per_plane_normal, &b_usact_E_per_plane_normal);
    fChain->SetBranchAddress("usact_E_per_plane_small", usact_E_per_plane_small, &b_usact_E_per_plane_small);
    fChain->SetBranchAddress("usact_E_per_plane_texas_sized", usact_E_per_plane_texas_sized, &b_usact_E_per_plane_texas_sized);
    fChain->SetBranchAddress("usact_E_per_plane_tiny", usact_E_per_plane_tiny, &b_usact_E_per_plane_tiny);
    fChain->SetBranchAddress("vtx_blob_radius", &vtx_blob_radius, &b_vtx_blob_radius);
    fChain->SetBranchAddress("truth_has_physics_event", &truth_has_physics_event, &b_truth_has_physics_event);
    fChain->SetBranchAddress("truth_muon_is_plausible", &truth_muon_is_plausible, &b_truth_muon_is_plausible);
    fChain->SetBranchAddress("truth_reco_has_int_vtx", &truth_reco_has_int_vtx, &b_truth_reco_has_int_vtx);
    fChain->SetBranchAddress("truth_reco_has_bad_object", &truth_reco_has_bad_object, &b_truth_reco_has_bad_object);
    fChain->SetBranchAddress("truth_reco_has_muon", &truth_reco_has_muon, &b_truth_reco_has_muon);
    fChain->SetBranchAddress("truth_reco_muon_has_charge", &truth_reco_muon_has_charge, &b_truth_reco_muon_has_charge);
    fChain->SetBranchAddress("truth_reco_has_good_vtx", &truth_reco_has_good_vtx, &b_truth_reco_has_good_vtx);
    fChain->SetBranchAddress("truth_reco_is_rock_muon", &truth_reco_is_rock_muon, &b_truth_reco_is_rock_muon);
    fChain->SetBranchAddress("truth_pass_NukeCC", &truth_pass_NukeCC, &b_truth_pass_NukeCC);
    fChain->SetBranchAddress("truth_in_analyzable_area", &truth_in_analyzable_area, &b_truth_in_analyzable_area);
    fChain->SetBranchAddress("truth_in_fiducial_area", &truth_in_fiducial_area, &b_truth_in_fiducial_area);
    fChain->SetBranchAddress("truth_muon_leaving_code", &truth_muon_leaving_code, &b_truth_muon_leaving_code);
    fChain->SetBranchAddress("truth_muon_track_id", &truth_muon_track_id, &b_truth_muon_track_id);
    fChain->SetBranchAddress("truth_reco_has_michel_electron", &truth_reco_has_michel_electron, &b_truth_reco_has_michel_electron);
    fChain->SetBranchAddress("truth_targetID", &truth_targetID, &b_truth_targetID);
    fChain->SetBranchAddress("truth_targetZ", &truth_targetZ, &b_truth_targetZ);
    fChain->SetBranchAddress("truth_target_code", &truth_target_code, &b_truth_target_code);
    fChain->SetBranchAddress("truth_vtx_module", &truth_vtx_module, &b_truth_vtx_module);
    fChain->SetBranchAddress("truth_vtx_plane", &truth_vtx_plane, &b_truth_vtx_plane);
    fChain->SetBranchAddress("truth_fs_energy_em", &truth_fs_energy_em, &b_truth_fs_energy_em);
    fChain->SetBranchAddress("truth_fs_energy_highn", &truth_fs_energy_highn, &b_truth_fs_energy_highn);
    fChain->SetBranchAddress("truth_fs_energy_hmidn", &truth_fs_energy_hmidn, &b_truth_fs_energy_hmidn);
    fChain->SetBranchAddress("truth_fs_energy_lown", &truth_fs_energy_lown, &b_truth_fs_energy_lown);
    fChain->SetBranchAddress("truth_fs_energy_meson", &truth_fs_energy_meson, &b_truth_fs_energy_meson);
    fChain->SetBranchAddress("truth_fs_energy_mu", &truth_fs_energy_mu, &b_truth_fs_energy_mu);
    fChain->SetBranchAddress("truth_fs_energy_o", &truth_fs_energy_o, &b_truth_fs_energy_o);
    fChain->SetBranchAddress("truth_fs_energy_p", &truth_fs_energy_p, &b_truth_fs_energy_p);
    fChain->SetBranchAddress("truth_muon_phi", &truth_muon_phi, &b_truth_muon_phi);
    fChain->SetBranchAddress("truth_muon_theta", &truth_muon_theta, &b_truth_muon_theta);
    fChain->SetBranchAddress("truth_muon_thetaX", &truth_muon_thetaX, &b_truth_muon_thetaX);
    fChain->SetBranchAddress("truth_muon_thetaY", &truth_muon_thetaY, &b_truth_muon_thetaY);
    fChain->SetBranchAddress("truth_target_dist_to_division", &truth_target_dist_to_division, &b_truth_target_dist_to_division);
    fChain->SetBranchAddress("truth_target_zDist", &truth_target_zDist, &b_truth_target_zDist);
    fChain->SetBranchAddress("truth_ref_targZ", truth_ref_targZ, &b_truth_ref_targZ);
    fChain->SetBranchAddress("genie_wgt_n_shifts", &genie_wgt_n_shifts, &b_genie_wgt_n_shifts);
    fChain->SetBranchAddress("truth_genie_wgt_AGKYxF1pi", truth_genie_wgt_AGKYxF1pi, &b_truth_genie_wgt_AGKYxF1pi);
    fChain->SetBranchAddress("truth_genie_wgt_AhtBY", truth_genie_wgt_AhtBY, &b_truth_genie_wgt_AhtBY);
    fChain->SetBranchAddress("truth_genie_wgt_BhtBY", truth_genie_wgt_BhtBY, &b_truth_genie_wgt_BhtBY);
    fChain->SetBranchAddress("truth_genie_wgt_CCQEPauliSupViaKF", truth_genie_wgt_CCQEPauliSupViaKF, &b_truth_genie_wgt_CCQEPauliSupViaKF);
    fChain->SetBranchAddress("truth_genie_wgt_CV1uBY", truth_genie_wgt_CV1uBY, &b_truth_genie_wgt_CV1uBY);
    fChain->SetBranchAddress("truth_genie_wgt_CV2uBY", truth_genie_wgt_CV2uBY, &b_truth_genie_wgt_CV2uBY);
    fChain->SetBranchAddress("truth_genie_wgt_EtaNCEL", truth_genie_wgt_EtaNCEL, &b_truth_genie_wgt_EtaNCEL);
    fChain->SetBranchAddress("truth_genie_wgt_FrAbs_N", truth_genie_wgt_FrAbs_N, &b_truth_genie_wgt_FrAbs_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrAbs_pi", truth_genie_wgt_FrAbs_pi, &b_truth_genie_wgt_FrAbs_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrCEx_N", truth_genie_wgt_FrCEx_N, &b_truth_genie_wgt_FrCEx_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrCEx_pi", truth_genie_wgt_FrCEx_pi, &b_truth_genie_wgt_FrCEx_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrElas_N", truth_genie_wgt_FrElas_N, &b_truth_genie_wgt_FrElas_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrElas_pi", truth_genie_wgt_FrElas_pi, &b_truth_genie_wgt_FrElas_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrInel_N", truth_genie_wgt_FrInel_N, &b_truth_genie_wgt_FrInel_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrInel_pi", truth_genie_wgt_FrInel_pi, &b_truth_genie_wgt_FrInel_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrPiProd_N", truth_genie_wgt_FrPiProd_N, &b_truth_genie_wgt_FrPiProd_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrPiProd_pi", truth_genie_wgt_FrPiProd_pi, &b_truth_genie_wgt_FrPiProd_pi);
    fChain->SetBranchAddress("truth_genie_wgt_MFP_N", truth_genie_wgt_MFP_N, &b_truth_genie_wgt_MFP_N);
    fChain->SetBranchAddress("truth_genie_wgt_MFP_pi", truth_genie_wgt_MFP_pi, &b_truth_genie_wgt_MFP_pi);
    fChain->SetBranchAddress("truth_genie_wgt_MaCCQE", truth_genie_wgt_MaCCQE, &b_truth_genie_wgt_MaCCQE);
    fChain->SetBranchAddress("truth_genie_wgt_MaCCQEshape", truth_genie_wgt_MaCCQEshape, &b_truth_genie_wgt_MaCCQEshape);
    fChain->SetBranchAddress("truth_genie_wgt_MaNCEL", truth_genie_wgt_MaNCEL, &b_truth_genie_wgt_MaNCEL);
    fChain->SetBranchAddress("truth_genie_wgt_MaRES", truth_genie_wgt_MaRES, &b_truth_genie_wgt_MaRES);
    fChain->SetBranchAddress("truth_genie_wgt_MvRES", truth_genie_wgt_MvRES, &b_truth_genie_wgt_MvRES);
    fChain->SetBranchAddress("truth_genie_wgt_NormCCQE", truth_genie_wgt_NormCCQE, &b_truth_genie_wgt_NormCCQE);
    fChain->SetBranchAddress("truth_genie_wgt_NormCCRES", truth_genie_wgt_NormCCRES, &b_truth_genie_wgt_NormCCRES);
    fChain->SetBranchAddress("truth_genie_wgt_NormDISCC", truth_genie_wgt_NormDISCC, &b_truth_genie_wgt_NormDISCC);
    fChain->SetBranchAddress("truth_genie_wgt_NormNCRES", truth_genie_wgt_NormNCRES, &b_truth_genie_wgt_NormNCRES);
    fChain->SetBranchAddress("truth_genie_wgt_RDecBR1gamma", truth_genie_wgt_RDecBR1gamma, &b_truth_genie_wgt_RDecBR1gamma);
    fChain->SetBranchAddress("truth_genie_wgt_Rvn1pi", truth_genie_wgt_Rvn1pi, &b_truth_genie_wgt_Rvn1pi);
    fChain->SetBranchAddress("truth_genie_wgt_Rvn2pi", truth_genie_wgt_Rvn2pi, &b_truth_genie_wgt_Rvn2pi);
    fChain->SetBranchAddress("truth_genie_wgt_Rvp1pi", truth_genie_wgt_Rvp1pi, &b_truth_genie_wgt_Rvp1pi);
    fChain->SetBranchAddress("truth_genie_wgt_Rvp2pi", truth_genie_wgt_Rvp2pi, &b_truth_genie_wgt_Rvp2pi);
    fChain->SetBranchAddress("truth_genie_wgt_Theta_Delta2Npi", truth_genie_wgt_Theta_Delta2Npi, &b_truth_genie_wgt_Theta_Delta2Npi);
    fChain->SetBranchAddress("truth_genie_wgt_VecFFCCQEshape", truth_genie_wgt_VecFFCCQEshape, &b_truth_genie_wgt_VecFFCCQEshape);
    fChain->SetBranchAddress("truth_genie_wgt_shifts", truth_genie_wgt_shifts, &b_truth_genie_wgt_shifts);
    fChain->SetBranchAddress("truth_muon_end_momentum", truth_muon_end_momentum, &b_truth_muon_end_momentum);
    fChain->SetBranchAddress("truth_muon_end_position", truth_muon_end_position, &b_truth_muon_end_position);
    fChain->SetBranchAddress("truth_ref_dist_to_division", truth_ref_dist_to_division, &b_truth_ref_dist_to_division);
    fChain->SetBranchAddress("truth_ref_dist_to_target", truth_ref_dist_to_target, &b_truth_ref_dist_to_target);
    fChain->SetBranchAddress("NukeCC_nuFlavor", &NukeCC_nuFlavor, &b_NukeCC_nuFlavor);
    fChain->SetBranchAddress("NukeCC_nuHelicity", &NukeCC_nuHelicity, &b_NukeCC_nuHelicity);
    fChain->SetBranchAddress("NukeCC_intCurrent", &NukeCC_intCurrent, &b_NukeCC_intCurrent);
    fChain->SetBranchAddress("NukeCC_intType", &NukeCC_intType, &b_NukeCC_intType);
    fChain->SetBranchAddress("NukeCC_E", &NukeCC_E, &b_NukeCC_E);
    fChain->SetBranchAddress("NukeCC_Q2", &NukeCC_Q2, &b_NukeCC_Q2);
    fChain->SetBranchAddress("NukeCC_x", &NukeCC_x, &b_NukeCC_x);
    fChain->SetBranchAddress("NukeCC_y", &NukeCC_y, &b_NukeCC_y);
    fChain->SetBranchAddress("NukeCC_W", &NukeCC_W, &b_NukeCC_W);
    fChain->SetBranchAddress("NukeCC_score", &NukeCC_score, &b_NukeCC_score);
    fChain->SetBranchAddress("NukeCC_leptonE", NukeCC_leptonE, &b_NukeCC_leptonE);
    fChain->SetBranchAddress("NukeCC_vtx", NukeCC_vtx, &b_NukeCC_vtx);
    fChain->SetBranchAddress("NukeCC_minos_trk_is_contained", &NukeCC_minos_trk_is_contained, &b_NukeCC_minos_trk_is_contained);
    fChain->SetBranchAddress("NukeCC_minos_trk_is_ok", &NukeCC_minos_trk_is_ok, &b_NukeCC_minos_trk_is_ok);
    fChain->SetBranchAddress("NukeCC_minos_used_range", &NukeCC_minos_used_range, &b_NukeCC_minos_used_range);
    fChain->SetBranchAddress("NukeCC_minos_used_curvature", &NukeCC_minos_used_curvature, &b_NukeCC_minos_used_curvature);
    fChain->SetBranchAddress("NukeCC_pass_canonical_cut", &NukeCC_pass_canonical_cut, &b_NukeCC_pass_canonical_cut);
    fChain->SetBranchAddress("NukeCC_is_cc", &NukeCC_is_cc, &b_NukeCC_is_cc);
    fChain->SetBranchAddress("NukeCC_in_analyzable_area", &NukeCC_in_analyzable_area, &b_NukeCC_in_analyzable_area);
    fChain->SetBranchAddress("NukeCC_in_fiducial_area", &NukeCC_in_fiducial_area, &b_NukeCC_in_fiducial_area);
    fChain->SetBranchAddress("NukeCC_minos_trk_end_plane", &NukeCC_minos_trk_end_plane, &b_NukeCC_minos_trk_end_plane);
    fChain->SetBranchAddress("NukeCC_minos_trk_quality", &NukeCC_minos_trk_quality, &b_NukeCC_minos_trk_quality);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_vtx_plane", &NukeCC_r_minos_trk_vtx_plane, &b_NukeCC_r_minos_trk_vtx_plane);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_numFSMuons", &NukeCC_t_minos_trk_numFSMuons, &b_NukeCC_t_minos_trk_numFSMuons);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLeptonPDG", &NukeCC_t_minos_trk_primFSLeptonPDG, &b_NukeCC_t_minos_trk_primFSLeptonPDG);
    fChain->SetBranchAddress("NukeCC_targetID", &NukeCC_targetID, &b_NukeCC_targetID);
    fChain->SetBranchAddress("NukeCC_targetZ", &NukeCC_targetZ, &b_NukeCC_targetZ);
    fChain->SetBranchAddress("NukeCC_target_code", &NukeCC_target_code, &b_NukeCC_target_code);
    fChain->SetBranchAddress("NukeCC_vtx_module", &NukeCC_vtx_module, &b_NukeCC_vtx_module);
    fChain->SetBranchAddress("NukeCC_vtx_plane", &NukeCC_vtx_plane, &b_NukeCC_vtx_plane);
    fChain->SetBranchAddress("NukeCC_E_ccqe", &NukeCC_E_ccqe, &b_NukeCC_E_ccqe);
    fChain->SetBranchAddress("NukeCC_E_wide_window", &NukeCC_E_wide_window, &b_NukeCC_E_wide_window);
    fChain->SetBranchAddress("NukeCC_Q2_ccqe", &NukeCC_Q2_ccqe, &b_NukeCC_Q2_ccqe);
    fChain->SetBranchAddress("NukeCC_Q2_wide_window", &NukeCC_Q2_wide_window, &b_NukeCC_Q2_wide_window);
    fChain->SetBranchAddress("NukeCC_W_wide_window", &NukeCC_W_wide_window, &b_NukeCC_W_wide_window);
    fChain->SetBranchAddress("NukeCC_minos_trk_bave", &NukeCC_minos_trk_bave, &b_NukeCC_minos_trk_bave);
    fChain->SetBranchAddress("NukeCC_minos_trk_chi2", &NukeCC_minos_trk_chi2, &b_NukeCC_minos_trk_chi2);
    fChain->SetBranchAddress("NukeCC_minos_trk_end_u", &NukeCC_minos_trk_end_u, &b_NukeCC_minos_trk_end_u);
    fChain->SetBranchAddress("NukeCC_minos_trk_end_v", &NukeCC_minos_trk_end_v, &b_NukeCC_minos_trk_end_v);
    fChain->SetBranchAddress("NukeCC_minos_trk_end_x", &NukeCC_minos_trk_end_x, &b_NukeCC_minos_trk_end_x);
    fChain->SetBranchAddress("NukeCC_minos_trk_end_y", &NukeCC_minos_trk_end_y, &b_NukeCC_minos_trk_end_y);
    fChain->SetBranchAddress("NukeCC_minos_trk_end_z", &NukeCC_minos_trk_end_z, &b_NukeCC_minos_trk_end_z);
    fChain->SetBranchAddress("NukeCC_minos_trk_eqp", &NukeCC_minos_trk_eqp, &b_NukeCC_minos_trk_eqp);
    fChain->SetBranchAddress("NukeCC_minos_trk_eqp_qp", &NukeCC_minos_trk_eqp_qp, &b_NukeCC_minos_trk_eqp_qp);
    fChain->SetBranchAddress("NukeCC_minos_trk_fit_pass", &NukeCC_minos_trk_fit_pass, &b_NukeCC_minos_trk_fit_pass);
    fChain->SetBranchAddress("NukeCC_minos_trk_ndf", &NukeCC_minos_trk_ndf, &b_NukeCC_minos_trk_ndf);
    fChain->SetBranchAddress("NukeCC_minos_trk_p", &NukeCC_minos_trk_p, &b_NukeCC_minos_trk_p);
    fChain->SetBranchAddress("NukeCC_minos_trk_p_curvature", &NukeCC_minos_trk_p_curvature, &b_NukeCC_minos_trk_p_curvature);
    fChain->SetBranchAddress("NukeCC_minos_trk_p_range", &NukeCC_minos_trk_p_range, &b_NukeCC_minos_trk_p_range);
    fChain->SetBranchAddress("NukeCC_minos_trk_qp", &NukeCC_minos_trk_qp, &b_NukeCC_minos_trk_qp);
    fChain->SetBranchAddress("NukeCC_minos_trk_vtx_x", &NukeCC_minos_trk_vtx_x, &b_NukeCC_minos_trk_vtx_x);
    fChain->SetBranchAddress("NukeCC_minos_trk_vtx_y", &NukeCC_minos_trk_vtx_y, &b_NukeCC_minos_trk_vtx_y);
    fChain->SetBranchAddress("NukeCC_minos_trk_vtx_z", &NukeCC_minos_trk_vtx_z, &b_NukeCC_minos_trk_vtx_z);
    fChain->SetBranchAddress("NukeCC_nu_energy_recoil", &NukeCC_nu_energy_recoil, &b_NukeCC_nu_energy_recoil);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_bdL", &NukeCC_r_minos_trk_bdL, &b_NukeCC_r_minos_trk_bdL);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_end_dcosx", &NukeCC_r_minos_trk_end_dcosx, &b_NukeCC_r_minos_trk_end_dcosx);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_end_dcosy", &NukeCC_r_minos_trk_end_dcosy, &b_NukeCC_r_minos_trk_end_dcosy);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_end_dcosz", &NukeCC_r_minos_trk_end_dcosz, &b_NukeCC_r_minos_trk_end_dcosz);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_vtx_dcosx", &NukeCC_r_minos_trk_vtx_dcosx, &b_NukeCC_r_minos_trk_vtx_dcosx);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_vtx_dcosy", &NukeCC_r_minos_trk_vtx_dcosy, &b_NukeCC_r_minos_trk_vtx_dcosy);
    fChain->SetBranchAddress("NukeCC_r_minos_trk_vtx_dcosz", &NukeCC_r_minos_trk_vtx_dcosz, &b_NukeCC_r_minos_trk_vtx_dcosz);
    fChain->SetBranchAddress("NukeCC_recoil_E", &NukeCC_recoil_E, &b_NukeCC_recoil_E);
    fChain->SetBranchAddress("NukeCC_recoil_E_wide_window", &NukeCC_recoil_E_wide_window, &b_NukeCC_recoil_E_wide_window);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMinosInitProjPx", &NukeCC_t_minos_trk_primFSLepMinosInitProjPx, &b_NukeCC_t_minos_trk_primFSLepMinosInitProjPx);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMinosInitProjPy", &NukeCC_t_minos_trk_primFSLepMinosInitProjPy, &b_NukeCC_t_minos_trk_primFSLepMinosInitProjPy);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMinosInitProjPz", &NukeCC_t_minos_trk_primFSLepMinosInitProjPz, &b_NukeCC_t_minos_trk_primFSLepMinosInitProjPz);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMinosInitProjX", &NukeCC_t_minos_trk_primFSLepMinosInitProjX, &b_NukeCC_t_minos_trk_primFSLepMinosInitProjX);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMinosInitProjY", &NukeCC_t_minos_trk_primFSLepMinosInitProjY, &b_NukeCC_t_minos_trk_primFSLepMinosInitProjY);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMinosInitProjZ", &NukeCC_t_minos_trk_primFSLepMinosInitProjZ, &b_NukeCC_t_minos_trk_primFSLepMinosInitProjZ);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvFinalPx", &NukeCC_t_minos_trk_primFSLepMnvFinalPx, &b_NukeCC_t_minos_trk_primFSLepMnvFinalPx);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvFinalPy", &NukeCC_t_minos_trk_primFSLepMnvFinalPy, &b_NukeCC_t_minos_trk_primFSLepMnvFinalPy);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvFinalPz", &NukeCC_t_minos_trk_primFSLepMnvFinalPz, &b_NukeCC_t_minos_trk_primFSLepMnvFinalPz);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvFinalX", &NukeCC_t_minos_trk_primFSLepMnvFinalX, &b_NukeCC_t_minos_trk_primFSLepMnvFinalX);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvFinalY", &NukeCC_t_minos_trk_primFSLepMnvFinalY, &b_NukeCC_t_minos_trk_primFSLepMnvFinalY);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvFinalZ", &NukeCC_t_minos_trk_primFSLepMnvFinalZ, &b_NukeCC_t_minos_trk_primFSLepMnvFinalZ);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvInitPx", &NukeCC_t_minos_trk_primFSLepMnvInitPx, &b_NukeCC_t_minos_trk_primFSLepMnvInitPx);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvInitPy", &NukeCC_t_minos_trk_primFSLepMnvInitPy, &b_NukeCC_t_minos_trk_primFSLepMnvInitPy);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvInitPz", &NukeCC_t_minos_trk_primFSLepMnvInitPz, &b_NukeCC_t_minos_trk_primFSLepMnvInitPz);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvInitX", &NukeCC_t_minos_trk_primFSLepMnvInitX, &b_NukeCC_t_minos_trk_primFSLepMnvInitX);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvInitY", &NukeCC_t_minos_trk_primFSLepMnvInitY, &b_NukeCC_t_minos_trk_primFSLepMnvInitY);
    fChain->SetBranchAddress("NukeCC_t_minos_trk_primFSLepMnvInitZ", &NukeCC_t_minos_trk_primFSLepMnvInitZ, &b_NukeCC_t_minos_trk_primFSLepMnvInitZ);
    fChain->SetBranchAddress("NukeCC_target_dist_to_division", &NukeCC_target_dist_to_division, &b_NukeCC_target_dist_to_division);
    fChain->SetBranchAddress("NukeCC_target_zDist", &NukeCC_target_zDist, &b_NukeCC_target_zDist);
    fChain->SetBranchAddress("NukeCC_x_wide_window", &NukeCC_x_wide_window, &b_NukeCC_x_wide_window);
    fChain->SetBranchAddress("NukeCC_y_wide_window", &NukeCC_y_wide_window, &b_NukeCC_y_wide_window);
    fChain->SetBranchAddress("NukeCC_ref_targZ", NukeCC_ref_targZ, &b_NukeCC_ref_targZ);
    fChain->SetBranchAddress("NukeCC_smeared_is_fiducial", NukeCC_smeared_is_fiducial, &b_NukeCC_smeared_is_fiducial);
    fChain->SetBranchAddress("NukeCC_smeared_pass_dist_to_div", NukeCC_smeared_pass_dist_to_div, &b_NukeCC_smeared_pass_dist_to_div);
    fChain->SetBranchAddress("NukeCC_smeared_targetID", NukeCC_smeared_targetID, &b_NukeCC_smeared_targetID);
    fChain->SetBranchAddress("NukeCC_smeared_targetZ", NukeCC_smeared_targetZ, &b_NukeCC_smeared_targetZ);
    fChain->SetBranchAddress("NukeCC_smeared_vtx_mod", NukeCC_smeared_vtx_mod, &b_NukeCC_smeared_vtx_mod);
    fChain->SetBranchAddress("NukeCC_muon_vtx", NukeCC_muon_vtx, &b_NukeCC_muon_vtx);
    fChain->SetBranchAddress("NukeCC_ref_dist_to_division", NukeCC_ref_dist_to_division, &b_NukeCC_ref_dist_to_division);
    fChain->SetBranchAddress("NukeCC_ref_dist_to_target", NukeCC_ref_dist_to_target, &b_NukeCC_ref_dist_to_target);
    fChain->SetBranchAddress("NukeCC_sys_muon_curve_energy_shift", NukeCC_sys_muon_curve_energy_shift, &b_NukeCC_sys_muon_curve_energy_shift);
    fChain->SetBranchAddress("NukeCC_sys_muon_energy_shift", NukeCC_sys_muon_energy_shift, &b_NukeCC_sys_muon_energy_shift);
    fChain->SetBranchAddress("NukeCC_sys_muon_minerva_energy_shift", NukeCC_sys_muon_minerva_energy_shift, &b_NukeCC_sys_muon_minerva_energy_shift);
    fChain->SetBranchAddress("NukeCC_sys_muon_qSquared_shift", NukeCC_sys_muon_qSquared_shift, &b_NukeCC_sys_muon_qSquared_shift);
    fChain->SetBranchAddress("NukeCC_sys_muon_range_energy_shift", NukeCC_sys_muon_range_energy_shift, &b_NukeCC_sys_muon_range_energy_shift);
    fChain->SetBranchAddress("NukeCC_sys_muon_wSquared_shift", NukeCC_sys_muon_wSquared_shift, &b_NukeCC_sys_muon_wSquared_shift);
    fChain->SetBranchAddress("NukeCC_sys_muon_xbj_shift", NukeCC_sys_muon_xbj_shift, &b_NukeCC_sys_muon_xbj_shift);
    fChain->SetBranchAddress("NukeCC_sys_muon_y_shift", NukeCC_sys_muon_y_shift, &b_NukeCC_sys_muon_y_shift);
    fChain->SetBranchAddress("NukeCC_sys_nu_energy_shift", NukeCC_sys_nu_energy_shift, &b_NukeCC_sys_nu_energy_shift);
    fChain->SetBranchAddress("NukeCC_sys_recoil_energy_shift", NukeCC_sys_recoil_energy_shift, &b_NukeCC_sys_recoil_energy_shift);
    fChain->SetBranchAddress("NukeCC_sys_recoil_qSquared_shift", NukeCC_sys_recoil_qSquared_shift, &b_NukeCC_sys_recoil_qSquared_shift);
    fChain->SetBranchAddress("NukeCC_sys_recoil_wSquared_shift", NukeCC_sys_recoil_wSquared_shift, &b_NukeCC_sys_recoil_wSquared_shift);
    fChain->SetBranchAddress("NukeCC_sys_recoil_xbj_shift", NukeCC_sys_recoil_xbj_shift, &b_NukeCC_sys_recoil_xbj_shift);
    fChain->SetBranchAddress("NukeCC_sys_recoil_y_shift", NukeCC_sys_recoil_y_shift, &b_NukeCC_sys_recoil_y_shift);
    fChain->SetBranchAddress("NukeCC_sys_total_qSquared_shift", NukeCC_sys_total_qSquared_shift, &b_NukeCC_sys_total_qSquared_shift);
    fChain->SetBranchAddress("NukeCC_sys_total_wSquared_shift", NukeCC_sys_total_wSquared_shift, &b_NukeCC_sys_total_wSquared_shift);
    fChain->SetBranchAddress("NukeCC_sys_total_xbj_shift", NukeCC_sys_total_xbj_shift, &b_NukeCC_sys_total_xbj_shift);
    fChain->SetBranchAddress("NukeCC_sys_total_y_shift", NukeCC_sys_total_y_shift, &b_NukeCC_sys_total_y_shift);
    fChain->SetBranchAddress("ev_run", &ev_run, &b_ev_run);
    fChain->SetBranchAddress("ev_subrun", &ev_subrun, &b_ev_subrun);
    fChain->SetBranchAddress("ev_detector", &ev_detector, &b_ev_detector);
    fChain->SetBranchAddress("ev_triggerType", &ev_triggerType, &b_ev_triggerType);
    fChain->SetBranchAddress("ev_gate", &ev_gate, &b_ev_gate);
    fChain->SetBranchAddress("ev_global_gate", &ev_global_gate, &b_ev_global_gate);
    fChain->SetBranchAddress("ev_gps_time_sec", &ev_gps_time_sec, &b_ev_gps_time_sec);
    fChain->SetBranchAddress("ev_gps_time_usec", &ev_gps_time_usec, &b_ev_gps_time_usec);
    fChain->SetBranchAddress("mc_run", &mc_run, &b_mc_run);
    fChain->SetBranchAddress("mc_subrun", &mc_subrun, &b_mc_subrun);
    fChain->SetBranchAddress("mc_nInteractions", &mc_nInteractions, &b_mc_nInteractions);
    fChain->SetBranchAddress("mc_MIState", &mc_MIState, &b_mc_MIState);
    fChain->SetBranchAddress("mc_pot", &mc_pot, &b_mc_pot);
    fChain->SetBranchAddress("mc_beamConfig", &mc_beamConfig, &b_mc_beamConfig);
    fChain->SetBranchAddress("mc_processType", &mc_processType, &b_mc_processType);
    fChain->SetBranchAddress("mc_nthEvtInSpill", &mc_nthEvtInSpill, &b_mc_nthEvtInSpill);
    fChain->SetBranchAddress("mc_nthEvtInFile", &mc_nthEvtInFile, &b_mc_nthEvtInFile);
    fChain->SetBranchAddress("mc_intType", &mc_intType, &b_mc_intType);
    fChain->SetBranchAddress("mc_current", &mc_current, &b_mc_current);
    fChain->SetBranchAddress("mc_charm", &mc_charm, &b_mc_charm);
    fChain->SetBranchAddress("mc_weight", &mc_weight, &b_mc_weight);
    fChain->SetBranchAddress("mc_XSec", &mc_XSec, &b_mc_XSec);
    fChain->SetBranchAddress("mc_diffXSec", &mc_diffXSec, &b_mc_diffXSec);
    fChain->SetBranchAddress("mc_incoming", &mc_incoming, &b_mc_incoming);
    fChain->SetBranchAddress("mc_fluxDriverProb", &mc_fluxDriverProb, &b_mc_fluxDriverProb);
    fChain->SetBranchAddress("mc_targetNucleus", &mc_targetNucleus, &b_mc_targetNucleus);
    fChain->SetBranchAddress("mc_targetZ", &mc_targetZ, &b_mc_targetZ);
    fChain->SetBranchAddress("mc_targetA", &mc_targetA, &b_mc_targetA);
    fChain->SetBranchAddress("mc_targetNucleon", &mc_targetNucleon, &b_mc_targetNucleon);
    fChain->SetBranchAddress("mc_struckQuark", &mc_struckQuark, &b_mc_struckQuark);
    fChain->SetBranchAddress("mc_seaQuark", &mc_seaQuark, &b_mc_seaQuark);
    fChain->SetBranchAddress("mc_resID", &mc_resID, &b_mc_resID);
    fChain->SetBranchAddress("mc_primaryLepton", &mc_primaryLepton, &b_mc_primaryLepton);
    fChain->SetBranchAddress("mc_incomingE", &mc_incomingE, &b_mc_incomingE);
    fChain->SetBranchAddress("mc_Bjorkenx", &mc_Bjorkenx, &b_mc_Bjorkenx);
    fChain->SetBranchAddress("mc_Bjorkeny", &mc_Bjorkeny, &b_mc_Bjorkeny);
    fChain->SetBranchAddress("mc_Q2", &mc_Q2, &b_mc_Q2);
    fChain->SetBranchAddress("mc_nuT", &mc_nuT, &b_mc_nuT);
    fChain->SetBranchAddress("mc_w", &mc_w, &b_mc_w);
    fChain->SetBranchAddress("mc_vtx", mc_vtx, &b_mc_vtx);
    fChain->SetBranchAddress("mc_incomingPartVec", mc_incomingPartVec, &b_mc_incomingPartVec);
    fChain->SetBranchAddress("mc_initNucVec", mc_initNucVec, &b_mc_initNucVec);
    fChain->SetBranchAddress("mc_primFSLepton", mc_primFSLepton, &b_mc_primFSLepton);
    fChain->SetBranchAddress("mc_nFSPart", &mc_nFSPart, &b_mc_nFSPart);
    fChain->SetBranchAddress("mc_FSPartPx", mc_FSPartPx, &b_mc_FSPartPx);
    fChain->SetBranchAddress("mc_FSPartPy", mc_FSPartPy, &b_mc_FSPartPy);
    fChain->SetBranchAddress("mc_FSPartPz", mc_FSPartPz, &b_mc_FSPartPz);
    fChain->SetBranchAddress("mc_FSPartE", mc_FSPartE, &b_mc_FSPartE);
    fChain->SetBranchAddress("mc_FSPartPDG", mc_FSPartPDG, &b_mc_FSPartPDG);
    fChain->SetBranchAddress("mc_er_nPart", &mc_er_nPart, &b_mc_er_nPart);
    fChain->SetBranchAddress("mc_er_ID", mc_er_ID, &b_mc_er_ID);
    fChain->SetBranchAddress("mc_er_status", mc_er_status, &b_mc_er_status);
    fChain->SetBranchAddress("mc_er_posInNucX", mc_er_posInNucX, &b_mc_er_posInNucX);
    fChain->SetBranchAddress("mc_er_posInNucY", mc_er_posInNucY, &b_mc_er_posInNucY);
    fChain->SetBranchAddress("mc_er_posInNucZ", mc_er_posInNucZ, &b_mc_er_posInNucZ);
    fChain->SetBranchAddress("mc_er_Px", mc_er_Px, &b_mc_er_Px);
    fChain->SetBranchAddress("mc_er_Py", mc_er_Py, &b_mc_er_Py);
    fChain->SetBranchAddress("mc_er_Pz", mc_er_Pz, &b_mc_er_Pz);
    fChain->SetBranchAddress("mc_er_E", mc_er_E, &b_mc_er_E);
    fChain->SetBranchAddress("mc_er_FD", mc_er_FD, &b_mc_er_FD);
    fChain->SetBranchAddress("mc_er_LD", mc_er_LD, &b_mc_er_LD);
    fChain->SetBranchAddress("mc_er_mother", mc_er_mother, &b_mc_er_mother);
    fChain->SetBranchAddress("mc_fr_nNuAncestorIDs", &mc_fr_nNuAncestorIDs, &b_mc_fr_nNuAncestorIDs);
    fChain->SetBranchAddress("mc_fr_nuAncestorIDs", mc_fr_nuAncestorIDs, &b_mc_fr_nuAncestorIDs);
    fChain->SetBranchAddress("mc_fr_nuParentID", &mc_fr_nuParentID, &b_mc_fr_nuParentID);
    fChain->SetBranchAddress("mc_fr_decMode", &mc_fr_decMode, &b_mc_fr_decMode);
    fChain->SetBranchAddress("mc_fr_primProtonVtx", mc_fr_primProtonVtx, &b_mc_fr_primProtonVtx);
    fChain->SetBranchAddress("mc_fr_primProtonP", mc_fr_primProtonP, &b_mc_fr_primProtonP);
    fChain->SetBranchAddress("mc_fr_nuParentDecVtx", mc_fr_nuParentDecVtx, &b_mc_fr_nuParentDecVtx);
    fChain->SetBranchAddress("mc_fr_nuParentProdVtx", mc_fr_nuParentProdVtx, &b_mc_fr_nuParentProdVtx);
    fChain->SetBranchAddress("mc_fr_nuParentProdP", mc_fr_nuParentProdP, &b_mc_fr_nuParentProdP);
    fChain->SetBranchAddress("mc_cvweight_total", &mc_cvweight_total, &b_mc_cvweight_total);
    fChain->SetBranchAddress("wgt", &wgt, &b_wgt);
    fChain->SetBranchAddress("mc_cvweight_totalFlux", &mc_cvweight_totalFlux, &b_mc_cvweight_totalFlux);
    fChain->SetBranchAddress("mc_cvweight_totalXsec", &mc_cvweight_totalXsec, &b_mc_cvweight_totalXsec);
    fChain->SetBranchAddress("mc_ppfx1_cvweight", &mc_ppfx1_cvweight, &b_mc_ppfx1_cvweight);
    fChain->SetBranchAddress("mc_hornCurrent_cvweight", &mc_hornCurrent_cvweight, &b_mc_hornCurrent_cvweight);
    fChain->SetBranchAddress("mc_gen1_cvweight_total", &mc_gen1_cvweight_total, &b_mc_gen1_cvweight_total);
    fChain->SetBranchAddress("gen1_wgt", &gen1_wgt, &b_gen1_wgt);
    fChain->SetBranchAddress("mc_gen1_cvweight_totalFlux", &mc_gen1_cvweight_totalFlux, &b_mc_gen1_cvweight_totalFlux);
    fChain->SetBranchAddress("mc_gen1_cvweight_NA49", &mc_gen1_cvweight_NA49, &b_mc_gen1_cvweight_NA49);
    fChain->SetBranchAddress("mc_wgt_Flux_BeamFocus_sz", &mc_wgt_Flux_BeamFocus_sz, &b_mc_wgt_Flux_BeamFocus_sz);
    fChain->SetBranchAddress("mc_wgt_Flux_BeamFocus", mc_wgt_Flux_BeamFocus, &b_mc_wgt_Flux_BeamFocus);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_Tertiary_sz", &mc_wgt_gen1_Flux_Tertiary_sz, &b_mc_wgt_gen1_Flux_Tertiary_sz);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_Tertiary", mc_wgt_gen1_Flux_Tertiary, &b_mc_wgt_gen1_Flux_Tertiary);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_NA49_sz", &mc_wgt_gen1_Flux_NA49_sz, &b_mc_wgt_gen1_Flux_NA49_sz);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_NA49", mc_wgt_gen1_Flux_NA49, &b_mc_wgt_gen1_Flux_NA49);
    fChain->SetBranchAddress("mc_wgt_Norm_sz", &mc_wgt_Norm_sz, &b_mc_wgt_Norm_sz);
    fChain->SetBranchAddress("mc_wgt_Norm", &mc_wgt_Norm, &b_mc_wgt_Norm);
    fChain->SetBranchAddress("mc_wgt_ppfx1_Total_sz", &mc_wgt_ppfx1_Total_sz, &b_mc_wgt_ppfx1_Total_sz);
    fChain->SetBranchAddress("mc_wgt_ppfx1_Total", mc_wgt_ppfx1_Total, &b_mc_wgt_ppfx1_Total);
    fChain->SetBranchAddress("mc_vertex_batch", &mc_vertex_batch, &b_mc_vertex_batch);
    fChain->SetBranchAddress("numi_x_pos", &numi_x_pos, &b_numi_x_pos);
    fChain->SetBranchAddress("numi_y_pos", &numi_y_pos, &b_numi_y_pos);
    fChain->SetBranchAddress("batch_structure", &batch_structure, &b_batch_structure);
    fChain->SetBranchAddress("n_prongs", &n_prongs, &b_n_prongs);
    fChain->SetBranchAddress("prong_nParticles", prong_nParticles, &b_prong_nParticles);
    fChain->SetBranchAddress("prong_part_score", prong_part_score, &b_prong_part_score);
    fChain->SetBranchAddress("prong_part_mass", prong_part_mass, &b_prong_part_mass);
    fChain->SetBranchAddress("prong_part_charge", prong_part_charge, &b_prong_part_charge);
    fChain->SetBranchAddress("prong_part_pid", prong_part_pid, &b_prong_part_pid);
    fChain->SetBranchAddress("prong_part_E", &prong_part_E, &b_prong_part_E);
    fChain->SetBranchAddress("prong_part_pos", &prong_part_pos, &b_prong_part_pos);
    Notify();
}

Bool_t RECOTRACKS_ANA::NukeCC::Notify()
{
    // The Notify() function is called when a new file is opened. This
    // can be either for a new TTree in a TChain or when when a new TTree
    // is started when using PROOF. It is normally not necessary to make changes
    // to the generated code, but the routine can be extended by the
    // user if needed. The return value is currently not used.

    return kTRUE;
}

void RECOTRACKS_ANA::NukeCC::Show(Long64_t entry)
{
    // Print contents of entry.
    // If entry is not specified, print current entry
    if (!fChain) return;
    fChain->Show(entry);
}
Int_t RECOTRACKS_ANA::NukeCC::Cut(Long64_t entry)
{
    // This function may be called from Loop.
    // returns  1 if entry is accepted.
    // returns -1 otherwise.
    return 1;
}
#endif // #ifdef NukeCC_cxx

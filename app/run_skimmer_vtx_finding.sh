#!/bin/bash

STARTTIME=`date +%s`

# i > 0 to impose "NukeCC DIS cuts"
# c -> chunk size
# m -> max events considered
# z -> max reco z
# f -> filebasename
# s -> first segment index
# e -> first event number (default is 0)
# d -> is data
# n -> ntuple file list name
# p -> print frequency

SAMPLE="me1Adata"
BASEDIR="/minerva/data/users/perdue/mlmpr/hdf5_direct/201710/${SAMPLE}"
FILEPATH=$BASEDIR/vtxfndingimgs_127x94_${SAMPLE}
INPFILELIST="/minerva/data/users/perdue/RecoTracks/files/nukecc_201710_minerva_${SAMPLE}.txt"

# gdb -tui --args ./skimmer_vtx_finding \
cat << EOF
mkdir -p $BASEDIR
time nice ./skimmer_vtx_finding \
    -f "$FILEPATH" \
    -c 25000 \
    -z 100000000.0 \
    -i 0 \
    -n "$INPFILELIST" \
    -d \
    -s 0 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
mkdir -p $BASEDIR
# gdb -tui --args ./skimmer_vtx_finding \
time nice ./skimmer_vtx_finding \
    -f "$FILEPATH" \
    -c 25000 \
    -z 100000000.0 \
    -i 0 \
    -n "$INPFILELIST" \
    -d \
    -s 0 2>&1 | tee ${STARTTIME}_out_log.txt
    # -s 0 
    # -m 500 \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/ztest_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/ztest_minerva1mc_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/minosmatch_nukecczdefs_fullz_127x94_minerva1mc_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/minosmatch_nukecczdefs_fullz_127x94_me1Amc_" \
    # -c 50 \
    # -e 1149999 \
    # -e 1424999 \
    # -f "minosmatch_127x94_me1Bmc_" \
    # -s 57


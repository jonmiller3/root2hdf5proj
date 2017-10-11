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

# BASEDIR="/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/me1Adata/v1_LMDB"
BASEDIR="/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/test"
FILEPATH=$BASEDIR/minosmatch_nukecczdefs_fullz_tproc_127x94_me1Amc_
INPFILELIST="/minerva/data/users/perdue/RecoTracks/files/nukecc_201710_minervame_smalltest.txt"

# gdb -tui --args ./NukeCCSkimmer_chunked_zsegments \
# gdb --args ./NukeCCSkimmer_chunked_zsegments \
cat << EOF
time nice ./NukeCCSkimmer_chunked_zsegments \
    -f "$FILEPATH" \
    -c 25000 \
    -z 100000000.0 \
    -i 0 \
    -n "$INPFILELIST" \
    -s 0 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
time nice ./NukeCCSkimmer_chunked_zsegments \
    -f "$FILEPATH" \
    -c 25000 \
    -z 100000000.0 \
    -i 0 \
    -n "$INPFILELIST" \
    -s 0 2>&1 | tee ${STARTTIME}_out_log.txt
    # -d \
    # -m 501 \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/ztest_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/ztest_minerva1mc_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/minosmatch_nukecczdefs_fullz_127x94_minerva1mc_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/minosmatch_nukecczdefs_fullz_127x94_me1Amc_" \
    # -c 50 \
    # -e 1149999 \
    # -e 1424999 \
    # -f "minosmatch_127x94_me1Bmc_" \
    # -s 57


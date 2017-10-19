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

BASEDIR="/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/test"
FILEPATH=$BASEDIR/minosmatch_nukecczdefs_fullzwitht_tproc_127x94_me1Amc_
INPFILELIST="/minerva/data/users/perdue/RecoTracks/files/nukecc_201710_minervame_smalltest.txt"

# gdb -tui --args ./TimeLatticeSkimmer_chunked \
# gdb --args ./TimeLatticeSkimmer_chunked \
time nice ./TimeLatticeSkimmer_chunked \
    -f "$FILEPATH" \
    -c 25000 \
    -z 100000000.0 \
    -i 0 \
    -n "$INPFILELIST" \
    -s 0 2>&1 | tee ${STARTTIME}_out_log.txt
    # -d \
    # -e 2674999 \
    # -c 50 \
    # -e 1424999 \
    # -m 500 \
    # -s 57


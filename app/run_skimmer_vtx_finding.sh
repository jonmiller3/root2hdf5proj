#!/bin/bash

STARTTIME=`date +%s`

# i > 0 to impose "NukeCC DIS cuts"
# m -> max events considered
# z -> max reco z
# f -> filebasename
# e -> first event number (default is 0)
# d -> is data
# n -> ntuple file list name
# p -> print frequency


SAMPLE="me1Adata"
PROCESSING="201710"   # Erocia+
PROCESSING="201801"   # NX
BASEDIR="/minerva/data/users/perdue/mlmpr/hdf5_direct/${PROCESSING}/${SAMPLE}"
INPFILELIST="/minerva/data/users/perdue/RecoTracks/files/nukecc_${PROCESSING}_minerva_${SAMPLE}.txt"

FILEPATH=$BASEDIR/vtxfndingimgs_127x94_${SAMPLE}

# gdb -tui --args ./skimmer_vtx_finding \
cat << EOF
mkdir -p $BASEDIR
time nice ./skimmer_vtx_finding \
    -f "$FILEPATH" \
    -z 100000000.0 \
    -i 0 \
    -n "$INPFILELIST" 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
#    -d \
mkdir -p $BASEDIR
# gdb -tui --args ./skimmer_vtx_finding \
time nice ./skimmer_vtx_finding \
    -f "$FILEPATH" \
    -z 100000000.0 \
    -i 0 \
    -m 500 \
    -n "$INPFILELIST" 2>&1 | tee ${STARTTIME}_out_log.txt
    # -d \
    # -m 500 \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/ztest_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/with_t_processing/ztest_minerva1mc_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/minosmatch_nukecczdefs_fullz_127x94_minerva1mc_" \
    # -f "/minerva/data/users/perdue/mlmpr/raw_dat/nukeccskimmer_minosmatch_127x94_nukecczdefs/minosmatch_nukecczdefs_fullz_127x94_me1Amc_" \
    # -e 1149999 \
    # -e 1424999 \
    # -f "minosmatch_127x94_me1Bmc_" \


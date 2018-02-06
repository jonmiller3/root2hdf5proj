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

DATA="data"
DATA="mc"
DATAFLAG="--${DATA}"

FILEBASENAME="hadmultkineimgs"
FILEBASENAME="mnvimgs"

SAMPLE="me1E${DATA}"
PROCESSING="201710"   # Erocia+
PROCESSING="201801"   # NX
BASEDIR="/minerva/data/users/perdue/mlmpr/hdf5_direct/${PROCESSING}/${SAMPLE}"
INPFILELIST="/minerva/data/users/perdue/RecoTracks/files/nukecc_${PROCESSING}_minerva_${SAMPLE}.txt"


WCUTSTRING="-l -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_lowW_cut1000MeV

WCUTSTRING="-h -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_highW_cut1000MeV

WCUTSTRING=""
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}

# gdb -tui --args ./skimmer_root2hdf5 \
cat << EOF
mkdir -p $BASEDIR
time nice ./skimmer_root2hdf5 $WCUTSTRING \
    -f "$FILEPATH" \
    -z 100000000.0 \
    -i 0 \
    $DATAFLAG \
    -n "$INPFILELIST" 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
mkdir -p $BASEDIR
# gdb -tui --args ./skimmer_root2hdf5 \
time nice ./skimmer_root2hdf5 $WCUTSTRING \
    -f "$FILEPATH" \
    -z 100000000.0 \
    -i 0 \
    $DATAFLAG \
    -n "$INPFILELIST" 2>&1 | tee ${STARTTIME}_out_log.txt
    # -m 500 \


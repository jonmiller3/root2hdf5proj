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

DATA="mc"
DATA="data"
DATAFLAG="--${DATA}"

SEGMENTBALANCE="--class_balance"
SEGMENTBALANCE=""

TARGETSBALANCE=""
TARGETSBALANCE="--targets_balance"

FILEBASENAME="mnv"
if [[ $DATA == "mc" ]]; then
    FILEBASENAME="hadmultkineimgs"
else 
    FILEBASENAME="mnvimgs"
fi

SAMPLE="me1G${DATA}"
PROCESSING="201710"   # Erocia+
PROCESSING="201801"   # NX
BASEDIR="/minerva/data/users/perdue/mlmpr/hdf5_direct/${PROCESSING}/${SAMPLE}"
INPFILELIST="/minerva/data/users/perdue/RecoTracks/files/nukecc_${PROCESSING}_minerva_${SAMPLE}.txt"

MAXEVENTS="-m 10000"
MAXEVENTS=""


WCUTSTRING="-l -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_lowW_cut1000MeV

WCUTSTRING="-h -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_highW_cut1000MeV

WCUTSTRING=""
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}

if [[ $SEGMENTBALANCE != "" ]]; then
   FILEPATH=${FILEPATH}"_segments_bal" 
fi

if [[ $TARGETSBALANCE != "" ]]; then
   FILEPATH=${FILEPATH}"_targets_bal" 
fi

ARGS="$WCUTSTRING -f $FILEPATH -z 100000000.0 -i 0 $DATAFLAG $SEGMENTBALANCE $TARGETSBALANCE -n $INPFILELIST $MAXEVENTS"

# gdb -tui --args ./skimmer_root2hdf5 \
cat << EOF
time nice ./skimmer_root2hdf5 $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
mkdir -p $BASEDIR
# gdb -tui --args ./skimmer_root2hdf5 \
time nice ./skimmer_root2hdf5 $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt


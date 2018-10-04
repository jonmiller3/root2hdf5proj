#!/bin/bash

BASE="/pnfs/minerva/persistent/users/jam3/"

SAMPLE="1_NX"
OUTNAME="ccprotonpi0_me1N.txt"
##OUTNAME="nukecc_test_{SAMPLE}.txt"
###MBASE="/pnfs/minerva/persistent/users/wospakrk/NukeTuples/v1_NX/"
MBASE="/pnfs/minerva/persistent/users/jam3/test1N_ppi0/grid/central_value/minerva/ana"
###MBASE="/pnfs/minerva/persistent/users/aghosh12/CCProtonPi0_me1A/grid/central_value/minerva/ana/v21r1p1/00/11/00/09"
tree -fi $MBASE | grep ".root" > $OUTNAME

# me1A nukecc data w/ 127x94 lattice and time lattice
# DATE="29April2017"
# RUNRANGE="minervame1Adata"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# MBASE="/pnfs/minerva/persistent/users/wospakrk/data_minervame1A_29April2017/grid/minerva/ana/numibeam/"
# tree -fi $MBASE/v10r8p9/ | grep ".root" > $OUTNAME
# python randomize_rest_of_file.py $OUTNAME

# me1A nukecc MC w/ 127x94 lattice and time lattice
# DATE="20161027"
# RUNRANGE="minerva1nofsimc"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# tree -fi $BASE/mnv--mc20161026/grid/NoFSI/minerva/ana/v10r8p9/ | grep ".root" > $OUTNAME
# tree -fi $BASE/mnv--mc20161027/grid/NoFSI/minerva/ana/v10r8p9/ | grep ".root" >> $OUTNAME
# python randomize_rest_of_file.py $OUTNAME

# me1A nukecc MC w/ 127x94 lattice and time lattice
# DATE="20161020"
# RUNRANGE="me1Amc"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# tree -fi $BASE/mnv--mc20161014/grid/central_value/minerva/ana/v10r8p9/ | grep ".root" > $OUTNAME
# tree -fi $BASE/mnv--mc20161018/grid/central_value/minerva/ana/v10r8p9/ | grep ".root" >> $OUTNAME
# python randomize_rest_of_file.py $OUTNAME

# minerva13C MC w/ 127x94 lattice and time lattice
# DATE="20160906"
# RUNRANGE="minerva13Bmc"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# tree -fi $BASE/mnv--mc20160825/grid/central_value/minerva/ana/v10r8p9 | grep ".root" > $OUTNAME
# python randomize_rest_of_file.py $OUTNAME

# minerva13C MC w/ 127x94 lattice and time lattice
# DATE="20160825-0829"
# RUNRANGE="minerva13Cmc"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# tree -fi $BASE/mnv--mc20160825/grid/central_value/minerva/ana/v10r8p9 | grep ".root" > $OUTNAME
# tree -fi $BASE/mnv--mc20160826/grid/central_value/minerva/ana/v10r8p9 | grep ".root" >> $OUTNAME
# tree -fi $BASE/mnv--mc20160829/grid/central_value/minerva/ana/v10r8p9 | grep ".root" >> $OUTNAME
# python randomize_rest_of_file.py $OUTNAME

# me1A nukecc data w/ 127x94 lattice and time lattice
# DATE="20160805"
# RUNRANGE="me1Adata"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# tree -fi $BASE/mnv--data20160804/grid/minerva/ana/numibeam/v10r8p9 | grep ".root" > $OUTNAME
# tree -fi $BASE/mnv--data20160805/grid/minerva/ana/numibeam/v10r8p9 | grep ".root" >> $OUTNAME

# me1B nukecc data w/ 127x94 lattice and time lattice
# DATE="20160801"
# RUNRANGE="me1Bdata"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# tree -fi $BASE/mnv--data20160801/grid/minerva/ana/numibeam/v10r8p9 | grep ".root" > $OUTNAME
# tree -fi $BASE/mnv--data20160802/grid/minerva/ana/numibeam/v10r8p9 | grep ".root" >> $OUTNAME

# me1B nukecc mc w/ 127x94 lattice and time lattice
# DATE="20160719"
# RUNRANGE="112205"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# tree -fi $BASE/mnv--mc20160719/grid/central_value/minerva/ana/v10r8p9 | grep ".root" > $OUTNAME
# python randomize_rest_of_file.py $OUTNAME

# # minerva1 nukecc mc w/ 127x94 lattice and time lattice
# DATE="20160715"
# FILESDIR="mnv--mc${DATE}"
# SOFTVER="v10r8p9"
# RUNRANGE="10200"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# GRID="nogrid"
# ls -1 $BASE/$FILESDIR/${GRID}/central_value/minerva/ana/${SOFTVER}/00/01/02/00/* > $OUTNAME
# python randomize_rest_of_file.py $OUTNAME

# minerva1 nukecc mc w/ 127x94 lattice
# DATE="20160701"
# FILESDIR="mnv--mc${DATE}"
# SOFTVER="v10r8p9"
# RUNRANGE="10200-10249"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# GRID="grid"
# ls -1 $BASE/$FILESDIR/${GRID}/central_value/minerva/ana/${SOFTVER}/00/01/02/00/* > $OUTNAME
# for i in {2..49}
# do
#     directory=`echo $i | perl -lne 'printf "%02d", $_;'`
#     ls -1 $BASE/$FILESDIR/${GRID}/central_value/minerva/ana/${SOFTVER}/00/01/02/${directory}/* >> $OUTNAME
# done
# python randomize_rest_of_file.py $OUTNAME

# me1A nukecc mc w/ 127x94 lattice
# DATE="20160406"
# FILESDIR="mc_ana_minervame1A_${DATE}"
# SOFTVER="v10r8p8"
# RUNRANGE="117200"
# RUNRANGE="117200-117209"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/00/* > $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/01/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/02/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/03/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/04/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/05/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/06/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/07/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/08/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR/grid/central_value/minerva/ana/${SOFTVER}/00/11/72/09/* >> $OUTNAME

# me1B nukecc mc w/ 50x50 lattice 
# OUTNAME="nukecc_20160228_112200-05.txt"

# me1B nukecc mc w/ 127x94 lattice 
# DATE1="20160320"
# FILESDIR1="mc_ana_minervame1B_${DATE1}"
# SOFTVER="v10r8p8"
# DATE2="20160321"
# FILESDIR2="mc_ana_minervame1B_${DATE2}"
# OUTNAME="nukecc_${DATE1}-${DATE2}_112200_127x94.txt"
# ls -1 $BASE/$FILESDIR1/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/00/* > $OUTNAME
# ls -1 $BASE/$FILESDIR1/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/01/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR1/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/02/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR1/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/03/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR1/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/04/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR1/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/05/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR2/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/00/* >> $OUTNAME
# ls -1 $BASE/$FILESDIR2/grid/central_value/minerva/ana/${SOFTVER}/00/11/22/01/* >> $OUTNAME
# #


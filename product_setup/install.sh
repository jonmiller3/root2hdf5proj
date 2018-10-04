#!/bin/bash

products='
build_base-v6_3_0
hep_hpc_toolkit-v00_05_00
'

for prod in $products
do
    bash pullProducts `pwd` slf6 $prod e14 prof
done

chmod +x `pwd`/setup
source `pwd`/setup
setup gcc v6_3_0
setup cmake v3_7_1
setup gdb v7_12
setup valgrind v3_12_0
setup git v2_11_0
setup gitflow v1_10_2
setup python v2_7_13d
setup pybind11 v2_1_1
setup lapack v3_7_0 -q e14:prof
setup nose v1_3_7c -q p2713d
setup six v1_10_0d -q p2713d
setup numpy v1_12_1 -q e14:prof:p2713d
setup catch v1_9_6
setup hdf5 v1_10_1a -q e14
setup h5py v2_7_0b -q e14:prof:p2713d
setup hep_hpc v0_05_00 -q e14:prof
setup hep_hpc_toolkit v00_05_00 -q e14:prof


packages='
root-v6_10_04d
xrootd-v4_5_0c
tbb-v2017_7
'

for pack in $packages
do
    bash pullPackage `pwd` slf6 $pack e14 prof
done

setup root v6_10_04d -q e14:prof
setup xrootd v4_5_0c -q e14:prof
packages='
fftw-v3_3_6_pl2
libxml2-v2_9_4b
'

for pack in $packages
do
    bash pullPackage `pwd` slf6 $pack prof
done

bash pullPackage `pwd` slf6 protobuf-v3_3_1 e14
bash pullPackage `pwd` slf6 tensorflow-v1_3_0a e14-p2713d prof

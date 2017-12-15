Note: these instructions are not "durable" in the sense that a lof of the
package version numbers referenced are for SLF6 in the Autumn of 2017. But
the principles should be invariant, etc. 

## Software configuration

We are using the SciSoft 'HEP HPC toolkit' to interface to HDF5. To build this
code we first need to set up a UPS products area.

* Go to SciSoft: https://scisoft.fnal.gov
* Get the HEP HPC Toolkit
    * click on newest (was `v00_05_00`)
    * click on html
    * download the linked `pullProducts` script
    * move it to your products 'base' directory, e.g. `/path/hep_hpc_products`
    * go there and pull the software. 

```
bash pullProducts `pwd` slf6 hep_hpc_toolkit-v00_05_00 e14 prof
```

* Go up one level and setup:

```
source hep_hpc_products/setup
ups list -aK+                  # to see what's available
setup hep_hpc v0_05_00 -q e14:prof
ups active
```

* We will additionally need [ROOT](https://root.cern.ch) (6) for this project
along with some dependencies.
    * SciSoft, click on (header) 'Package List', wait..., get, e.g.
    * https://scisoft.fnal.gov/scisoft/packages/root/v6_10_04d/
    * Can get 'distribution tools' `pullPackage`, or grab ROOT directly, copy,
    and unroll in `hep_hpc_products`.
    * For a manual copy, unzip and untar, e.g.

```
bzip2 -d root-6.10.04d-slf6-x86_64-e14-prof.tar.bz2
tar -xvf root-6.10.04d-slf6-x86_64-e14-prof.tar
```

* ROOT needs additional packages. Follow the same procedure used to get
ROOT to get:
    * fftw-3.3.6.pl2-slf6-x86_64-prof.tar.bz2
    * xrootd-4.5.0c-slf6-x86_64-e14-prof.tar.bz2
    * libxml2-2.9.4b-slf6-x86_64-prof.tar.bz2
    * tbb-2017.7-slf6-x86_64-e14-prof.tar.bz2
    * protobuf-3.3.1-slf6-x86_64-e14.tar.bz2
    * tensorflow-1.3.0a-slf6-x86_64-e14-p2713d-prof.tar.bz2
* copy to your products area, unpack, etc.
* we should have:

```
$ . hep_hpc_products/setup
$ ups list -aK+
"catch" "v1_9_6" "NULL" "" ""
"cmake" "v3_7_1" "Linux64bit+2.6-2.12" "" ""
"fftw" "v3_3_6_pl2" "Linux64bit+2.6-2.12" "prof" ""
"gcc" "v6_3_0" "Linux64bit+2.6-2.12" "" ""
"h5py" "v2_7_0b" "Linux64bit+2.6-2.12" "e14:p2713d:prof" ""
"hdf5" "v1_10_1a" "Linux64bit+2.6-2.12" "e14" ""
"hep_hpc" "v0_05_00" "Linux64bit+2.6-2.12" "e14:prof" ""
"hep_hpc_toolkit" "v00_05_00" "Linux64bit+2.6-2.12" "e14:prof" ""
"lapack" "v3_7_0" "Linux64bit+2.6-2.12" "e14:prof" ""
"libxml2" "v2_9_4b" "Linux64bit+2.6-2.12" "prof" ""
"nose" "v1_3_7c" "NULL" "p2713d" ""
"numpy" "v1_12_1" "Linux64bit+2.6-2.12" "e14:p2713d:prof" ""
"protobuf" "v3_3_1" "Linux64bit+2.6-2.12" "e14" ""
"pybind11" "v2_1_1" "NULL" "" ""
"python" "v2_7_13d" "Linux64bit+2.6-2.12" "" ""
"root" "v6_10_04d" "Linux64bit+2.6-2.12" "e14:prof" ""
"six" "v1_10_0d" "NULL" "p2713d" ""
"sqlite" "v3_16_02_00a" "Linux64bit+2.6-2.12" "" ""
"tbb" "v2017_7" "Linux64bit+2.6-2.12" "e14:prof" ""
"tensorflow" "v1_3_0a" "Linux64bit+2.6-2.12" "e14:p2713d:prof" ""
"ups" "v5_2_0" "Linux64bit+2.6-2.12" "" "current"
"xrootd" "v4_5_0c" "Linux64bit+2.6-2.12" "e14:prof" ""
```

Note: `gzstream` is external code (see it's README and docs) copied here for
convenience.

## Scripts for setup

An alternative way to configure the software is to use the provided setup
scripts. Copy the contents of your products area, e.g.

    cp product_setup/* /path/to/products/area

Then run the install script.

    bash install.sh | tee log_install.txt

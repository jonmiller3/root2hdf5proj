#ifndef NTUPLE_TYPES_HH
#define NTUPLE_TYPES_HH

#include "hep_hpc/hdf5/Ntuple.hpp"

// start with eventid, segment, planecode, float-z
using vertex_nt_t =
  hep_hpc::hdf5::Ntuple<unsigned int, unsigned int, unsigned int, double>;

#endif

#include <iostream>
#include <string>

#include "hep_hpc/hdf5/File.hpp"
#include "NtupleTypes.h"

using namespace hep_hpc::hdf5;

int main( int argc, char *argv[]) try {

    File hdffile("demo.h5", H5F_ACC_TRUNC);
    vertex_nt_t vertices(
            hdffile, "vertices", { "eventid", "segment", "planecode", "zs" });

    vertices.insert(100, 1, 5, 100.0);

    return 0;

} catch (std::exception const& ex) {
    std::cerr << ex.what() << '\n';
    return 1;
} catch (...) {
    std::cerr << "Unidentifiable exception caught\n";
    return 1;
}

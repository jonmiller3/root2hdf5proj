#include <iostream>
#include <string>

#include "TRandom3.h"
#include "hep_hpc/hdf5/File.hpp"
#include "hep_hpc/hdf5/make_column.hpp"
#include "hep_hpc/hdf5/make_ntuple.hpp"
#include "NtupleTypes.h"

using namespace hep_hpc::hdf5;

void fill_arr_img(std::array<std::array<std::array<float, 2>, 5>, 4>& xs) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 4; ++k) {
                // xs[i][j][k] = gRandom->Gaus(0.0, 1.0);
                xs[i][j][k] = i * 100.0 + float(j + k);
                std::cout << i << " " << j << " " << k << " = " << xs[i][j][k] << std::endl;
            }
        }
    }
}

void rearrange_arr(const std::array<std::array<std::array<float, 2>, 5>, 4>& xs, std::array<float, 40>& ys) {
   int indx = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 4; ++k) {
                ys[indx] = xs[i][j][k];
                std::cout << i << " " << j << " " << k << " = " << indx << " -> " << xs[i][j][k] << " = " << ys[indx] << std::endl;
                // std::cout << i << " " << j << " " << k << " " << indx << std::endl;
                // std::cout << xs[i][j][k] << std::endl;
                indx += 1;
            }
        }   
    }
    std::cout << indx << std::endl;
}

int main( int argc, char *argv[]) try {

    File hdffile("demo.h5", H5F_ACC_TRUNC);

    gRandom = new TRandom3();
    unsigned long int evtids[] = {100, 101, 102};
    unsigned char segs[] = {1, 2, 3};
    unsigned short int pcodes[] = {9, 18, 27};
    float zs[] = {4000.0, 4400.0, 4800.0};
    std::array<std::array<std::array<float, 2>, 5>, 4> xs = {0.};
    std::array<float, 40> ys = {0.};

    eventdat_nt_t eventdat(hdffile, "event_data", {"eventids", "segments", "planecodes", "zs"});
    imgdat_nt_t imgdat(hdffile, "img_data", {
            {"hitimes-x", {2, 5, 4}}
            });
    // auto arr2dat = make_ntuple({hdffile, "arr2_data"}, make_column<float, 2>("arrdat", {2, 2}));
    for (int ev = 0; ev < 3; ++ev) {
        eventdat.insert(evtids[ev], segs[ev], pcodes[ev], zs[ev]);
        fill_arr_img(xs);
        rearrange_arr(xs, ys);
        imgdat.insert(ys.data());
    }

    return 0;

} catch (std::exception const& ex) {
    std::cerr << ex.what() << '\n';
    return 1;
} catch (...) {
    std::cerr << "Unidentifiable exception caught\n";
    return 1;
}

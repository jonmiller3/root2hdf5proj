CXX = g++
CXXFLAGS = -g -Wall -fPIC
ROOTFLAGS = `root-config --cflags --glibs`
IDIR = ../include
LDIR = ../lib
INCLUDE += -I$(IDIR) -I../gzstream -I$(HEP_HPC_INC) -I$(HDF5_INC)
LDLIBS += -L$(HDF5_LIB) -lhdf5
LDLIBS += -L$(HEP_HPC_LIB) -lhep_hpc_hdf5
LDLIBS += -L$(LDIR) -lRecoTracks
LDLIBS += -L../gzstream -lgzstream -lz 

LDFLAGS += -shared -Wl,-soname

BINARIES   = NukeCCSkimmer_chunked_zsegments \
			 TimeLatticeSkimmer_chunked \
			 hdf5_test \
			 skimmer_vtx_finding
TARGETS    = NukeCCSkimmer_chunked_zsegments.o \
			 TimeLatticeSkimmer_chunked.o \
			 hdf5_test.o \
			 skimmer_vtx_finding.o

all: $(BINARIES) 

debug: CXXFLAGS += -DDEBUG
debug: all

%.o: %.cxx
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) -c $< -o $@ #compile

NukeCCSkimmer_chunked_zsegments: NukeCCSkimmer_chunked_zsegments.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(LDLIBS_CAFFE) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

TimeLatticeSkimmer_chunked: TimeLatticeSkimmer_chunked.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

hdf5_test: hdf5_test.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

skimmer_vtx_finding: skimmer_vtx_finding.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

clean:
	rm -f $(BINARIES) $(TARGETS)


CXX = g++
CXXFLAGS = -g -Wall -fPIC
ROOTFLAGS = `root-config --cflags --glibs`
IDIR = ../include
LDIR = ../lib
INCLUDE += -I$(IDIR) -I../gzstream 
LDLIBS += -L$(LDIR) -lRecoTracks
LDLIBS += -L../gzstream -lgzstream -lz 

LDFLAGS += -shared -Wl,-soname

BINARIES   = NukeCCSkimmer_chunked_zsegments \
			 TimeLatticeSkimmer_chunked
TARGETS    = NukeCCSkimmer_chunked_zsegments.o \
			 TimeLatticeSkimmer_chunked.o

all: $(BINARIES) 

debug: CXXFLAGS += -DDEBUG
debug: all

%.o: %.cxx
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) -c $< -o $@ #compile

NukeCCSkimmer_chunked_zsegments: NukeCCSkimmer_chunked_zsegments.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(LDLIBS_CAFFE) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

TimeLatticeSkimmer_chunked: TimeLatticeSkimmer_chunked.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

clean:
	rm -f $(BINARIES) $(TARGETS)


# ============================================================================
# gzstream, C++ iostream classes wrapping the zlib compression library.
# Copyright (C) 2001  Deepak Bandyopadhyay, Lutz Kettner
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
# 
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
# ============================================================================
# 
# File          : Makefile
# Revision      : $Revision: 1.2 $
# Revision_date : $Date: 2016/06/01 21:54:03 $
# Author(s)     : Deepak Bandyopadhyay, Lutz Kettner
# 
# ============================================================================

# ----------------------------------------------------------------------------
# adapt these settings to your need:
# add '-DGZSTREAM_NAMESPACE=name' to CPPFLAGS to place the classes
# in its own namespace. Note, this macro needs to be set while creating
# the library as well while compiling applications based on it.
# As an alternative, gzstream.C and gzstream.h can be edited.
# ----------------------------------------------------------------------------

# CXX      = CC -n32 -LANG:std   # for SGI Irix 6.5, MIPSpro CC version 7.30
CXX      = g++   # for Linux RedHat 6.1, g++ version 2.95.2

CPPFLAGS = -I. -O
CPPFLAGS += -Wall -fPIC
LDLIBS   = -L. -lgzstream -lz
AR       = ar cr

# ----------------------------------------------------------------------------
# plain simple rules to make and cleanup the library:
# make default;   compiles the library
# make test;      compiles and executes test. O.K. message marks success.
# make clean;     removes temporary files
# make cleanall;  removes temporary files, the library, and programs
# ----------------------------------------------------------------------------

default: libgzstream.so

test:    test_gzip test_gunzip
	./test_gzip COPYING.LIB gz.tmp.gz
	gunzip gz.tmp.gz
	diff COPYING.LIB gz.tmp
	gzip gz.tmp
	./test_gunzip gz.tmp.gz gz.tmp
	diff COPYING.LIB gz.tmp
	rm gz.tmp.gz gz.tmp
	# *** O.K. Test finished successfully. ***

gzstream.o : gzstream.C gzstream.h
	${CXX} ${CPPFLAGS} -c -o gzstream.o gzstream.C

test_gzip.o : test_gzip.C gzstream.h
	${CXX} ${CPPFLAGS} -c -o test_gzip.o test_gzip.C

test_gunzip.o : test_gunzip.C gzstream.h
	${CXX} ${CPPFLAGS} -c -o test_gunzip.o test_gunzip.C

# libgzstream.a : gzstream.o
# 	${AR} libgzstream.a gzstream.o

libgzstream.so: gzstream.o
	$(CXX) -shared -Wl,-soname,libgzstream.so -o libgzstream.so gzstream.o -lz
	if [ ! -d ../lib ]; then mkdir ../lib; fi
	ln -sf ../gzstream/libgzstream.so ../lib/libgzstream.so

test_gzip : test_gzip.o libgzstream.so
	${CXX} -o test_gzip test_gzip.o ${LDLIBS}

test_gunzip : test_gunzip.o libgzstream.so
	${CXX} -o test_gunzip test_gunzip.o ${LDLIBS}

clean :
	rm -f *.o

cleanall :
	rm -f *.o libgzstream.* test_gzip test_gunzip
	rm -f ../lib/libgzstream.so

# ============================================================================
# EOF


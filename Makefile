all:
	make -C gzstream
	make -C src
	make -C app

clean:
	make -C gzstream cleanall
	make -C src clean
	make -C app clean

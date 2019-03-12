TARGET = lx-dummy
LIBS = lx

all: lx.ixf

lx.ixf: bin
	@cd bin && ln -s $(CURDIR)/bin/lx.lib.so lx.ixf

bin:
	@if [ ! -d $@ ]; then \
	    mkdir -p $@; \
	fi

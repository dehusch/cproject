# Unix/Linux Makefile
# This file has not been tested extensively, but it is hoped that it will be useful.
# It may need to be modified for non-Debian-based distributions.
# It has not been tested with non-GNU make.

# get correct include and link flags for Allegro
CFLAGS := $(shell allegro-config --cflags)
LDFLAGS := $(shell allegro-config --libs)

# enable debug symbols (generally a good idea)
CFLAGS += -g

# all programs we use
PROGRAMS  = figE_01 figE_03 figE_05 figE_07 figE_09
PROGRAMS += figE_10 figE_12 figE_13 figE_14 figE_21

# these are not real files, just fake targets to make some operations easier
.PHONY : all clean

# all target to build all programs, in 'target : dependencies' format
all : $(PROGRAMS)

# rule for building each program
# % is a wildcard, $@ means target, $< means first dependency
fig% : fig%.c
	gcc -o $@ $< $(LDFLAGS) $(CFLAGS)

# special dependency for this file
figE_21 : pong.h

# remove compiled programs
clean :
	rm -f $(PROGRAMS)

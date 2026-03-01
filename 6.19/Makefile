# Makefile for kerneluapi
# Copyright (C) 2026 drangon <drangon_zhou@hotmail.com>

SRCS = $(wildcard *.cpp)
TARGETS = $(foreach src, $(SRCS), $(basename $(src)).exe )

CXX = g++
CFLAGS = -O2 -g -Wall -pipe

.PHONY : all clean

all : $(TARGETS)

$(TARGETS) : %.exe : %.cpp
	$(CXX) $(CFLAGS) -o $@ $<

clean :
	rm -f $(TARGETS)


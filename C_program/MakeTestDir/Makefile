# Makefile
# CSample.h → CSample.cpp → makeTest.cpp
.PHONY: all

all: makeTest

makeTest: makeTest.o
	g++-3 -o makeTest makeTest.o

makeTest.o: makeTest.cpp CSample.o
	g++-3 -c makeTest.cpp

CSample.o: CSample.cpp
	g++-3 -c CSample.cpp

CSample.o: CSample.h

# cleanコマンド
.PHONY: clean
clean:
	rm -f makeTest makeTest.o CSample.o

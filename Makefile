CC = g++
CFLAGS = -Wall -Werror -std=c++11

OBJ = $(CC) -c $< -o $@ $(CFLAGS)
MKDIR_BUILD_SRC = mkdir -p build/src
MKDIR_BUILD_TEST = mkdir -p build/test

.PHONY: clean test

default: bin/prog

test: bin/test
	$<

bin/test: build/test/main.o build/src/Nachalo.o build/src/Vvod.o 
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@

build/test/main.o: test/main.c thirdparty/ctest.h
	$(MKDIR_BUILD_TEST) 
	$(OBJ) -I thirdparty -I src

bin/prog: build/src/Nachalo.o build/src/Vvod.o build/src/main.o
	mkdir -p bin
	$(CC) $(CFLAGS) $^ -o $@
 
build/src/Nachalo.o: src/Nachalo.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/Vvod.o: src/Vvod.c src/Vvod.h
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/src/main.o: src/main.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

 
clean:

	rm -rf bin build


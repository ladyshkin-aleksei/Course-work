CC = g++
CFLAGS = -Wall -Werror -std=c++11

OBJ = $(CC) -c $< -o $@ $(CFLAGS)

.PHONY: clean test

default: bin/prog

tests: bin/prog_tests
	$<

bin/prog_tests: build/tests/Nachalo.o build/tests/Vvod.o build/tests/main_tests.o
	$(CC) $(CFLAGS) $^ -o $@

build/tests/main_tests.o: tests/main.c thirdparty/ctest.h src/Nachalo.h src/Vvod.h
	$(OBJ) -I thirdparty -I src

bin/prog: build/src/Nachalo.o build/src/Vvod.o build/src/main.o
	$(CC) $(CFLAGS) $^ -o $@
 
build/src/Nachalo.o: src/Nachalo.c src/Nachalo.h
	$(OBJ)

build/src/Vvod.o: src/Vvod.c src/Vvod.h
	$(OBJ)

build/src/main.o: src/main.c
	$(OBJ)

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

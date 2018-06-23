CC = g++
CFLAGS = -Wall -Werror -std=c++11

OBJ = $(CC) -c $< -o $@ $(CFLAGS)

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: build/Nachalo.o build/Vvod.o build/main.o
	$(CC) $(CFLAGS) $^ -o $@
 
build/Nachalo.o: src/Nachalo.c src/Nachalo.h
	$(OBJ)

build/Vvod.o: src/Vvod.c
	$(OBJ)

build/main.o: src/main.c
	$(OBJ)

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

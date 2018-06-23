CC = g++
CFLAGS = -Wall -Werror -std=c++11

OBJ = $(CC) -c $< -o $@ $(CFLAGS)

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: build/Main.o
	$(CC) $(CFLAGS) $^ -o $@

build/Main.o: src/Main.c
	$(OBJ)

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

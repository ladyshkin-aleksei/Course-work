CC = g++
CFLAGS = -Wall -Werror -std=c++11
MKDIR_BUILD_SRC = mkdir -p build/src

OBJ = $(CC) -c $< -o $@ $(CFLAGS)

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: build/Nachalo.o build/Vvod.o build/main.o
	$(CC) $(CFLAGS) $^ -o $@
 
build/Nachalo.o: src/Nachalo.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build/Vvod.o: src/Vvod.c
	$(MKDIR_BUILD_SRC) 
	$(OBJ)

build/main.o: src/main.c
	$(MKDIR_BUILD_SRC)
	$(OBJ)

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

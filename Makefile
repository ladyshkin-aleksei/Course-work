CC = gcc
CFLAGS = -Wall -Werror -std=c99

OBJ = $(CC) -c $< -o $@ $(CFLAGS)

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog:build/main.o build/Nachalo.o build/Vvod_bukv.o 
	$(CC) $(CFLAGS) $^ -o $@
 
build/main.o: src/main.c
	$(OBJ)

build/Nachalo.o: src/Nachalo.c
	$(OBJ)

build/Vvod_bukv.o: src/Vvod.c
	$(OBJ)


build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

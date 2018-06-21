CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -c $< -o $@ $(CFLAGS)

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: build/Nachalo.o build/Vvod_bukv.o build/main.o
	gcc $^ -o $@ $(CFLAGS) 

build/Nachalo.o: src/main.c
	$(OBJ)

build/Vvod_bukv.o: src/main.c
	$(OBJ)

build/main.o: src/main.c
	$(OBJ)
build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

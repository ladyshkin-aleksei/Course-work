CFLAGS = -Wall -Werror -std=c99
OBJ = g++ -c $< -o $@ $(CFLAGS)

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog:build/main.o build/Nachalo.o build/Vvod_bukv.o 
	gcc $^ -o $@ $(CFLAGS)
 
build/main.o: src/main.cpp
	$(OBJ)

build/Nachalo.o: src/Nachalo
	$(OBJ)

build/Vvod_bukv.o: src/Vvod_bukv
	$(OBJ)


build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

CXX = gcc
CFLAGS = -c -std=c++11 
FLAGS =  -lsfml-graphics -lsfml-window -lsfml-system 

OBJECTS = build/main.o

.PHONY: clean all bin build  bin/prog

all: bin build  bin/prog

bin/prog: $(OBJECTS) 
	$(CXX) $(OBJECTS) -o bin/prog $(FLAGS) 

build/main.o: src/main.c 
	$(CXX) $(CFLAGS) src/main.c -o build/main.o 

build:
	mkdir  build
bin:
	mkdir -p bin 
clean:
	-rm -rf build bin/prog

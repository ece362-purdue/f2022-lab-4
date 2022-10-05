CFLAGS=-O0 -g

all: lab4.o autograder.o
	g++ $(CFLAGS) autograder.o lab4.o -o lab4

lab4.o: lab4.cc
	g++ $(CFLAGS) -c lab4.cc -o lab4.o

clean:
	rm lab4.*

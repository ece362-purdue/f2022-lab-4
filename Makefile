CFLAGS=-O0 -g

all: lab4.o autograder.x86_64.o
	g++ $(CFLAGS) autograder.x86_64.o lab4.o -o lab4

lab4.o: lab4.cc
	g++ $(CFLAGS) -c lab4.cc -o lab4.o

clean:
	rm -f lab4.o lab4

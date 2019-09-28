# -*- MakeFile -*-

all: main

main: main.o ll.o node.o stack.o
	g++ main.o ll.o node.o stack.o -o main

main.o: main.cpp ll.h
	g++ -c main.cpp

ll.o: ll.cpp ll.h
	g++ -c ll.cpp

stack.o: stack.cpp stack.h
	g++ -c stack.cpp

node.o:  node.cpp node.h
	g++ -c node.cpp

clean:
	rm -f *.o
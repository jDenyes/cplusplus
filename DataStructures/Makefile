CC = g++
CFLAGS = -I.
DEPS = arrStack.h ll.h node.h stack.h
OBJ = main.o arrayStack.o ll.o node.o stack.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *.exe
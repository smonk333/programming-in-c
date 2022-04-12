CC=gcc
CFLAGS=-I.
DEPS = defs.h
OBJ = *.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lab12: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
	rm -f *.exe

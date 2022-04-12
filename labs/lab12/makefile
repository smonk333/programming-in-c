CC=gcc
CFLAGS=-I.
DEPS = defs.h
OBJ = arrayProcessing.c lab12.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lab12: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
	rm -f *.exe

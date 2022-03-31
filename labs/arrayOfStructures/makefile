CC=gcc
CFLAGS=-I.
DEPS = houses.h
OBJ = houses.o print_bedrooms.o print_header.o print_houses.o print_lot.o print_one_house.o print_price.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

houses: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o
	rm -f houses.exe
CC = gcc
CFLAGS = -Wall

TARGETS = prog1 prog2

all: $(TARGETS)

prog1: tong1.o
	$(CC) $(CFLAGS) tong1.o -o prog1

prog2: tong2.o
	$(CC) $(CFLAGS) tong2.o -o prog2

tong1.o: tong1.c
	$(CC) $(CFLAGS) -c tong1.c

tong2.o: tong2.c
	$(CC) $(CFLAGS) -c tong2.c

run1: prog1
	./prog1

run2: prog2
	./prog2

clean:
	rm -f *.o $(TARGETS)

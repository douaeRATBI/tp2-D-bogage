CC=gcc
CFLAGS=-Wall -Wextra -std=c99

all: main

main: main.o ppm.o
	$(CC) $(CFLAGS) -o main main.o ppm.o

main.o: main.c ppm.h
	$(CC) $(CFLAGS) -c main.c

ppm.o: ppm.c ppm.h
	$(CC) $(CFLAGS) -c ppm.c

clean:
	rm -f main *.o

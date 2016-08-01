CC=gcc
CFLAGS=-Wall -Werror -g

all: bubble

bubble: bubble.o
	$(CC) -o bubble bubble.o

bubble.o: bubble.c
	$(CC) -c $(CFLAGS) bubble.c

clean:
	rm -f bubble bubble.o

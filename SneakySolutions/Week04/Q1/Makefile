# Steven Strijakov's Fun Quizzes for Fun
# Week04

CC=gcc
CFLAGS=-Wall -Werror -gdwarf-2 -lm

all: bin_sum

bin_sum: BinSum.o main.o
	$(CC) $(CFLAGS) -o bin_sum BinSum.o main.o

BinSum.o: BinSum.c BinSum.h
	$(CC) -c $(CFLAGS) BinSum.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm -f BinSum.o main.o solution

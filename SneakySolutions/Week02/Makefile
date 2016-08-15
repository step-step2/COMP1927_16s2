# Steven Strijakov's Fun Quizzes for Fun
# Week02

CC=gcc
CFLAGS=-Wall -Werror -g

all: solution

solution: Balanced.o main.o
	$(CC) -o solution Balanced.o main.o

Balanced.o: Balanced.c Balanced.h
	$(CC) -c $(CFLAGS) Balanced.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm -f Balanced.o main.o solution

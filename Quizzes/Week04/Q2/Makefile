# Steven Strijakov's Fun Quizzes for Fun
# Week04

CC=gcc
CFLAGS=-Wall -Werror -g

all: quack

quack: Quack.o Stack.o main.o
	$(CC) -o quack Quack.o Stack.o main.o

Quack.o: Quack.c Quack.h Stack.o
	$(CC) -c $(CFLAGS) Quack.c

Stack.o: Stack.c Stack.h
	$(CC) -c $(CFLAGS) Stack.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm -f Quack.o Stack.o main.o quack

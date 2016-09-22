# Steven Strijakov's Fun Quizzes for Fun
# Week04

CC=gcc
CFLAGS=-Wall -Werror -g -gdwarf-2
EXE=tester

all: tester

tester: Queue.o Graph.o main.o Map.o
	$(CC) -o $(EXE) Queue.o Graph.o main.o

Graph.o: Graph.c Graph.h
	$(CC) -c $(CFLAGS) Graph.c Queue.o



Queue.o: Queue.c Queue.h
	$(CC) -c $(CFLAGS) Queue.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm -f Queue.o Graph.o main.o $(EXE)

# Steven Strijakov's Fun Quizzes for Fun
# Week08

CC=gcc
CFLAGS=-Wall -Werror -g -gdwarf-2
EXE=tester

all: $(EXE)

tester: Queue.o Q1.o main.o
	$(CC) -o $(EXE) Q1.o Queue.o main.o

Q1.o: Q1.c Queue.c Q1.h
	$(CC) -c $(CFLAGS) Q1.c Queue.c

Queue.o: Queue.c Queue.h
	$(CC) -c $(CFLAGS) Queue.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm -f Queue.o Queue.o main.o $(EXE)

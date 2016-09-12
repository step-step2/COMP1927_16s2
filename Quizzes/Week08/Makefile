# Steven Strijakov's Fun Quizzes for Fun
# Week08

CC=gcc
CFLAGS=-Wall -Werror -g -gdwarf-2
EXE=tester

all: $(EXE)

tester: Stack.o Q1.o main.o
	$(CC) -o $(EXE) Q1.o Stack.o main.o

Q1.o: Q1.c Stack.c Q1.h
	$(CC) -c $(CFLAGS) Q1.c Stack.c

Stack.o: Stack.c Stack.h
	$(CC) -c $(CFLAGS) Stack.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm -f Queue.o Stack.o main.o $(EXE)

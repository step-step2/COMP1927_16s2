# Steven Strijakov's Fun Quizzes for Fun
# Week02

CC=gcc
CFLAGS=-Wall -Werror -g

all: listTest

listTest: List.o main.o
	$(CC) -o listTest List.o main.o

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

List.o: List.c List.h
	$(CC) -c $(CFLAGS) List.c

clean:
	rm -f Balanced.o main.o solution

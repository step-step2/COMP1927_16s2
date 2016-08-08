CC=gcc
CFLAGS=-Wall -Werror -g
SOURCES=sorts.c helper.c bubble.c insertion.c selection.c merge.c quick.c shell.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=sorts

all: $(EXECUTABLE)

sorts: $(OBJECTS)
	$(CC) -o sorts $(OBJECTS)

sorts.o: sorts.c
	$(CC) -c $(CFLAGS) sorts.c

helper.o: helper.c
	$(CC) -c $(CFLAGS) helper.c

bubble.o: bubble.c
	$(CC) -c $(CFLAGS) bubble.c

insertion.o: insertion.c
	$(CC) -c $(CFLAGS) insertion.c

selection.o: selection.c
	$(CC) -c $(CFLAGS) selection.c

merge.o: merge.c
	$(CC) -c $(CFLAGS) merge.c

quick.o: quick.c
	$(CC) -c $(CFLAGS) quick.c

shell.o: shell.c
	$(CC) -c $(CFLAGS) shell.c

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

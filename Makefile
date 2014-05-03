
CC=cc
CFLAGS=-Wall
LD=cc
LDFLAGS=-Wall

all: test

test: test.o stack.o
	$(LD) -o test $(LDFLAGS) test.o stack.o

test.o: test.c stack.h
	$(CC) -o test.o $(CFLAGS) -c test.c

stack.o: stack.c stack.h
	$(CC) -o stack.o $(CFLAGS) -c stack.c


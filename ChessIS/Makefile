CC=gcc
CFLAGS=-Wall -g

default: main clean

main: board.o
	$(CC) $(CFLAGS) -o main main.c board.o

board.o: 
	$(CC) $(CFLAGS) -c board.c

clean:
	rm -rf *.o

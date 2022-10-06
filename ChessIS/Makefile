CC=gcc
CFLAGS=-Wall -g

default: main clean

main: board.o pawn.o
	$(CC) $(CFLAGS) -o main main.c board.o pawn.o

board.o: 
	$(CC) $(CFLAGS) -c board.c

pawn.o: 
	$(CC) $(CFLAGS) -c pawn.c

clean:
	rm -rf *.o

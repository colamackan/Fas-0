CC=gcc
FLAGS= -Wall -ggdb -std=c99

all: main travelplanner fib

fib: fib.c
	$(CC) $(FLAGS) -o fib fib.c

travelplanner: travelplanner.c logo.c
	$(CC) $(FLAGS) -o travelplanner travelplanner.c logo.c

main: main.o listdb.o graphics.o
	$(CC) $(FLAGS) -o main main.o listdb.o graphics.o

main.o:	main.c	
	$(CC) $(FLAGS) -c main.c

listdb.o: listdb.c
	$(CC) $(FLAGS) -c listdb.c

graphics.o: graphics.c
	$(CC) $(FLAGS) -c graphics.c

.PHONY: clean

clean:
	rm -f main
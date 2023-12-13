CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: tests main

squares_count.o: squares_count.c squares_count.h
	$(CC) $(CFLAGS) -c -o $@ $<

tests.o: tests.c squares_count.h
	$(CC) $(CFLAGS) -c -o $@ $<

main.o: main.c squares_count.h
	$(CC) $(CFLAGS) -c -o $@ $<

tests: tests.o squares_count.o
	$(CC) $(CFLAGS) -o $@ $^

main: main.o squares_count.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o tests main


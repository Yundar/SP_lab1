CC = g++

CFLAGS  = -g -Wall

SOURCES = main.cpp Radiostation.cpp

all: 
	$(CC) $(CFLAGS) $(SOURCES) -o main

run:
	@./main

clean:
	@rm -rf *.o main
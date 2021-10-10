CC = g++

CFLAGS  = -g -Wall

SOURCES = main.cpp MarriageAgency.cpp

all: 
	$(CC) $(CFLAGS) $(SOURCES) -o main

run:
	@./main

clean:
	@rm -rf *.o main
# Makefile for OurFirstProgram

# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Target executable name
TARGET = main

# Default rule
all: $(TARGET)

# How to build the target
$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

# How to build object file
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Clean build files
clean:
	rm -f *.o $(TARGET)

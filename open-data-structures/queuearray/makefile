OBJS = main.o queuearray.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o queuearray

main.o : main.cpp queuearray.h queuearray.cpp
	$(CC) $(CFLAGS) main.cpp queuearray.cpp

clean :
	\rm *.o
OBJS = main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o main

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp

clean :
	\rm *.o
OBJS = main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o stackarray

main.o : main.cpp stackarray.h
	$(CC) $(CFLAGS) main.cpp

clean :
	\rm *.o
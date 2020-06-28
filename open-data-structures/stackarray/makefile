OBJS = main.o stackarray.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o stackarray

main.o : main.cpp stackarray.h stackarray.cpp
	$(CC) $(CFLAGS) main.cpp stackarray.cpp

clean :
	\rm *.o
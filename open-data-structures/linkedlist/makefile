OBJS = main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o linkedlist

main.o : main.cpp linkedlist.h node.h
	$(CC) $(CFLAGS) main.cpp

clean :
	\rm *.o
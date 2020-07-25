OBJS = main.o randomqueue.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o randomqueue

main.o : main.cpp randomqueue.h randomqueue.cpp
	$(CC) $(CFLAGS) main.cpp randomqueue.cpp

clean :
	\rm *.o
OBJS = main.o faststackarray.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o faststackarray

main.o : main.cpp faststackarray.h faststackarray.cpp
	$(CC) $(CFLAGS) main.cpp faststackarray.cpp

clean :
	\rm *.o
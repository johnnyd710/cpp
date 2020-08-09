OBJS = main.o chainedhashtable.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)

all : $(OBJS)
	$(CC) $(OBJS) -o chainedhashtable

main.o : main.cpp chainedhashtable.h chainedhashtable.cpp
	$(CC) $(CFLAGS) main.cpp chainedhashtable.cpp

clean :
	\rm *.o
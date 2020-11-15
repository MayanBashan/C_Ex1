
CC=gcc
FLAGS=-Wall -g
TARGETS=main.o basicMath.o power.o
AR=ar

all: mains maind
prog: $(TARGETS)
	$(CC) $(FLAGS) -o prog main.o basicMath.o power.o
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
libmyMath.a: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o
libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c
	$(CC) $(FLAGS) -c power.c
.PHONY: clean all
clean:
	rm -f prog mains maind *.o *.a *.so
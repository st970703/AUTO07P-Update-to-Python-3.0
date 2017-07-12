# %W% Makefile
CFLAGS= -g -O2
CC=gcc

OBJ=tek2ps.o

all: tek2ps

tek2ps: $(OBJ) tek.h
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean:
	$(RM) *.o tek2ps

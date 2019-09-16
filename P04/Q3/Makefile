convert : convert.o convert.h
		gcc convert.o -o convert

convert.o : convert.h convert.c
		gcc -Wall -ansi -pedantic -c convert.c

clean :
		rm -f convert.o convert

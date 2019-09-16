upper : toUpper.o
	gcc toUpper.o -o upper

upper.o : toUpper.c toUpper.h
	gcc -Wall -ansi -pedantic -c toUpper.c

clean :
	rm -f toUpper.o upper

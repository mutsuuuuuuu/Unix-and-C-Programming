program : user_input.o
		gcc user_input.o order.o -o program
order.o : order.o order.h
	gcc -c order.c -Wall -ansi -pedantic
user_input.o : user_input.o user_input.h order.h
	gcc -c user_input.c -Wall -ansi -pedantic

clean:
	rm -f program order.o user_input.o


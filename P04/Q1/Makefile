order : order.o user_input.o
	gcc order.o user_input.o -o order

order.o : order.c order.h
	gcc -c order.c -Wall -pedantic -ansi

user_input.o : user_input.c user_input.h order.h
	gcc -c user_input.c -Wall -pedantic -ansi

clean :
	rm -f order user_input.o order.o

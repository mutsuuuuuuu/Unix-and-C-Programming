copyFile : copyFile.o
	gcc copyFile.o -o copyFile
copyFile.o: copyFile.c
	gcc -Wall -ansi -pedantic -c copyFile.c
clean:
	rm -f copyFile copyFile.o output.txt

readLog : readLog.o
	gcc readLog.o -o readLog
readLog.o: readLog.c
	gcc -Wall -ansi -pedantic -g -c readLog.c
clean1:
	rm -f readLog readLog.o

q3: display.o plot.o
	gcc display.o plot.o -o display
display.o : display.c plot.h
	gcc -Wall -ansi -pedantic -g -c display.c
plot.o : plot.h
	gcc -Wall -ansi -pedantic -g -c plot.c
cleanq3 : 
	rm -f display display.o plot.o

q4: randomArray.o randomarray.o
	gcc randomArray.o randomarray.o -o random
randomArray.o: randomArray.c randomarray.h
	gcc -Wall -ansi -pedantic -g -c randomArray.c 
randomarray.o : randomarray.h
	gcc -Wall -ansi -pedantic -g -c randomarray.c
cleanq4: 
	rm -f random randomArray.o randomarray.o

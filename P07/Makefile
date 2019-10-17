Test : ListNode.o LinkedList.o LinkedListTest.o
	gcc ListNode.o LinkedList.o LinkedListTest.o -o test

LinkedListTest.o : LinkedListTest.c ListNode.h LinkedList.h LinkedListTest.h
	gcc -Wall -ansi -pedantic -g -Werror -c LinkedListTest.c

ListNode.o : ListNode.c ListNode.c
	gcc -Wall -ansi -pedantic -g -Werror -c ListNode.c

LinkedList.o : LinkedList.c ListNode.h LinkedList.h
	gcc -Wall -ansi -pedantic -g -Werror -c LinkedList.c

cleanLL:
	rm -f LinkedList.o ListNode.o LinkedListTest.o test


entry : journalEntry.o
	gcc journalEntry.o -o entry

journalEntry.o: journalEntry.h journalEntry.c EntryLL.h
	gcc -Wall -ansi -pedantic -g -Werror -c journalEntry.c

EntryNode.o : EntryNode.c EntryNode.h journalEntry.h
	gcc -Wall -ansi -pedantic -g -Werror -c EntryNode.c
EntryLL.o: EntryLL.c EntryLL.h EntryNode.h
	gcc -Wall -ansi -pedantic -g -Werror -c EntryLL.c
clean:
	rm -f journalEntry.o entry

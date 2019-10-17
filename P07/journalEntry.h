#ifndef JOURNALENTRY_H
#define JOURNALENTRY_H

typedef struct JournalEntry
{
	int date;
	int month;
	int year;
	char str[500];
} Entry;

#endif


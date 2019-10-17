#include <stdlib.h>
#include "journalEntry.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
    if(argc<1)
    {
        printf("Need More command line argument\n");
    }
    else
    {
        FILE *input;
        Entry *journalEntry;
        int count,i;
        input = fopen(argv[1],"r");
        if(input == NULL)
        {
            perror("Error while reading file\n");
        }
        else
        {
            fscanf(input,"%d",&count);
            journalEntry = (Entry*)malloc(sizeof(Entry)*count);
            for(i = 0; i<count; i++)
            {
                fscanf(input,"%d/%d/%d ",&journalEntry[i].date,&journalEntry[i].month,&journalEntry[i].year);
                fgets(journalEntry[i].str,500,input);
            }
            for(i= 0 ; i<count; i++)
            {
                printf("%d/%d/%d\n",journalEntry[i].date,journalEntry[i].month,journalEntry[i].year);
                printf("%s",journalEntry[i].str);
            }
        }
    }
    return 0;
}

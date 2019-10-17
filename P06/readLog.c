#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int date,hour,minutes,seconds;
    char month[4], process[50],message[2000]; 
    int count;

    if(argc<2)
    {
        printf("ERROR: NEED AT LEAST AN ARGUMENT\n");
        printf("./excecutable [inputFile]\n");
    }
    else
    {
        FILE *input;
        input = fopen(argv[1],"r");
        if(input == NULL)
        {
            perror("ERROR READING LOG FILE");
        }
        else
        {
            do
            { 
            count = fscanf(input,"%s %d %d:%d:%d %s",month,&date,&hour,&minutes,&seconds,process);
            fgets(message,2000,input);
            if(strstr(message,"fail")!=NULL)
            {
                long seconds_after = (hour*3600)+(minutes*60)+seconds;
                printf("%s %d %li %s %s",month,date,seconds_after,process,message);   
            }
            else
            {
                printf("%s %d %d:%d:%d %s %s",month,date,hour,minutes,seconds,process,message);   
            }
            }
            while(count!=EOF);
        fclose(input);
        
    }
    }
    
    return 0;
}

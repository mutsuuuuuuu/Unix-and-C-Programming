#include <stdlib.h>
#include <stdio.h>
#include "copyFile.h"

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        printf("ERROR: need at least two command line argument\n");
        printf("./copyFile [inputFile] [outputFile]\n ");
    }
    else
    {
        FILE *source, *destination;
        int ch;
        source = fopen(argv[1],"r");
        destination = fopen(argv[2],"w");
        if(source == NULL || destination == NULL)
        {
            perror("Error opening file");
        }
        else
        {
            do
            {
            ch = fgetc(source);
            if(ch != EOF)
            {
                fputc((char)ch,destination);
            }
            }while(ch != EOF);
        }
        fclose(source);
        fclose(destination);
    } 
    return 0;
}



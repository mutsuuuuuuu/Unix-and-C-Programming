#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "randomarray.h"

int main(int argc, char *argv[])
{
    double **data;
    int i,j,k;
    int rows, column;
    FILE *input;
    if(argc < 4)
    {
        printf("Error: Need 4 Command Line Arguments\n");
        printf("./random [fileName] [rows] [column]");
    }
    else
    {
        rows = atoi(argv[2]);
        column = atoi(argv[3]);
        
        data = (double **)malloc(sizeof(double *) * rows);
        for(i=0; i<rows; i++)
        {
            data[i] = (double *)malloc(sizeof(double)*column);
        }
        
        randomArray(data,rows,column,3);
        
        input = fopen(argv[1],"w");
        if(input == NULL)
        {
            perror("ERROR OPENING FILE");
        }
        else
        {
        /** write it to the file**/
            for(j = 0; j<rows; j++)
            {
                for(k=0; k<column; k++)
                {
                    fprintf(input,"%lf \t", data[j][k]);
                }
                fprintf(input,"\n");
            }       
        }
       
        /** free the malloced array **/
        for(i = 0; i<rows; i++)
        {
            free(data[i]);
        } 
        free(data);
        fclose(input);
    }
    return 0;
}

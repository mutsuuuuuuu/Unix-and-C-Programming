#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include "plot.h"

int main(int argc, char *argv[])
{
    int rows,column;
    int i,j,k;
    double **matrix;
    if (argc < 2)
    {
        printf("ERROR : Argument Count is less than 2\n");
        printf("./display [fileName]");
    }
    else
    {
        FILE *input;
        input = fopen(argv[1],"r");
        if(input == NULL)
        {
            perror("Invalid File");
        }
        else
        {
            /**read the first line**/
            fscanf(input,"%d %d",&rows,&column);
            /** malloc the 2d array**/
            matrix = (double**)malloc(rows * sizeof(double*));
            for(i = 0; i<rows; i++)
            {
                matrix[i] = (double*)malloc(column * sizeof(double));
            }
            /** End of malloc array**/
            for(j=0; j<rows; j++)
            {
                for(k=0; k<column; k++)
                {
                    fscanf(input,"%lf",&matrix[j][k]);
                }
            }
            plot(matrix,rows,column);
            /** free the column**/
            for(i=0; i <rows; i++)
            {
                free(matrix[i]);
            }
            free(matrix);                 
        }
        fclose(input);
    }   
    return 0;
}


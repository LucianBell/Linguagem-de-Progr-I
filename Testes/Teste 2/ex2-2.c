/*
Reescreva o programa abaixo  usando ponteiros

    int main (){
         float matrx [50][50];
         int i,j;
             for (i=0;i<50;i++)
                 for (j=0;j<50;j++)
                       matrx[i][j]=0.0;
         return(0);
    }
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matrx[50][50];
    int i, j;
    float *p_m;
    int *p_i = &i, *p_j = &j;

    p_m = &matrx[0][0];

    for (i = 0; i < 50; i++)
    {
        for (j = 0; j < 50; j++)
        {
            *p_m = 0.0;
            p_m++;
        }
    }

    for (int w = 0; w < 50; w++)
    {
        for (int z = 0; z < 50; z++)
        {
            printf("%.2f\t", matrx[w][z]);
        }
        printf("\n");
    }

    return (0);
}
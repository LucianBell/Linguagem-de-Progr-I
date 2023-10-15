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
    float *p;
    p = &matrx;

    for (int i = 0; i < 100; i++)
    {
        *p = 0.0;
        printf("%.2f\n", *p);
        p++;
    }

    return (0);
}

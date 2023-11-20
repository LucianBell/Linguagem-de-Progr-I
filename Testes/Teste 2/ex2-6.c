/*
Sendo A um vetor com 100 elementos, mostre o conteúdo do vetor utilizando  4 ponteiros (p,q,r,s)
simultâneos posicionados em:

- p posição 0

- q posição 25

- r  posição 50

- s posição 75.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Inicializa um vetor de 10 posições com números aleatórios
    int A[100];
    int *p = A;
    int *q = &A[25];
    int *r = &A[50];
    int *s = &A[75];

    // Preenche o vetor com números de 1 a 100
    for (int i = 0; i < 100; i++)
    {
        A[i] = i + 1;
    }

    for (int i = 0; i < 100; i++)
    {
        if (i < 25)
        {
            printf("%d\n", *p++);
        }
        else if (i < 50)
        {
            printf("%d\n", *q++);
        }
        else if (i < 75)
        {
            printf("%d\n", *r++);
        }
        else
        {
            printf("%d\n", *s++);
        }
    }

    return 0;
}
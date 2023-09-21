/*
Escreva um programa que leia dois vetores ordenados, v1 e v2 com 10 elementos cada, 
retorne um novo array ordenado contendo os elementos de v1 e v2.

Exemplo:
arr1:  [3, 4, 6, 7]
arr2:  [1, 3, 5, 6, 8, 11, 15]
var res = uniao(arr1, arr2); // res=[1, 3, 3, 4, 5, 6, 6, 7, 8, 11, 15]
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};

    int atual1, atual2, contadorAtual1 = 0, contadorAtual2 = 0;

    int uniao[] = { 0 }; 

    printf("RES = [ ");

    for (int i = 0; i < 20; i++)
    {
        atual1 =  (contadorAtual1 < 10) ? array1[contadorAtual1] : 9999;
        atual2 = (contadorAtual2 < 10) ? array2[contadorAtual2] : 9999;

        if (atual1 < atual2)
        {
            uniao[i] = atual1;
            contadorAtual1++;
        } else if (atual2 < atual1)
        {
            uniao[i] = atual2;
            contadorAtual2++;
        }

        printf("%d, ", uniao[i]);
    }

    printf("]\n");

    return 0;
}

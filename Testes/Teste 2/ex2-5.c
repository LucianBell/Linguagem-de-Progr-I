/*
Escreva um programa que inverta as posições de um array de tamanho 10 usando ponteiros
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pa, *pb, aux;

    pa = array;
    pb = &array[9];

    for (int i = 0; i < 5; i++)
    {
        aux = *pa;
        *pa = *pb;
        *pb = aux;
        pa++;
        pb--;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}

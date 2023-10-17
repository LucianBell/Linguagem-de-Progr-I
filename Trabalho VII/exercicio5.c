/*
Escreva um programa que inverta as posições de um array de tamanho 10 usando ponteiros
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, aux = 0, *ptr;
    ptr = array;

    printf("Array normal: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nArray invertido: ");

    //          5 pq tu inverte dois números de uma vez
    for (i = 0; i < 5; i++)
    {
        // ptr + i pq aí tu não precisa atualizar o ponteiro, tu só pega o número referente com o i
        aux = *(ptr + i);
        *(ptr + i) = *(ptr + (9 - i));
        *(ptr + (9 - i)) = aux;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
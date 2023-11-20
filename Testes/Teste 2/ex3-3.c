/*
Faca um programa que aloque dinamicamente um array de inteiros com tamanho fornecido pelo usuario.
A seguir leia valores para esse array. A seguir percorra o array contando quantos elementos positivos
e negativos foram informados
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entrada, nums, post = 0, neg = 0;
    int *array;

    printf("Insira o tamanho do array: ");
    scanf("%d", &entrada);

    array = (int *)malloc(entrada * (sizeof(int)));

    for (int i = 0; i < entrada; i++)
    {
        printf("Insira um valor p/ o array: ");
        // NÃO PODE ESQUECER DO & NO ARRAY
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < entrada; i++)
    {
        if (array[i] > 0)
        {
            post++;
        }
        else
        {
            neg++;
        }
        printf("%d ", array[i]);
    }

    printf("\nQuant numeros positivos: %d\n", post);
    printf("Quant numeros negativos: %d", neg);
    free(array);

    return 0;
}

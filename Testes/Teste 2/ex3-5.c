/*
Aloque de forma dinâmica dois arrays com o número de posições informadas pelo usuário.
Preencha seus elementos de forma randômica (utilize a função rand() ).
Efetue a soma de cada posição do array 1 com a sua correspondente no array 2.
Mostre o resultado. Após isso, libere o espaço alocado em memória para os arrays.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tam_1, tam_2;
    int *array1, *array2;
    srand(time(NULL));

    printf("Insira o tamanho da array1: ");
    scanf("%d", &tam_1);

    printf("Insira o tamanho da array2: ");
    scanf("%d", &tam_2);

    array1 = (int *)malloc(tam_1 * (sizeof(int)));
    array2 = (int *)malloc(tam_2 * (sizeof(int)));

    for (int i = 0; i < tam_1; i++)
    {
        array1[i] = rand() % 10;
    }

    for (int i = 0; i < tam_2; i++)
    {
        array2[i] = rand() % 10;
    }

    printf("ARRAY 1:\n");
    for (int i = 0; i < tam_1; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\nARRAY 2:\n");
    for (int i = 0; i < tam_2; i++)
    {
        printf("%d ", array2[i]);
    }

    printf("\nSOMAS:\n");
    if (tam_1 == tam_2)
    {
        for (int i = 0; i < tam_1; i++)
        {
            printf("%d ", array1[i] + array2[i]);
        }
    }
    else if (tam_1 < tam_2)
    {
        for (int i = 0; i < tam_2; i++)
        {
            if (i < tam_2 - 1)
            {
                printf("%d ", array1[i] + array2[i]);
            }
            else
            {
                printf("%d ", array2[i]);
            }
        }
    }
    else if (tam_2 > tam_1)
    {
        for (int i = 0; i < tam_1; i++)
        {
            if (i < tam_1 - 1)
            {
                printf("%d ", array1[i] + array2[i]);
            }
            else
            {
                printf("%d ", array1[i]);
            }
        }
    }

    return 0;
}
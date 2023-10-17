/*
Faça um programa que efetue a soma dos valores de cada posição de dois arrays 4 x 4
e armazene em um terceiro array de 4 x 4 o resultado. Utilize somente ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

void somaMatriz(int (*matriz1)[4], int (*matriz2)[4], int (*resultado)[4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *(*(resultado + i) + j) = *(*(matriz1 + i) + j) + *(*(matriz2 + i) + j);
        }
    }
}

int main()
{
    int matriz1[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int matriz2[4][4] = {{16, 15, 14, 13}, {12, 11, 10, 9}, {8, 7, 6, 5}, {4, 3, 2, 1}};
    int resultado[4][4];

    somaMatriz(matriz1, matriz2, resultado);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", *(*(resultado + i) + j));
        }
        printf("\n");
    }

    return 0;
}

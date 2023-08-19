/*
Faça um programa que leia uma matriz 3 x 2 e outra matriz 2 x 3. 
Calcule o produto dessas matrizes que deverá ser armazenado em uma terceira matriz. Mostre a matriz resultante.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int matriz1[3][2], matriz2[2][3], resultado[3][3];

    printf("Digite os elementos da primeira matriz 3x2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Faca um programa que leia uma matriz M[10,5] e no final apresente a soma de todos os seus elementos
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[10][5];
    int somaTodosElementos = 0;

    printf("Digite os elementos da matriz M[10][5]:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &M[i][j]);   
            somaTodosElementos += M[i][j];
        }
    }

    printf("\nMatriz resultante:\n");
     for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma de todos os elementos: %d\n", somaTodosElementos);

    return 0;
}

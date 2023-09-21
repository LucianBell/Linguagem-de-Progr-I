/*
Seja A uma matriz 5 x 5.  Fazer um programa   para:
- Determinar a soma dos elementos da diagonal principal de A.
- Colocar os elementos da diagonal principal de A em um vetor S.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][5];
    int S[5], somaDiagonal = 0, contador = 0;

    printf("Insira os elementos da matriz A[5][5]:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &A[i][j]);
            if (j == i + 1 || j == 0 && i == 0)
            {
                somaDiagonal += A[i][j];
                S[contador] = A[i][j];
                contador++;
            }
        }
    }
    
    printf("\nSoma dos valores na diagonal: %d\n", somaDiagonal);
    printf("Valores da diagonal: [ ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", S[i]);
    }
    printf("]\n");

    

    return 0;
}

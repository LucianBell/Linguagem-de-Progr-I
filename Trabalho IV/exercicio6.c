/*
Faca um programa que leia duas matrizes M1[5,5] e M2[5,5] 
e entao armazene em um vetor V os valores que existem em M1 e nao existem em M2. Mostre o vetor V resultante.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M1[5][5], M2[5][5];
    int vetor[] = { 0 };
    int k = 0;

    printf("Digite os elementos da matriz M1[5][5]:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &M1[i][j]);   
        }
    }

    printf("\nDigite os elementos da matriz M2[5][5]:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &M2[i][j]);   
        }
    }

        for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int existe = 0;

            for (int m = 0; m < 5; m++) {
                for (int n = 0; n < 5; n++) {
                    if (M1[i][j] == M2[m][n]) {
                        existe = 1;
                        break;
                    }
                }
                if (existe) break;
            }

            if (!existe) {
                vetor[k++] = M1[i][j];
            }
        }
    }

    printf("\nValores em M1 e não em M2:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}


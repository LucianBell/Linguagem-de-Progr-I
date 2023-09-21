/*
De forma similar ao anterior, faca um programa que leia duas matrizes M1[5,5] e M2[5,5] 
e entao armazene em um vetor V os valores que existem em M1 e tambem existem em M2. Mostre o vetor V resultante.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M1[5][5];
    int M2[5][5];
    int V[25];
    int k = 0;

    printf("Digite os elementos da matriz M1[5][5]:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &M1[i][j]);
        }
    }

    printf("Digite os elementos da matriz M2[5][5]:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &M2[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int existe_em_M2 = 0;

            for (int m = 0; m < 5; m++) {
                for (int n = 0; n < 5; n++) {
                    if (M1[i][j] == M2[m][n]) {
                        existe_em_M2 = 1;
                        break;
                    }
                }
                if (existe_em_M2) break;
            }

            if (existe_em_M2) {
                V[k++] = M1[i][j];
            }
        }
    }

    printf("\nValores em M1 que também existem em M2:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}

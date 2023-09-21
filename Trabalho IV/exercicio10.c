/*
Escrever um programa que lê uma matriz M 5x5 e cria 2 vetores SL e SC que contenham,
respectivamente, as somas das linhas e das colunas de M. Escrever a matriz e os vetores criados
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int M[5][5];
    int SL[5] = {0}; 
    int SC[5] = {0}; 


    printf("Digite os elementos da matriz M[5][5]:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &M[linha][coluna]);
        }
    }


    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            SL[linha] += M[linha][coluna]; 
            SC[coluna] += M[linha][coluna];
        }
    }


    printf("Matriz M[5][5]:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d\t", M[linha][coluna]);
        }
        printf("\n");
    }


    printf("Vetor SL (Soma das Linhas):\n");
    for (int linha = 0; linha < 5; linha++) {
        printf("%d ", SL[linha]);
    }
    printf("\n");

    printf("Vetor SC (Soma das Colunas):\n");
    for (int coluna = 0; coluna < 5; coluna++) {
        printf("%d ", SC[coluna]);
    }
    printf("\n");

    return 0;
}

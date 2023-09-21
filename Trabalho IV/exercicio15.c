/*
Faca um programa que leia uma matriz de 5 x 5 e um vetor de 5 posicoes. A seguir mostre quais os valores que existem 
no vetor e tambem existem na matriz
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];
    int vetor[5];

    // Passo 1: Ler a matriz 5x5
    printf("Digite os elementos da matriz 5x5:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // Passo 2: Ler o vetor de 5 posições
    printf("Digite os elementos do vetor (5 elementos):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    // Passo 3: Mostrar os valores que existem no vetor e na matriz
    printf("Valores que existem no vetor e na matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int linha = 0; linha < 5; linha++) {
            for (int coluna = 0; coluna < 5; coluna++) {
                if (vetor[i] == matriz[linha][coluna]) {
                    printf("%d ", vetor[i]);
                }
            }
        }
    }
    printf("\n");

    return 0;
}

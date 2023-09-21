/*
Faca um programa que leia um vetor de 30 posições. 
A seguir mostre esse vetor de forma inversa (da ultima posicao para a primeira)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[30];

    // Passo 1: Ler os valores do vetor
    printf("Digite os valores do vetor (30 elementos):\n");
    for (int i = 0; i < 30; i++) {
        scanf("%d", &vetor[i]);
    }

    // Passo 2: Mostrar o vetor de forma inversa
    printf("Vetor inverso (da última posição para a primeira):\n");
    for (int i = 29; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
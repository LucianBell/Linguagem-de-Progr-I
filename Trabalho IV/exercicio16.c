/*
Faca um programa que leia dois vetores de 10 posicoes. A seguir crie um 
terceiro vetor que armazene a multiplicacao das posicoes pares do primeiro pelas posicoes 
impares do segundo. Mostre o vetor resultante.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
        int vetor1[10];
    int vetor2[10];
    int resultado[10];

    // Passo 1: Ler o primeiro vetor
    printf("Digite os elementos do primeiro vetor (10 elementos):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Passo 2: Ler o segundo vetor
    printf("Digite os elementos do segundo vetor (10 elementos):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Passo 3: Calcular o terceiro vetor
    for (int i = 0; i < 10; i++) {
        // Verificar se a posição é par no primeiro vetor e ímpar no segundo vetor
        if (i % 2 == 0 && i % 2 != 0) {
            resultado[i] = vetor1[i] * vetor2[i];
        } else {
            resultado[i] = 0; // Se não atender à condição, o resultado é 0
        }
    }

    // Passo 4: Mostrar o vetor resultante
    printf("Vetor resultante (multiplicação das posições pares do primeiro vetor pelas posições ímpares do segundo vetor):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

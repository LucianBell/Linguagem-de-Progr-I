/*
Faca um programa que recebe duas matrizes A(2,3) e B(3,2) multiplique-as e então mostre a matriz resultante.

Como multiplicar matrizes ? Adivinha.... acostume-se a procurar :-)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][3], B[3][2], C[2][2];

    // Passo 1: Ler a matriz A(2x3)
    printf("Digite os elementos da matriz A(2x3):\n");
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            scanf("%d", &A[linha][coluna]);
        }
    }

    // Passo 2: Ler a matriz B(3x2)
    printf("Digite os elementos da matriz B(3x2):\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            scanf("%d", &B[linha][coluna]);
        }
    }

    // Passo 3: Multiplicar as matrizes A e B
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            C[linha][coluna] = 0; // Inicializa o elemento C com 0

            for (int i = 0; i < 3; i++) {
                C[linha][coluna] += A[linha][i] * B[i][coluna]; // Calcula o elemento C
            }
        }
    }

    // Passo 4: Mostrar a matriz resultante C
    printf("Matriz Resultante C(2x2):\n");
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("%d ", C[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}

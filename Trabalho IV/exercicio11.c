/*
Escreva um programa que leia uma matriz quadrada P[3,3] e determine se esta matriz quadrada 
é uma matriz permutação.Uma matriz quadrada designa-se matriz permutação se os seus elementos
são apenas zeros e uns e se em cada linha e coluna existe um único valor 1.
A matriz

P =
| 1 0 0 |
| 0 1 0 |
| 0 0 1 |  é uma matriz permutação
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P[3][3];

    // Passo 1: Ler a matriz P[3][3]
    printf("Digite os elementos da matriz P[3][3]:\n");
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            scanf("%d", &P[linha][coluna]);
        }
    }

    // Passo 2: Verificar se P é uma matriz permutação
    int linhaSoma, colunaSoma; // Variáveis para armazenar as somas das linhas e colunas

    for (int linha = 0; linha < 3; linha++) {
        int somaLinha = 0, somaColuna = 0; // Inicializa as somas das linhas e colunas para cada iteração

        for (int coluna = 0; coluna < 3; coluna++) {
            somaLinha += P[linha][coluna]; // Soma os elementos da linha
            somaColuna += P[coluna][linha]; // Soma os elementos da coluna (transposta)

            if (P[linha][coluna] != 0 && P[linha][coluna] != 1) {
                printf("A matriz não é uma matriz permutação.\n");
                return 0; // Encerra o programa se um elemento não for 0 ou 1
            }
        }

        // Verifica se a soma da linha e da coluna é igual a 1 (deve haver apenas um 1 em cada linha e coluna)
        if (somaLinha != 1 || somaColuna != 1) {
            printf("A matriz não é uma matriz permutação.\n");
            return 0;
        }
    }

    // Se todas as verificações passaram, então P é uma matriz permutação
    printf("A matriz é uma matriz permutação.\n");

    return 0;    

}

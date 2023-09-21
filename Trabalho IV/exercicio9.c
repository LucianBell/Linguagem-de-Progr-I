/*
Dada uma matriz B 5 x 5, determine a linha de B que possui a maior soma de seus elementos.
*/

#include <stdio.h>
#include <stdlib.h>

int somaLinha(int linha, int matriz[5][5]) {
    int soma = 0;
    for (int coluna = 0; coluna < 5; coluna++) {
        soma += matriz[linha][coluna];
    }
    return soma;
}

int main() {
    int B[5][5];

    printf("Digite os elementos da matriz B[5][5]:\n");
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            scanf("%d", &B[linha][coluna]);
        }
    }

    int maiorSoma = somaLinha(0, B);
    int linhaMaiorSoma = 0;


    for (int linha = 1; linha < 5; linha++) {
        int somaAtual = somaLinha(linha, B);
        if (somaAtual > maiorSoma) {
            maiorSoma = somaAtual;
            linhaMaiorSoma = linha;
        }
    }


    printf("A linha com a maior soma de elementos é a linha %d.\n", linhaMaiorSoma);

    return 0;
}
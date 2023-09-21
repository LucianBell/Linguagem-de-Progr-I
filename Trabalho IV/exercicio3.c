/*
Faça um programa que leia uma matriz M [15,15]. Verifique quais os elementos dela 
que estão repetidos e quantas vezes eles aparecem. Ou seja, escrever cada elemento 
repetido dizendo quantas vezes ele aparece.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[15][15];
    int i, j;
    int frequencia[15][15] = {0};

    printf("Digite os elementos da matriz M[15][15]:\n");
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Verificando elementos repetidos
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            int elemento = M[i][j];
            frequencia[elemento][elemento]++;
        }
    }

    // Exibindo elementos repetidos e suas frequências
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 15; j++) {
            if (frequencia[i][j] > 1) {
                printf("O elemento %d se repete %d vezes.\n", i, frequencia[i][j]);
            }
        }
    }

    return 0;
}

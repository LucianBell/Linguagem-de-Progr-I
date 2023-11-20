/*
Inicialize um vetor de 10 posicoes de inteiros aleatoriamente.
(use a funcao rand() ).
Mostre  todo o vetor usando dois ponteiros : um começando do início do vetor e outro do final.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    // Inicializa um vetor de 10 posições com números aleatórios
    int vetor[10];
    int *p = vetor;

    // Preenche o vetor com números aleatórios
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 15;
    }

    // Exibe o vetor
    printf("Vetor de inteiros aleatórios:\n");
    for (int i = 0; i < 10; i++, p++)
    {
        printf("%d\n", *p);
    }

    return 0;
}
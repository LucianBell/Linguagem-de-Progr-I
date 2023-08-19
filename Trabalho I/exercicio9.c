/*
Faça um programa que leia 2 vetores de inteiros de 10 posicoes cada. 
A seguir copie os valores de ambos os vetores para um terceiro vetor. Mostre o vetor resultante.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[10], vetor2[10], vetorFinal[20], controle = 0;
    
    while (controle < 10)
    {
        printf("Insira o valor para a posicao %d do vetor 1: ", (controle + 1));
        scanf("%d", &vetor1[controle]);
        controle++;
    }

    controle = 0;
    
    while (controle < 10)
    {
        printf("Insira o valor para a posicao %d do vetor 2: ", (controle + 1));
        scanf("%d", &vetor2[controle]);
        controle++;
    }

    controle = 0;
    printf("Vetor Final: ");

    while (controle < 20)
    {
        if (controle < 10) {
            vetorFinal[controle] = vetor1[controle];
        } else {
            vetorFinal[controle] = vetor2[controle - 10];
        }
        printf(" %d", vetorFinal[controle]);
        controle++;
    }

    return 0;
}

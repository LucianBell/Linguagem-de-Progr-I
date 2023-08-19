/*
Faça um programa que leia 2 vetores de inteiros de 10 posicoes cada. A seguir mostre
os valores que existem no primeiro vetor e nao existem no segundo. Ao final indique
quantos valores foram mostrados
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[10], vetor2[10], controle = 0, controle1 = 0, numsRepetidos = 0;
    
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
    printf("Numeros repetidos:");

    while (controle < 10)
    {
        while (controle1 < 10)
        {
            if (vetor1[controle] == vetor2[controle1])
            {
                printf(" %d", vetor1[controle]);
                numsRepetidos++;                
            }
            controle1++;
        }
        controle1 = 0;
        controle++;
    }
    
    printf("\nQuantidade de numeros repetidos: %d", numsRepetidos);

    return 0;
}

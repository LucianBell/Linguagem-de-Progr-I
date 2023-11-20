/*
Elabore um programa que armazene valores aleatórios (veja explicação mais abaixo)
em um vetor de inteiros de 10 posições. A seguir aloque dinamicamente
um segundo vetor de inteiros como o tamanho de acordo com o total de numeros pares do
primeiro vetor. Preencha-o com os numeros pares existentes no primeiro vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num[10], numeros_pares = 0;
    int *vetor_pares;

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        num[i] = rand() % 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            numeros_pares++;
        }
    }

    vetor_pares = (int *)malloc(numeros_pares * (sizeof(int)));

    numeros_pares = 0;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            vetor_pares[numeros_pares] = num[i];
            numeros_pares++;
        }
    }

    printf("Primeiro vetor: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\nSegundo vetor: ");
    for (int i = 0; i < numeros_pares; i++)
    {
        printf("%d ", vetor_pares[i]);
    }

    free(vetor_pares);

    return 0;
}

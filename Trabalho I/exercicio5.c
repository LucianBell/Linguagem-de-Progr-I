/*
Escreva um programa que calcule a soma de um conjunto de valores. 
O algoritmo deve terminar quando um valor zero for lido (Dica: utilize uma estrutura de repetição)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float entrada = -1.0, total = 0.0;

    printf("Insira os valores que deseja somar. Digite zero para fechar.\n");

    while (entrada != 0.0)
    {
        scanf("%f", &entrada);
        total += entrada;
    }

    printf("Total: %.2f", total);

    return 0;
}

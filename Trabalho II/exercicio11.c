/*
Uma firma contrata um encanador a R$ 20,00 por dia. Escreva um programa que leia o número de dias trabalhados 
pelo encanador e imprima a quantia liquida que deverá ser paga, sabendo-se que são descontados 8% para o imposto
de renda.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int diasTrabalhados = 0;
    const float valor = 20.00;

    printf("Insira a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    printf("Quantia liquida a ser paga: R$ %.2f", (((diasTrabalhados * valor) * 92) / 100)); 

    return 0;
}

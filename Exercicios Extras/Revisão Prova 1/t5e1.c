/*
Escreva   um programa que leia dois números em ponto flutuante e forneça o resultado da soma formatado 
com duas casas decimais
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    
    printf("Insira o n1: ");
    scanf("%f", &n1);
    printf("Insira o n2: ");
    scanf("%f", &n2);

    printf("Soma: %.2f", (n1+n2));

    return 0;
}

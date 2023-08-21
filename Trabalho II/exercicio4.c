/*
Escreva um programa que leia dois números em ponto flutuante e imprima a soma desses números.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 = 0.0, n2 = 0.0;

    printf("Insira um valor: ");
    scanf("%f", &n1);


    printf("Insira mais um valor: ");
    scanf("%f", &n2);

    printf("Soma: %.2f", (n1 + n2));

    return 0;
}

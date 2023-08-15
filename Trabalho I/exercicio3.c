/*
Faça um programa que leia um nº inteiro e
mostre uma mensagem indicando se este número é par
ou ímpar, e se é positivo ou negativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Numero par");
    } else {
        printf("Numero impar");
    }

    if (numero > 0) {
        printf(" e positivo");
    } else {
        printf(" e negativo");
    }


    return 0;
}

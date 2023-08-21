/*
Escreva um programa que leia um inteiro, calcule e imprima o quadrado no número lido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("Insira um valor: ");
    scanf("%d", &num);

    printf("Quadrado: %d", (num * num));

    return 0;
}

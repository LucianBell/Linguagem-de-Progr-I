/*
Faca um programa que leia dois valores x e y e entao inverta os valores dessas variaveis
( x recebe y e y recebe x) usando ponteiros
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux;
    int *pont_x, *pont_y, *pont_aux;

    pont_x = &x;
    pont_y = &y;
    pont_aux = &aux;

    printf("Insira o valor para x: ");
    scanf("%d", &x);

    printf("Insira o valor para y: ");
    scanf("%d", &y);

    printf("Valor de x: %d. Valor de Y: %d.\n", *pont_x, *pont_y);

    *pont_aux = *pont_x;
    *pont_x = *pont_y;
    *pont_y = *pont_aux;

    printf("Invertendo...\n");
    printf("Valor de x: %d. Valor de Y: %d.\n", *pont_x, *pont_y);

    return 0;
}
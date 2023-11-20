/*
Escreva um programa que leia a altura e o raio de um cilindro circular.
A seguir crie ponteiros e aponte eles para cada uma dessas variaveis.
Utilizando esses ponteiros imprima o volume do cilindro, segundo a fórmula:
volume = pi * (raio * raio) * altura   ,     onde pi = 3.14
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, raio;
    float *p_alt, *p_raio;
    p_alt = &altura;
    p_raio = &raio;

    printf("Insira a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Insira o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Volume do cilindro: %.2f.", (3.14 * ((*p_raio * *p_raio) * *p_alt)));

    return 0;
}

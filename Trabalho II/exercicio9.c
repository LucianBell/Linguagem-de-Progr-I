/*
Escreva um programa que leia a altura e o raio de um cilindro circular e
 imprima o volume do mesmo, segundo a fórmula:   volume = pi * (raio * raio) * altura,onde pi = 3.14
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, raio, volume;
    const float pi = 3.14;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * (raio * raio) * altura;

    printf("O volume do cilindro circular é: %.2f\n", volume);

    return 0;
}

/*
Faça um programa que leia 3 angulos de um triangulo e diga se esse triangulo é 
um triângulo retângulo (procure na Internet como saber isso :-) )
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angulo1, angulo2, angulo3;

    printf("Digite o primeiro angulo: ");
    scanf("%f", &angulo1);

    printf("Digite o segundo angulo: ");
    scanf("%f", &angulo2);

    printf("Digite o terceiro angulo: ");
    scanf("%f", &angulo3);

    if (angulo1 + angulo2 + angulo3 == 180) {
        if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
            printf("O triangulo eh um triangulo retangulo.\n");
        } else {
            printf("O triangulo nao eh um triangulo retangulo.\n");
        }
    } else {
        printf("Os angulos nao formam um triangulo.\n");
    }

    return 0;
}

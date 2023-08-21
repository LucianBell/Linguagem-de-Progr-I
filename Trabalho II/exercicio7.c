/*
Faça um programa que leia 4 pontos P1(x,y), P2(x,y), P3(x,y) e P4(x,y) do sistema cartesiano R2
e imprima a área do quadrilátero formado por estes 4 pontos 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y, R2 = 0.0;

    printf("Insira o X em P1: ");
    scanf("%f", &p1x);

    printf("Insira o Y em P1: ");
    scanf("%f", &p1y);

    printf("Insira o X em P2: ");
    scanf("%f", &p2x);

    printf("Insira o Y em P2: ");
    scanf("%f", &p2y);

    printf("Insira o X em P3: ");
    scanf("%f", &p3x);

    printf("Insira o Y em P3: ");
    scanf("%f", &p3y);

    printf("Insira o X em P4: ");
    scanf("%f", &p4x);

    printf("Insira o Y em P4: ");
    scanf("%f", &p4y);

    R2 = (((p1x * p2y) + (p2x * p3y) + (p3x * p4y) + (p4x * p1y)) - ((p2x * p1y) + (p3x * p2y) + (p4x * p3y) + (p1x * p4y))) / 2;

    if (R2 < 0)
    {
        R2 = (R2 * -1);
    }
    
    printf("Resultado: %.2f", R2);

    return 0;
}

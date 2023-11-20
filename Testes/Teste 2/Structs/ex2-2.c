/*
Escreva uma funcao que leia os campos numero1 e numero2 de uma estrutura.
A seguir faca uma outra funcao inverter esses valores na estrutura original
de forma que numero1 contenha o valor de numero2 e numero2 o valor de numero1.
Mostre a estrutura original após essa inversão. (passe a estrutura para a função por referência)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num1, num2;
} estrutura;

void inverte(estrutura *exemplo)
{
    estrutura aux_est;

    printf("Estrutura no comeco:\n");
    printf("Num1: %d. Num2: %d.\n", exemplo->num1, exemplo->num2);

    aux_est.num1 = exemplo->num1;
    exemplo->num1 = exemplo->num2;
    exemplo->num2 = aux_est.num1;

    printf("Estrutura ao final:\n");
    printf("Num1: %d. Num2: %d.\n", exemplo->num1, exemplo->num2);
}

int main()
{
    estrutura est_final;
    estrutura *pont_est = &est_final;
    est_final.num1 = 10;
    est_final.num2 = 20;

    inverte(pont_est);

    return 0;
}

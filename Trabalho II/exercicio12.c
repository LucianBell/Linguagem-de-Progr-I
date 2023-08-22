/*
Uma companhia telefônica opera com a seguinte tarifa: uma chamada telefônica com duração de 3 minutos custa R$ 1.15.
Cada minuto adicional custa R$ 0.26. Escreva um programa que leia a duração total de uma chamada (em minutos)
e calcule o total a ser pago.
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int duracaoMinutos = 0;
    float custo = 0.0;

    printf("Insira a duracao da chamada em minutos: ");
    scanf("%d", &duracaoMinutos);
    custo = 1.15;

    if (duracaoMinutos > 3)
    {
        while (duracaoMinutos > 3)
        {
            custo += 0.26;
            duracaoMinutos--;
        }
    }

    printf("Custo da chamada: R$ %.2f", custo);

    return 0;
}

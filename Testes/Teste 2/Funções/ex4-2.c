/*
Escreva uma função que retorne o menor número entre dois
números ponto flutuante fornecidos pelo usuário
*/

#include <stdio.h>
#include <stdlib.h>

float menor_num(float num1, float num2)
{
    if (num1 > num2)
    {
        return num2;
    }
    else if (num2 > num1)
    {
        return num1;
    }
}

int main()
{
    float num1 = 10.2, num2 = 202.3;

    printf("Menor num: %f.\n", menor_num(num1, num2));

    return 0;
}

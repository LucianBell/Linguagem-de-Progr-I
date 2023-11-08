/*
Escreva uma função que retorne o menor número entre dois números ponto flutuante fornecidos pelo usuário
*/

#include <stdio.h>

float menorNumero(float num1, float num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    float numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    float resultado = menorNumero(numero1, numero2);

    printf("O menor número é: %f\n", resultado);

    return 0;
}
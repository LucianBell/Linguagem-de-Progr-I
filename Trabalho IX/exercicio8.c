/*
Elaborar uma função para ler a base e a altura de um retângulo, calcular e retornar a sua área. Na função principal é apresentado o valor dessa área. Fórmula: Area = base * altura
*/

#include <stdio.h>

float calcularAreaRetangulo(float base, float altura)
{
    return base * altura;
}

int main()
{
    float base, altura;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    float area = calcularAreaRetangulo(base, altura);

    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
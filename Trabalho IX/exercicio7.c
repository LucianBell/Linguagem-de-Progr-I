/*
Criar uma função que converta uma temperatura dada em Fahrenheit em Celsius. A temperatura é passada como parâmetro para uma função que retorna a temperatura em Celsius, que deve ser mostrada no programa principal. A fórmula para cálculo é C = ( F - 32 ) * 5 / 9
*/

#include <stdio.h>

float converterFahrenheitParaCelsius(float temperaturaFahrenheit)
{
    float temperaturaCelsius = (temperaturaFahrenheit - 32) * 5 / 9;
    return temperaturaCelsius;
}

int main()
{
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);

    printf("A temperatura em Celsius é: %.2f\n", temperaturaCelsius);

    return 0;
}
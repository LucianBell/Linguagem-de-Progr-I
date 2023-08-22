/*
Faça um programa que converta graus Co em graus Fo e vice-versa. Ou seja, se for lida uma temperatura
em graus Celsius, esta deverá ser convertida em graus Fahrenheite se for lida em graus Fahrenheit, deverá
ser convertida em graus Celsius.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha;
    float temperature;

    printf("Escolha a conversão:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperature);
        float convertedTemp = ((temperature * 9 / 5) + 32);
        printf("%.2f°C eh igual a %.2f°F\n", temperature, convertedTemp);
    } else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperature);
        float convertedTemp = ((temperature - 32) * 5 / 9);
        printf("%.2f°F eh igual a %.2f°C\n", temperature, convertedTemp);
    } else {
        printf("Escolha inválida.\n");
    }

    return 0;
}
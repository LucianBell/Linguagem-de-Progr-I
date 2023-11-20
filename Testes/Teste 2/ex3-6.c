/*
Exercício 6

Faca um programa que leia duas strings fornecidas pelo usuario de no maximo 50 posicoes.
A seguir aloque dinamicamente uma outra string (array de caracteres) com tamanho suficiente
para armazenar as duas strings lidas previamente. Copie o conteudo dessas duas strings
para esse espaco alocado dinamicamente.

Exemplo:
String 1 --> "oi"
String 2 --> "mundo"
Espaco alocado dinamicamente no final sera --> "oi mundo"

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    char *pont_final;
    int tamanho;

    printf("Insira a primeira string (tam. max: 50): ");
    gets(str1);

    printf("Insira a segunda string (tam. max: 50): ");
    gets(str2);

    tamanho = strlen(str1) + strlen(str2);

    pont_final = (char *)malloc(tamanho * (sizeof(char)));

    strcpy(pont_final, str1);
    strcat(pont_final, " ");
    strcat(pont_final, str2);

    printf("String final: %s.\n", pont_final);

    return 0;
}

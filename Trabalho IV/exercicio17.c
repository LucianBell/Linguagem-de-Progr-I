/*
Faca um programa que leia uma string fornecida pelo usuario. A seguir, converta todas 
as consoantes para maiusculas e as vogais para minusculas (limite o tamanho em 50 caracteres)
*/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char inputString[51]; // Declara uma string com tamanho máximo de 50 caracteres

    // Passo 1: Ler a string fornecida pelo usuário
    printf("Digite uma string (limite de 50 caracteres): ");
    scanf("%50s", inputString);

    // Passo 2: Converter consoantes para maiúsculas e vogais para minúsculas
    for (int i = 0; i < strlen(inputString); i++) {
        if (isalpha(inputString[i])) { // Verifica se o caractere é uma letra
            if (inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' || inputString[i] == 'o' || inputString[i] == 'u' ||
                inputString[i] == 'A' || inputString[i] == 'E' || inputString[i] == 'I' || inputString[i] == 'O' || inputString[i] == 'U') {
                inputString[i] = tolower(inputString[i]); // Converte vogais para minúsculas
            } else {
                inputString[i] = toupper(inputString[i]); // Converte consoantes para maiúsculas
            }
        }
    }

    // Passo 3: Mostrar a string modificada
    printf("String modificada: %s\n", inputString);

    return 0;
}

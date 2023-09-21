/*
Faca um programa que leia uma string fornecida pelo usuario. A seguir leia um caracter.
Verifique a existencia desse caracter na string e cada vez que o mesmo for encontrado deve ser 
trocado por '*'. Mostre o resultado. (limite o tamanho em 50 caracteres)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
        char inputString[51]; // Declara uma string com tamanho máximo de 50 caracteres
    char replaceChar;

    // Passo 1: Ler a string fornecida pelo usuário
    printf("Digite uma string (limite de 50 caracteres): ");
    scanf("%50s", inputString);

    // Passo 2: Ler o caractere a ser substituído
    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &replaceChar); // Espaço em branco antes de %c para ignorar espaços em branco e quebras de linha

    // Passo 3: Substituir o caractere na string
    int length = strlen(inputString);
    for (int i = 0; i < length; i++) {
        if (inputString[i] == replaceChar) {
            inputString[i] = '*';
        }
    }

    // Passo 4: Mostrar o resultado
    printf("String modificada: %s\n", inputString);

    return 0;
}

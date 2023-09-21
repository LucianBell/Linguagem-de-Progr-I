/*
Faca um programa que uma string fornecida pelo usuario. 
A seguir, conte quantas letras repetidas a string possui (limite o tamanho em 50 caracteres)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputString[51]; // Declara uma string com tamanho máximo de 50 caracteres
    int count[26] = {0}; // Array para contar as ocorrências de cada letra do alfabeto

    // Passo 1: Ler a string fornecida pelo usuário
    printf("Digite uma string (limite de 50 caracteres): ");
    scanf("%50s", inputString);

    // Passo 2: Contar as letras repetidas na string
    int length = strlen(inputString);
    for (int i = 0; i < length; i++) {
        char currentChar = inputString[i];

        // Verificar se o caractere é uma letra do alfabeto (maiúscula ou minúscula)
        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z')) {
            // Converter caractere para letra minúscula (caso seja maiúscula)
            if (currentChar >= 'A' && currentChar <= 'Z') {
                currentChar = currentChar - 'A' + 'a';
            }

            // Incrementar o contador correspondente à letra
            count[currentChar - 'a']++;
        }
    }

    // Passo 3: Mostrar a contagem das letras repetidas
    printf("Contagem das letras repetidas:\n");
    for (char letter = 'a'; letter <= 'z'; letter++) {
        if (count[letter - 'a'] > 1) {
            printf("%c: %d vezes\n", letter, count[letter - 'a']);
        }
    }

    return 0;
}

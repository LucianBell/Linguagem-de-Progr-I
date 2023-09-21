/*
Faca um programa que leia duas strings diferentes fornecidas pelo usuario 
(no maximo 50 caracteres cada uma). A seguir monte uma terceira string formada 
a partir da união dessas duas strings. Mostre a string resultante de trás para frente (inversamente)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primeiraString[51]; // Declara a primeira string com tamanho máximo de 50 caracteres
    char segundaString[51];  // Declara a segunda string com tamanho máximo de 50 caracteres
    char terceiraString[101]; // Declara a terceira string com tamanho máximo de 100 caracteres

    // Passo 1: Ler a primeira string
    printf("Digite a primeira string (limite de 50 caracteres): ");
    scanf("%50s", primeiraString);

    // Passo 2: Ler a segunda string
    printf("Digite a segunda string (limite de 50 caracteres): ");
    scanf("%50s", segundaString);

    // Passo 3: Concatenar as duas strings para formar a terceira string
    strcpy(terceiraString, primeiraString); // Copia a primeira string para a terceira
    strcat(terceiraString, segundaString);  // Concatena a segunda string à terceira

    // Passo 4: Mostrar a terceira string de trás para frente (inversamente)
    printf("Terceira string (inversa): ");
    for (int i = strlen(terceiraString) - 1; i >= 0; i--) {
        printf("%c", terceiraString[i]);
    }
    printf("\n");

    return 0;
}

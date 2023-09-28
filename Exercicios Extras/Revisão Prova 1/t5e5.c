/*
Faça um programa que leia uma frase fornecida pelo usuário e imprima a frase letra por letra. 
Dica: Utilize um laço de repetição para isso
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[100];
    int tamanho;

    printf("Insira uma frase: ");
    gets(frase);

    tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++)
    {
        printf("Letra %d: %c\n", (i + 1), frase[i]);
    }
    

    return 0;
}

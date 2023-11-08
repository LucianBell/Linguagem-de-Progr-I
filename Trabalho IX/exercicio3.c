/*
Escreva uma função que leia ustring de caracteres e imprima os caracteres invertidos.
Por exemplo, se a string lida for "xarope" deve imprimir "eporax"
*/

#include <stdio.h>
#include <string.h>

void imprimirStringInvertida(const char *str)
{
    int tamanho = strlen(str);

    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char minhaString[100];

    printf("Digite uma string: ");
    fgets(minhaString, sizeof(minhaString), stdin);

    printf("String invertida: ");
    imprimirStringInvertida(minhaString);

    return 0;
}
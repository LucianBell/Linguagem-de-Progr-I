/*
Escreva uma função que leia ustring de caracteres e imprima os caracteres invertidos.
Por exemplo, se a string lida for "xarope" deve imprimir "eporax"
                                            ATENÇÃO EM "IMPRIMIR"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte_str(char *str)
{
    int tam = strlen(str);
    char aux;

    for (int i = 0; i < tam / 2; i++)
    {
        aux = str[i];
        str[i] = str[tam - i];
        str[tam - i] = aux;
    }

    for (int i = 0; i <= tam; i++)
    {
        printf("%c", str[i]);
    }
    printf(".\n");
}

int main()
{
    char minhaString[100];

    printf("Digite uma string: ");
    gets(minhaString);

    inverte_str(minhaString);

    return 0;
}

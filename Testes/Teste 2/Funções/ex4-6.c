/*
Faça um programa que leia duas strings e utilize uma função para determinar qual das
duas strings possui o maior tamanho
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Ao passar uma string em função colocamos como abaixo (char e ponteiro)*/
void qual_maior(char *str, char *a_str)
{
    int tam1, tam2;

    tam1 = strlen(str);
    tam2 = strlen(a_str);

    if (tam1 > tam2)
    {
        printf("String 1 eh maior\n");
    }
    else if (tam1 < tam2)
    {
        printf("String 2 eh maior\n");
    }
    else
    {
        printf("Ambas strings sao do mesmo tamanho\n");
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Insira uma string: ");
    gets(str1);

    printf("Insira uma string: ");
    gets(str2);

    qual_maior(str1, str2);

    return 0;
}

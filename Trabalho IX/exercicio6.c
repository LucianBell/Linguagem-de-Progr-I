/*
Faça um programa que leia duas strings e utilize uma função para determinar qual das duas strings possui o maior tamanho
*/

#include <stdio.h>
#include <string.h>

int maiorString(const char *str1, const char *str2)
{
    int tamanhoStr1 = strlen(str1);
    int tamanhoStr2 = strlen(str2);

    if (tamanhoStr1 > tamanhoStr2)
    {
        return 1; // A primeira string é maior
    }
    else if (tamanhoStr1 < tamanhoStr2)
    {
        return 2; // A segunda string é maior
    }
    else
    {
        return 0; // As duas strings têm o mesmo tamanho
    }
}

int main()
{
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    int resultado = maiorString(string1, string2);

    if (resultado == 1)
    {
        printf("A primeira string é maior.\n");
    }
    else if (resultado == 2)
    {
        printf("A segunda string é maior.\n");
    }
    else
    {
        printf("As duas strings têm o mesmo tamanho.\n");
    }

    return 0;
}
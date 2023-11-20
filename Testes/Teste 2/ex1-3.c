/*
Faça um algoritmo que leia um nº inteiro. Crie um ponteiro apontando para essa variavel
e utilizando ele mostre uma mensagem indicando se o conteudo apontado pelo ponteiro
(valor lido) é par ou ímpar e se é positivo ou negativo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int *pont;
    pont = &num;

    printf("Insira um valor: ");
    scanf("%d", &num);

    if (*pont % 2 == 0)
    {
        printf("O numero inserido eh par.");
    }
    else
    {
        printf("O numero inserido eh impar.");
    }

    return 0;
}
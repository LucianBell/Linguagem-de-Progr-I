/*
Faca um programa que leia uma variavel e então incremente o valor dessa variavel 10 vezes utilizando ponteiro
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1;
    int *pon1;

    printf("Inserir valor var1: ");
    scanf("%d", &var1);

    pon1 = &var1;

    for (int i = 0; i <= 10; i++)
    {
        printf("Valor var1: %d.\n", (*pon1)++);
    }

    return 0;
}

/*
Faça um programa que leia 2 números do teclado e imprima a soma deles e se a mesma é par ou impar.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 0, soma = 0;

    printf("Insira um valor: ");
    scanf("%d", &n1);


    printf("Insira um valor: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Resultado: %d - ", soma);
    if (soma % 2 == 0)
    {
        printf("Par");
    } else {
        printf("Impar");
    }
    

    return 0;
}

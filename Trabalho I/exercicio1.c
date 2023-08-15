/*
Faça um programa que leia a data de nascimento de uma pessoa expressa em anos, 
meses e dias e mostre a sua idade atual expressa apenas em dias.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int anos = 0, meses = 0, dias = 0, total = 0;

    printf("Insira quantos anos você tem hoje: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);
    
    printf("Dias: ");
    scanf("%d", &dias);

    total = (anos * 365) + (meses * 30) + dias;

    printf("Idade atual: %d dias", total);

    return 0;
}

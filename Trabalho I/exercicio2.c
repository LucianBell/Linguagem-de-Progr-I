/*
Faça um programa que leia a idade de uma pessoa expressa em dias e mostre-a expressa 
em anos, meses e dias.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idadeDias = 0, totalAnos = 0, totalMeses = 0, totalDias = 0;

    printf("Insira sua idade em dias: ");
    scanf("%d", &idadeDias);

    while (idadeDias >= 365)
    {
        idadeDias -= 365;
        totalAnos++;
    }
        
    while (idadeDias >= 30)
    {
        idadeDias -= 30;
        totalMeses++;
    }

    while (idadeDias >= 1)
    {
        idadeDias -= 1;
        totalDias++;
    }
    
    
    printf("Idade em anos: %d\n", totalAnos);
    printf("Idade em meses: %d\n", totalMeses);
    printf("Idade em dias: %d\n", totalDias);

    return 0;
}

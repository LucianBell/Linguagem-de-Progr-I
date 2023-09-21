/*
Faça um programa que leia um valor do usuário e mostre o seu resultado em octal
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
int numero;
 
// Pede e lê o número do usuário 

printf ("Digite o numero que voce deseja converter para octal: \n");
scanf ("%d", &numero);

// Número convertido 

printf ("O numero convertido em octal e:    %o\n", numero);

}
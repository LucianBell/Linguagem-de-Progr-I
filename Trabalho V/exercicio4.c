/*
Escreva um programa que some dois valores fornecidos pelo usuário e mostre o resultado com 
10 posições alinhadas a esquerda
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
int primeiro_valor;
int segundo_valor;
int resultado;


printf ("Digite o primeiro valor  =   ");
scanf ("%d",& primeiro_valor);
printf ("Digite o segundo valor =    ");
scanf ("%d",& segundo_valor);


resultado = primeiro_valor + segundo_valor;

printf ("%-10d|",resultado);


}
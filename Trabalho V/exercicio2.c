/*
Faça um programa que leia um valor do usuário e mostre o seu resultado em hexadecimal
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

int numero;

//solicita o número
printf ("Digite o numero que deseja converter para hexadecimal: \n");
scanf ("%d", &numero);

//calcula o tamanho da string 
int tamanho_da_sting = snprintf (NULL, 0, "%X", numero);

//aloca a memória
char *hexadecimal = (char *)malloc((tamanho_da_sting + 1) * sizeof(char));

//verifica alocação
if (hexadecimal == NULL)
{
    printf ("Erro na alocacao de memoria. \n");
    return 1;
}

//converte para hexadecimal
sprintf(hexadecimal, "%X", numero);

//imprime
printf ("O numero %d , convertido para exadecimal fica %s !\n", numero, hexadecimal);

//libera memória
free (hexadecimal);

return 0;
}
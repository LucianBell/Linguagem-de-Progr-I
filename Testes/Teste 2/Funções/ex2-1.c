/*
Faça uma função que receba uma variável inteira por valor.
Mostre o endereço dessa variável dentro do main e dentro da função.
*/

#include <stdio.h>
#include <stdlib.h>

void mostra_endereco(int var)
{
    printf("Endereco na funcao: %x.\n", &var);
}

int main()
{
    int var_teste = 10;
    int *pont = &var_teste;

    printf("Conteudo da var: %d.\n", *pont);
    printf("Endereco dela na main: %x.\n", pont);
    mostra_endereco(var_teste);

    return 0;
}

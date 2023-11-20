/*
Escreva um programa que aloque dinamicamente um array de struct de 10 posicoes
para armazenar pessoas (cada pessoa fica armazenada em uma posicao).
A struct deve conter nome, idade e sexo de cada pessoa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    int idade;
    char endereco[100];
} pessoa;

pessoa *aloca_dinamicamente(int tam)
{
    pessoa *ptr_pessoas;

    ptr_pessoas = (pessoa *)malloc(tam * sizeof(pessoa));

    return ptr_pessoas;
}

int main()
{
    int tam_arr = 10;
    pessoa *arr_pessoa;

    arr_pessoa = aloca_dinamicamente(tam_arr);

    for (int i = 0; i < tam_arr; i++)
    {
        printf("Pessoa %d:\n", i + 1);
        strcpy(arr_pessoa[i].nome, "Lucy");
        strcpy(arr_pessoa[i].endereco, "Rual AAA");
        arr_pessoa[i].idade = 20;

        printf("Nome: %s. Idade: %d. Endereco: %s.\n", arr_pessoa[i].nome, arr_pessoa[i].idade, arr_pessoa[i].endereco);
    }

    return 0;
}

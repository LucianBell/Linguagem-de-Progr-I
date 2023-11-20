/*
Escreva um programa que aloque dinamicamente uma estrutura para armazenar nome e endereco de uma pessoa.
Faça o usuário informar esses dados. Preencha os campos da estrutura com a entrada fornecida pelo usuário.
A seguir mostre os campos dessa estrutura.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    char endereco[100];
} pessoa;

pessoa *aloca_dinamicamente(void)
{
    pessoa *pessoa_ptr = (pessoa *)malloc(sizeof(pessoa));

    return pessoa_ptr;
}

int main()
{
    pessoa *ptr_pessoa;

    ptr_pessoa = aloca_dinamicamente();

    printf("Insira o nome da pessoa: ");
    gets(ptr_pessoa->nome);

    printf("Insira o endereco da pessoa: ");
    gets(ptr_pessoa->endereco);

    printf("Nome: %s. Endereco: %s\n", ptr_pessoa->nome, ptr_pessoa->endereco);

    return 0;
}

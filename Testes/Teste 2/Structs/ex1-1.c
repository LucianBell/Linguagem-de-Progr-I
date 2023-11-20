/*
Faça um programa que através de uma função leia uma struct de dados chamada pessoa e contém o nome
, idade e endereco. A seguir chame outra  função que deverá imprimir o conteúdo da struct lida anteriormente.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    int idade;
    char endereco[200];
} pessoa;

void ler_pessoa(pessoa *np)
{
    printf("Insira o nome da pessoa: ");
    gets(np->nome);

    printf("Insira a idade da pessoa: ");
    scanf("%d", &np->idade);
    fflush(stdin);

    printf("Insira o endereco da pessoa: ");
    gets(np->endereco);
}

void imprime_pessoa(pessoa pc)
{
    printf("Nome: %s\n", pc.nome);
    printf("Idade da pessoa: %d\n", pc.idade);
    printf("Endereco: %s\n", pc.endereco);
}

int main()
{
    pessoa nova_pessoa;
    pessoa *pont_pess = &nova_pessoa;

    ler_pessoa(pont_pess);

    imprime_pessoa(nova_pessoa);

    return 0;
}

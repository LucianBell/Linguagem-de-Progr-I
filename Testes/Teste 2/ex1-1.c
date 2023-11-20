/*
Faca um programa que leia um valor inteiro fornecido pelo usuario.
Mostre o endereco de memoria dessa variavel e o seu conteudo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_inteiro;
    int *ponteiro;

    printf("Insira um valor: ");
    scanf("%d", &valor_inteiro);
    ponteiro = &valor_inteiro;

    printf("Conteudo: %d. Endereco de memoria %p.", *ponteiro, &ponteiro);

    return 0;
}

/*
Faca um programa que leia um valor inteiro fornecido pelo usuario.
Mostre o endereco de memoria dessa variavel e o seu conteudo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorUsuario;
    int *ponteiro;

    printf("Insira um valor: ");
    scanf("%d", &valorUsuario);

    ponteiro = &valorUsuario;

    printf("\nEndereço de memória do valor armazenado: %p", ponteiro);
    return 0;
}

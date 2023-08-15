/*
Elabore um programa que dada a idade de um nadador classifica-o em uma das seguintes categorias:

- infantil A = 5 - 7 anos
- infantil B = 8-10 anos
- juvenil A = 11-13 anos
- juvenil B = 14-17 anos
- adulto = maiores de 18 anos
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Categoria inválida\n");
    }

    return 0;
}

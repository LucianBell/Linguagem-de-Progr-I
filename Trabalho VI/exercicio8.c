/*Faça um programa que calcule a média de idade de 10 pessoas. Atenção:
Todas as variaveis usadas no programa devem ser manipuladas através de ponteiros
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade1, idade2, idade3, idade4, idade5, idade6, idade7, idade8, idade9, idade10, soma;
    int *pIdade1, *pIdade2, *pIdade3, *pIdade4, *pIdade5, *pIdade6, *pIdade7, *pIdade8, *pIdade9, *pIdade10;

    printf("Idade da pessoa 1: ");
    scanf("%d", &idade1);
    pIdade1 = &idade1;

    printf("Idade da pessoa 2: ");
    scanf("%d", &idade2);
    pIdade2 = &idade2;

    printf("Idade da pessoa 3: ");
    scanf("%d", &idade3);
    pIdade3 = &idade3;

    printf("Idade da pessoa 4: ");
    scanf("%d", &idade4);
    pIdade4 = &idade4;

    printf("Idade da pessoa 5: ");
    scanf("%d", &idade5);
    pIdade5 = &idade5;

    printf("Idade da pessoa 6: ");
    scanf("%d", &idade6);
    pIdade6 = &idade6;

    printf("Idade da pessoa 7: ");
    scanf("%d", &idade7);
    pIdade7 = &idade7;

    printf("Idade da pessoa 8: ");
    scanf("%d", &idade8);
    pIdade8 = &idade8;

    printf("Idade da pessoa 9: ");
    scanf("%d", &idade9);
    pIdade9 = &idade9;

    printf("Idade da pessoa 10: ");
    scanf("%d", &idade10);
    pIdade10 = &idade10;

    soma = *pIdade1 + *pIdade2 + *pIdade3 + *pIdade4 + *pIdade5 + *pIdade6 + *pIdade7 + *pIdade8 + *pIdade9 + *pIdade10;

    printf("Media das idades: %d", soma / 10);

    return 0;
}
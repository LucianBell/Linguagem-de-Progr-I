/*
Elabore um programa que declare 4 variáveis do tipo inteiro (a, b, c, d)
e 4 do tipo ponteiro de inteiro(pa, pb, pc, pd) .  Leia os 4 valores para
as variaveis inteiras e então efetue a soma dos quatro valores utilizando os ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    int *pa, *pb, *pc, *pd;

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    printf("Insira o valor de b: ");
    scanf("%d", &b);

    printf("Insira o valor de c: ");
    scanf("%d", &c);

    printf("Insira o valor de d: ");
    scanf("%d", &d);

    printf("Soma dos quatro valores: %d.", (*pa + *pb + *pc + *pd));

    return 0;
}

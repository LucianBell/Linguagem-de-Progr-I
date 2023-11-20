/*
Escreva uma funcao que receba dois inteiros e armazene-os em uma estrutura (campos x e y).
A seguir copie essa estrutura para uma segunda estutura. Mostre essa segunda estrutura
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} estrutura;

typedef struct
{
    estrutura est;
} segunda_estrutura;

estrutura preenche_estrutura(int a, int b)
{
    estrutura estruturinha;

    estruturinha.x = a;
    estruturinha.y = b;

    return estruturinha;
}

int main()
{
    estrutura est_final;
    segunda_estrutura est_mostrada;

    est_final = preenche_estrutura(10, 20);

    est_mostrada.est = est_final;

    printf("Mostrando struct:\n");
    printf("x = %d\t y = %d.\n", est_mostrada.est.x, est_mostrada.est.y);

    return 0;
}

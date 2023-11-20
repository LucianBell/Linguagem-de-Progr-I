/*
Crie uma funcao que receba dois parametros inteiros e retorne a seguinte estrutura com os respectivos valores definidos

struct retorno {
int x = PARAMETRO RECEBIDO
int y = PARAMETRO RECEBIDO
}
A seguir mostre os campos x e y da estrutura retornada

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} retorno;

retorno preenche_struct(int a, int b)
{
    retorno estruturinha;

    estruturinha.x = a;
    estruturinha.y = b;

    return estruturinha;
}

int main()
{
    retorno esturct_final;

    esturct_final = preenche_struct(22, 27);

    printf("X: %d\tY: %d.\n", esturct_final.x, esturct_final.y);

    return 0;
}

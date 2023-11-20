/*
Responda as perguntas abaixo. Se achar necessário, faça testes no  programa em C.

a) Explique a diferença entre

p++; -> Mostra o conteúdo p onde o ponteiro aponta, e depois incrementa o ponteiro

(*p)++; -> Mostra o conteúdo p onde o ponteiro aponta, depois incrementa o valor apontado

*(p++); ->  Mostra o conteúdo p onde o ponteiro aponta mais o número sugerido (avança tantas posições quanto
            for orientada, mas só para visualização, o ponteiro permanece igual)

b) O que quer dizer *(p+10);?
    Mostrar 10 posições para além do que o ponteiro indica

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[3] = {0, 7, 12};
    int y[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 20};
    int *pont;
    int *pont_ex;

    pont = x;
    pont_ex = y;

    // Incrementa o ponteiro (lugar para onde ele aponta). Tava apontando p zero (1a posição do array)
    // E depois começou a apontar para 7 (2a posição do array)
    printf("%d.\n", *pont++);
    printf("%d.\n\n", *pont);

    // Incrementa o valor de onde o ponteiro está apontando (no caso, aponta p 7, que vira 8), mas
    // continua apontando p o mesmo lugar (incrementa valor, não ponteiro)
    printf("%d.\n", (*pont)++);
    printf("%d.\n\n", *pont);

    // Mostra o conteúdo para onde o ponteiro está apontando (2a posicao de x) e depois INCREMENTA
    // O PONTEIRO, E NÃO O VALOR PARA ONDE ELE APONTA.
    printf("%d.\n", *pont);
    printf("%d.\n", *(pont++));
    printf("%d.\n", *pont);
    printf("x:%d\n", x[1]);
    printf("%d.\n\n", *pont);

    printf("%d\n", *(pont_ex + 5));
    printf("%d\n", *pont_ex);

    return 0;
}

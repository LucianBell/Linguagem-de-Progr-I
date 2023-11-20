/*
JOGO DO MARCIANO COM PONTEIROS
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int posicao_marciano = -1, balas_restantes = 5, tentativa;
    int *p_posicao, *p_balas, *p_tentativa;

    p_posicao = &posicao_marciano;
    p_balas = &balas_restantes;
    p_tentativa = &tentativa;

    while (*p_posicao < 0 || *p_posicao > 100)
    {
        printf("JOGADOR 1: Escolha a arvore para se esconder: ");
        scanf("%d", &posicao_marciano);

        if (*p_posicao < 0 || *p_posicao > 100)
        {
            printf("Posicao invalida. Escolha uma arvore entre 0 e 100.\n");
        }
    }

    for (int i = 0; i < 50; i++)
    {
        printf("#\n");
    }

    for (int i = 0; i < *p_balas; i++)
    {
        printf("JOGADOR 2: Escolha em qual arvore atirar: ");
        scanf("%d", &tentativa);

        if (*p_tentativa < *p_posicao)
        {
            printf("O alien esta mais a direita. Tente novamente.\n");
        }
        else if (*p_tentativa > *p_posicao)
        {
            printf("O alien esta mais a esquerda. Tente novamente.\n");
        }
        else
        {
            printf("O ALIEN FOI ACERTADO.\n");
            break;
        }
    }

    printf("GAME OVER.\n");

    return 0;
}

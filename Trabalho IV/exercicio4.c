/*
Seja R uma matriz  4 X5. Determine o maior elemento de R e a sua posição.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int R[4][5];
    int maiorElemento, linhaMaiorElemento, colunaMaiorElemento;

    
    printf("Digite os elementos da matriz R[4][5]:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &R[i][j]);   
            if (i == 0 && j == 0)
            {
                maiorElemento = R[i][j];
                linhaMaiorElemento = i;
                colunaMaiorElemento = j;
            } else if (maiorElemento < R[i][j])
            {
                maiorElemento = R[i][j];
                linhaMaiorElemento = i;
                colunaMaiorElemento = j;
            }
        }
    }
    
    printf("\nMatriz resultante:\n");
     for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior elemento: %d\n", maiorElemento);
    printf("Indice maior elemeno: R[%d][%d]\n", linhaMaiorElemento, colunaMaiorElemento);
    printf("Posicao maior elemento R[%d][%d]", (linhaMaiorElemento + 1), (colunaMaiorElemento + 1));

    return 0;
}

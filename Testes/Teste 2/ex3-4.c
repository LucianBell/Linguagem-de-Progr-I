/*
Aloque de forma dinamica um array bidimensional com o numero de posicoes
fornecidas pelo usuario. Preencha esse array com valores randomicos (utilize a função rand() ).
A seguir utilizando ponteiros mostre o conteudo desse array. Nao esqueca de liberar o espaco alocado em memoria
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int entrada_lin, entrada_col;
    int **array;
    srand(time(NULL));

    printf("Insira o num de linhas do array: ");
    scanf("%d", &entrada_lin);

    printf("Insira o num de colunas do array: ");
    scanf("%d", &entrada_col);

    array = (int **)malloc(entrada_lin * (sizeof(int *)));

    for (int i = 0; i < entrada_lin; i++)
    {
        array[i] = (int *)malloc(entrada_col * sizeof(int));
    }

    for (int i = 0; i < entrada_lin; i++)
    {
        for (int j = 0; j < entrada_col; j++)
        {
            array[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < entrada_lin; i++)
    {
        for (int j = 0; j < entrada_col; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < entrada_lin; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}

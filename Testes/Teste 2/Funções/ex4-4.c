/*
Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento de moeda o programa deve
imprimir CARA ou COROA. Deixe o programa lançar 100 moedas e conte o número de vezes que cada lado aparece.
Imprima os resultados. O programa deve chamar uma função separada chamada jogada que não utiliza argumentos
e retorna 0 para cara e 1 para coroa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogada(void)
{
    int resultado;
    /*
        O resta da divisão determina os números delimitados. Lembrando que é sempre: numero dado - 1. Ou seja,
        temos aqui a opção de surgir números de 0 a 1.
    */
    resultado = rand() % 2;
    printf("Resultado: ");
    if (resultado == 0)
    {
        printf("CARA.\n");
    }
    else
    {
        printf("COROA.\n");
    }

    return resultado;
}

int main()
{
    /*Gerador de números aleatórios é iniciado dentro da main, e não na função*/
    srand(time(NULL));
    int cara = 0, coroa = 0, result;

    for (int i = 0; i < 100; i++)
    {
        result = jogada();
        if (result == 1)
        {
            coroa++;
        }
        else
        {
            cara++;
        }
        result = -1;
    }

    printf("Quantidade de vezes que foi cara: %d.\n", cara);
    printf("Quantidade de vezes que foi cara: %d.\n", coroa);

    return 0;
}

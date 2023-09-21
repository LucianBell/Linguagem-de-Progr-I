/*
Faca um programa que leia um vetor com 10 elementos positivos e/ou negativos e no 
final diga quantos elementos negativos e quantos positivos foram encontrados
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    int contadorPositivos = 0, contadorNegativos = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > 0) {
            contadorPositivos++;
        } else if (vetor[i] < 0) {
            contadorNegativos++;
        }
    }

    printf("Quantidade de nums negativos: %d\n", contadorNegativos);
    printf("Quantidade de nums negativos: %d", contadorPositivos);

    return 0;
}

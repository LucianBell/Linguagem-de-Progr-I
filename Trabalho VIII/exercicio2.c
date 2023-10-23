/*
Elabore um programa que armazene valores aleatórios (veja explicação mais abaixo) em um vetor de inteiros de 10 posições. A seguir aloque dinamicamente um segundo vetor de inteiros como o tamanho de acordo com o total de numeros pares do  primeiro vetor. Preencha-o com os numeros pares existentes no primeiro vetor.

Explicação de como gerar números aleatórios:
Para gerar numeros aleatorios em C utilize as funcoes srand e rand da seguinte maneira

srand()-> inicializa sempre de forma aleatoria.
Ex.: srand(semente);

rand()-> gera o numero.
Ex.: rand() % max_val
Sorteia um numero de 0 a (max_val-1)

Exemplo de uso

main(){
int num;

srand(time(NULL));
num= rand() % 10;

printf("Numero Gerado: %d\n",num);

return 0
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int primeiroVetor[10];

    for (int i = 0; i < 10; i++)
    {
        primeiroVetor[i] = rand() % 100 + 1;
    }

    int totalPares = 0;
    for (int i = 0; i < 10; i++)
    {
        if (primeiroVetor[i] % 2 == 0)
        {
            totalPares++;
        }
    }

    int *segundoVetor = (int *)malloc(totalPares * sizeof(int));

    int indiceSegundo = 0;
    for (int i = 0; i < 10; i++)
    {
        if (primeiroVetor[i] % 2 == 0)
        {
            segundoVetor[indiceSegundo] = primeiroVetor[i];
            indiceSegundo++;
        }
    }

    printf("Primeiro vetor: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", primeiroVetor[i]);
    }

    printf("\nSegundo vetor: ");
    for (int i = 0; i < totalPares; i++)
    {
        printf("%d ", segundoVetor[i]);
    }

    free(segundoVetor);
    return 0;
}
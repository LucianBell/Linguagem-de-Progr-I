/*
Faça uma função que aloque dinamicamente uma área de memória para armazenamento de uma variável inteira.

Dentro do main(), utilize essa função para alocar DOIS inteiros (chame a função duas vezes).
Solicite ao usuário que informe os valores de cada uma das variáveis e a seguir efetue a soma
desses dois valores. Mostre o resultado da soma.
*/

#include <stdio.h>
#include <stdlib.h>

int *alocacao_dinam()
{
    int *pont;
    pont = (int *)malloc(sizeof(int));

    // Retorno sem nenhum sinal de operação;
    return pont;
}

int main()
{
    int *pont1, *pont2;

    pont1 = alocacao_dinam();
    pont2 = alocacao_dinam();

    printf("Me de o valor: ");
    // Não deve colocar nenhum sinal ao fazer scanf de pont, pois ele já armazena um endereço (onde será guardado o
    // valor de scanf.
    scanf("%d", pont1);

    printf("Me de o valor: ");
    scanf("%d", pont2);

    printf("Soma: %d.\n", *pont1 + *pont2);

    free(pont1);
    free(pont2);
    return 0;
}

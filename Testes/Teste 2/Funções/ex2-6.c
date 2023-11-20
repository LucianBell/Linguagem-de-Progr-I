/*

Faça uma função que aloque dinamicamente uma área de memória para armazenamento de um array de
inteiros com tamanho recebido com parâmetro.

Dentro do main(), solicite ao usuário que informe um tamanho para o array a ser alocado.
Invoque a função passando como parâmetro esse tamanho. A seguir, peça para o usuário
fornecer cada um dos valores do array. Mostre os valores armazenados.

** Não esqueça de liberar a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

int *aloca_dinamicamente(int tamanho)
{
    int *pont;

    pont = (int *)malloc(tamanho * (sizeof(int)));

    return pont;
}

int main()
{
    int tamanho_array, entrada;
    int *pont;

    printf("Insira o tamanho da array: ");
    scanf("%d", &tamanho_array);

    pont = aloca_dinamicamente(tamanho_array);

    for (int i = 0; i < tamanho_array; i++)
    {
        printf("Entrada: ");
        // Como eu disse, NUNCA COLOCA SINAL NO SCANF DE PONTEIRO
        // pont + i == avança a posição do array com ponteiro
        scanf("%d", pont + i);
    }

    for (int i = 0; i < tamanho_array; i++)
    {
        // O conteúdo do local p/ onde ponteiro aponta. +i faz ele ir pegando as próximas casas.
        // LEMBRAR DE COLOCAR NO PARANTESES DEPOIS DO * (se não fizer isso, ele vai acessar só a primeira
        // casa do array e adicionar i a ela (só para mostrar, não alterando os arquivos na memória))
        printf("%d ", *(pont + i));
    }

    return 0;
}

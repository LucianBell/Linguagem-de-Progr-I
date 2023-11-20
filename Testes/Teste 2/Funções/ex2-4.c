/*
Faça uma função que inverta dois valores passados como parâmetros para a função.
Mostre os valores invertidos antes e após a chamada da função

**Você deve passar os valores por referência
*/

#include <stdio.h>
#include <stdlib.h>

void inverte_valores(int *var_1, int *var_2)
{
    int aux, valor1, valor2;

    aux = *var_1;
    *var_1 = *var_2;
    *var_2 = aux;

    printf("Valor 1 apos troca: %d.\n", *var_1);
    printf("Valor 2 apos troca: %d.\n", *var_2);
}

int main()
{
    int a = 10, b = 20;
    int *pt_a = &a, *pt_b = &b;

    printf("Valor 1 antes da troca: %d.\n", *pt_a);
    printf("Valor 2 antes da troca: %d.\n", *pt_b);

    inverte_valores(pt_a, pt_b);

    return 0;
}

/*
Faça uma função que incremente um valor passado como parâmetro.
Mostre o valor antes da chamada da função e ele incrementado após a chamada.

**Você deve passar o valor por referência
*/

#include <stdio.h>
#include <stdlib.h>

int incrementa_valor(int *var)
{
    int valor = *var;
    valor += 10;

    return valor;
}

int main()
{
    int valor = 10;
    int *pont = &valor;

    printf("Valor antes da func: %d.\n", *pont);
    // Se o parametro tá configurado para receber um ponteiro, NUNCA PASSE *pont NA FUNÇÃO
    printf("Valor depois da func: %d.\n", incrementa_valor(pont));

    return 0;
}

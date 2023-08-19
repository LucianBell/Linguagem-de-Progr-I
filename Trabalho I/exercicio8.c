/*
O cardápio de uma lancheria é o seguinte:

Especificação	Código	Preço
Cachorro quente	100	1,20
Bauru simples	101	1,30
Bauru com ovo	102	1,50
Hambúrger	    103	1,20
Cheeseburguer	104	1,30
Refrigerante	105	1,00
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a 
ser pago por aquele lanche. Considere que a cada execução somente será calculado um único item.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo = 0, quantidade = 0;

    printf("Insira o codigo do produto: ");
    scanf("%d", &codigo);

    if (codigo < 100 || codigo > 105)
    {
        printf("Código inválido");
        return 0;
    } else {
        printf("Insira a quantidade: ");
        scanf("%d", &quantidade);
    }
    
    if (codigo == 100)
    {
        printf("Valor a ser pago: R$%.2f", (quantidade * 1.20));
    } else if (codigo == 101)
    {
        printf("Valor a ser pago: R$%.2f", (quantidade * 1.30));
    } else if (codigo == 102)
    {
        printf("Valor a ser pago: R$%.2f", (quantidade * 1.50));
    } else if (codigo == 103)
    {
        printf("Valor a ser pago: R$%.2f", (quantidade * 1.20));
    } else if (codigo == 104)
    {
        printf("Valor a ser pago: R$%.2f", (quantidade * 1.30));
    } else if (codigo == 105)
    {
        printf("Valor a ser pago: R$%.2f", (quantidade * 1.00));
    }    
    
    return 0;
}
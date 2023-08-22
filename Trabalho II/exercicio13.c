/*
Em uma empresa os funcionários renovam o contrato por três anos. O salário sofrerá um reajuste de 7%, 6% e 5%,
respectivamente, nos próximos três anos. Escreva um programa que leia o salário mensal atual do funcionário, 
e então, imprima o salário mensal para cada um dos três próximos anos.
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int contador = 0;
    float salarioAtual = 0.0, reajustes[3] = {0.07, 0.06, 0.05};

    printf("Digite o salario mensal atual: ");
    scanf("%f", &salarioAtual);

    while (contador < 3)
    {
        salarioAtual *= ((1 + reajustes[contador]));
        printf("Salario mensal para o ano %d: %.2f\n", (contador+1), salarioAtual);
        contador++;
    }

    return 0;
}

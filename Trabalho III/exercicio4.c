/*Escreva um programa que imprime na tela a série de FIBONACCI até um numero dado. 
Esta séria começa com 1 e 1 e os próximos números são obtidos pela soma dos anteriores.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroSolicitado = 0, numeroAnterior = 1, numeroAntAnterior = 1, numeroAtual = 0;

    printf("Escolha o número final: ");
    scanf("%d", &numeroSolicitado);

    printf("SEQUÊNCIA:\n%d\n%d\n", numeroAntAnterior, numeroAnterior);

    while (numeroAtual < numeroSolicitado)
    {
        numeroAtual = numeroAntAnterior + numeroAnterior;
        printf("%d\n", numeroAtual);
        numeroAntAnterior = numeroAnterior;
        numeroAnterior = numeroAtual;
    }
    

    printf("Finalizando programa...");

    
    return 0;
}

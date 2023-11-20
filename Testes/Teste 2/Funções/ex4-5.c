/*

Escreva um programa que faça o jogador "adivinhar um número" da forma como segue: Seu programa escolhe um número para ser adivinhado selecionando um inteiro entre 0 e 50. O programa então escreve:

Tenho um número de 0 a 50
Voce pode adivinhar meu número ?
Por favor digite seu palpite

O jogador digita então o primeiro palpite. O programa fornece uma das seguintes respostas:

1 - Excelente! Voce adivinhou o número
2 - Muito baixo. Tente novamente
3- Muito alto. Tente novamente

Se o palpite do jogar estive errado o programa deve fazer um loop até que o jogador acerte o número. Seu programa deve continuar dizendo muito alto ou muito baixo para ajudar o jogador a chegar a uma resposta. Obrigatoriamente voce deve utilizar funções.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tentar_adivinhar(int tent, int objetivo)
{
    if (tent < objetivo)
    {
        printf("Muito baixo. Tente novamente\n");
        return 1;
    }
    else if (tent > objetivo)
    {
        printf("Muito alto. Tente novamente\n");
        return 1;
    }
    else
    {
        printf("Excelente! Voce adivinhou o número.\n");
        return 0;
    }
}

int main()
{
    int num_objetivo, tentativa, estado = 1;
    srand(time(NULL));
    num_objetivo = rand() % 3;

    printf("Tenho um número de 0 a 50\nVoce pode adivinhar meu número ?\n");

    while (estado != 0)
    {
        printf("Por favor digite seu palpite: ");
        scanf("%d", &tentativa);
        // Nesses casos onde temos que checar o retorno da função, é importante LEMBRAR
        // DE ATRIBUIR O RETORNO A UMA FUNÇÃO (ESTADO NESSE CASO!!!)
        estado = tentar_adivinhar(tentativa, num_objetivo);
    }

    printf("Finalizando programa...\n");

    return 0;
}

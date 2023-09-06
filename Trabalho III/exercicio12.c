/*
A série de RICCI difere da série de FIBONACCI porque os dois números iniciais são dados pelo
usuário e os outros termos são gerados a partir da soma dos dois anteriores. Escreva um programa 
que imprime os 20 primeiros números a partir de duas entradas do usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    int i;

    printf("Digite o primeiro número inicial: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inicial: ");
    scanf("%d", &num2);

    printf("Os primeiros 20 números da série de Ricci são:\n");

    printf("%d\n%d\n", num1, num2);

    for (i = 3; i <= 20; i++) {
        num3 = num1 + num2;
        printf("%d\n", num3);
        num1 = num2;
        num2 = num3;
    }

    return 0;
}
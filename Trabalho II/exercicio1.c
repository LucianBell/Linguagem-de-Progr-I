/*
Faça um programa que leia 3 números do teclado e imprima a soma deles.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Inserir um valor: ");

        if (i == 0)
        {
            scanf("%d", &n1);
        } else if (i == 1)
        {
            scanf("%d", &n2);
        } else {
            scanf("%d", &n3);
        }
    }

    printf("Soma final: %d", (n1 + n2 + n3));
    

    return 0;
}

/*
Faça um programa que leia uma matriz 5 x 5. Diga se essa matriz é uma matriz identidade.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5], controle = 0, controle1 = 0;

    while (controle1 < 5)
    {
        while (controle < 5)
        {
            printf("Insira o valor para matriz[%d][%d]: ", controle, controle1);
            scanf("%d", &matriz[controle][controle1]);
            controle++;
        }        
        controle = 0;
        controle1++;
    }
    
    if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1 && matriz[3][3] == 1 && matriz[4][4] == 1)
    {
        printf("Matriz identidade");
    } else {
        printf("Nao eh matriz identidade");
    }
    

    return 0;
}

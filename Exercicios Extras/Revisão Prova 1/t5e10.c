/*
Faça um programa que imprima a seguinte saída:

(inicia em 10 caracteres # e passa a deslocar casas)
##########
#########
########
#######
######
#####
####
###
##
#
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horizontal = 10;

    while (horizontal != 0)
    {
        for (int i = 0; i < horizontal; i++)
        {
            printf("#");
        }
        printf("\n");
        horizontal--;
    }
    


    return 0;
}

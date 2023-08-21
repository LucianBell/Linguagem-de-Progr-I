/*
Faça um programa que leia 3 números inteiros e imprima qual deles é o maior e qual é o menor.
Além de dizer se o do meio é maior, menor ou igual a média dos 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3], maior, indexMaior, menor, indexMenor;
    float media = 0.0;

    for (int i = 0; i < 3; i++)
    {
        printf("Insira um valor: ");
        scanf("%d", &nums[i]);
        media += nums[i];

        if (i == 0)
        {
            maior = nums[i];
            indexMaior = i;
            menor = maior;
            indexMenor = i;
        } else if (nums[i] > maior)
        {
            maior = nums[i];
            indexMaior = i;
        } else if (nums[i] < menor)
        {
            menor = nums[i];
            indexMenor = i;
        }
        
    }    

    media = media / 3.0;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    for (int i = 0; i < 3; i++)
    {
        if (i != indexMaior && i != indexMenor) 
        {
            if (nums[i] > media)
            {
                printf("Num do meio eh maior que a media.");
                return 0;
            } else if (nums[i] == media)
            {
                printf("Num do meio eh igual a media.");
                return 0;
            } else {
                printf("Num do meio eh menor que a media.");
                return 0;
            }
        }
    }
}


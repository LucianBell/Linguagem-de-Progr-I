/*
Faca um programa que leia o valor de duas variaveis do tipo float. Crie dois ponteiros apontando para cada uma delas.
A seguir mostre o endereco de memória dessas duas variaveis e seus conteúdos.
Mostre o endereço de memória dos ponteiros, o conteudo deles (que será o endereços das duas variáveis) e o
conteudo do local para onde eles apontam
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declaração de vars: Correto!*/
    float var1, var2;
    float *pon1, *pon2;

    /*Preenchimento de vars: Correto!*/
    printf("Valor var1: ");
    scanf("%f", &var1);

    printf("Valor var2: ");
    scanf("%f", &var2);

    /*Preenchimento de ponteiros: Correto!*/
    pon1 = &var1;
    pon2 = &var2;

    printf("\nEndereco de memoria var1: %p\n", pon1);
    printf("Endereco de memoria var2: %p\n", pon2);

    /*Correto!*/
    printf("Conteudo var1: %.2f\n", *pon1);
    printf("Conteudo var2: %.2f\n", *pon2);

    /*Correto!*/
    printf("Endereco de memoria pon1: %p\n", &pon1);
    printf("Endereco de memoria pon2: %p\n", &pon2);

    /*Correto!*/
    printf("Conteudo pon1: %p\n", pon1);
    printf("Conteudo pon2: %p\n", pon2);

    /*Correto!*/
    printf("Conteudo apontado pon1: %.2f\n", *pon1);
    printf("Conteudo apontado pon2: %.2f\n", *pon2);

    return 0;
}

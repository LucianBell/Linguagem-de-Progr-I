/*
Faca um programa que leia o valor de duas variaveis do tipo float.
Crie dois ponteiros apontando para cada uma delas. A seguir mostre o
endereco de memória dessas duas variaveis e seus conteúdos. Mostre o
endereço de memória dos ponteiros, o conteudo deles (que será o endereços das duas variáveis)
e o conteudo do local para onde eles apontam
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float var1, var2;
    float *pont1, *pont2;

    pont1 = &var1;
    pont2 = &var2;

    printf("Insira o valor de var1: ");
    scanf("%f", &var1);

    printf("Insira o valor de var2: ");
    scanf("%f", &var2);

    printf("Var1 conteudo: %f. Var1 endereco: %x. Var2 conteud: %f. Var2 endereco: %x.\n", var1, &var1, var2, &var2);
    printf("Ponteiros:\n");
    printf("pont1 conteudo: %x. Pont1 endereco: %x. Pont1 cont aponta: %f.\n", pont1, &pont1, *pont1);
    printf("pont2 conteudo: %x. Pont2 endereco: %x. Pont2 cont aponta: %f.\n", pont2, &pont2, *pont2);
}

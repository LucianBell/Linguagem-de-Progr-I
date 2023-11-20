/*
Um comerciante deseja armazenar o nome e o valor de 10 produtos de seu estabelecimento.
Monte um array de structs para armazena-los
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[100];
    float valor;
} produto;

void preenche_array(int tamanho, produto *arr)
{

    for (int i = 0; i < tamanho; i++)
    {
        strcpy(arr[i].nome, "Banana");
        arr[i].valor = 10.5;
    }
}

int main()
{
    produto array_produto[10];
    produto *pont_arr = array_produto;

    preenche_array(10, pont_arr);

    for (int i = 0; i < 10; i++)
    {
        printf("Produto %d\n", i + 1);
        printf("Nome: %s\tValor: %.2f\n", array_produto[i].nome, array_produto[i].valor);
    }

    return 0;
}

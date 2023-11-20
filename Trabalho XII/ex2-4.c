/*
Escrever uma funcão int dia(struct data *dt) que retorna qual o dia da data passada por parâmetro.

struct data teste={15, 4, 1999};
int ult;
ult = dia(&teste);    #ult recebe 15
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano;
} data;

int dia(data *dt)
{
    int dia = dt->dia;

    return dia;
}

int main()
{
    data teste;
    data *pt_teste = &teste;
    int dia_da_data;
    teste.dia = 15;
    teste.mes = 4;
    teste.ano = 1999;

    dia_da_data = dia(pt_teste);
    printf("Dia: %d.\n", dia_da_data);

    return 0;
}

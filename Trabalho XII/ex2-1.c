/*
Escrever uma funcao void datecpy(struct data *dt1, struct data dt2), que atribui o conteúdo de dt2 para dt1.

struct data da={1,5,1999}, db={15,8,1980};
datecpy(&da, &db); /* copia db para da
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano;
} data;

void datecpy(data *dt1, data *dt2)
{
    data aux_data;
    aux_data.dia = dt1->dia;
    aux_data.mes = dt1->mes;
    aux_data.ano = dt1->ano;

    dt1->dia = dt2->dia;
    dt1->mes = dt2->mes;
    dt1->ano = dt2->ano;

    dt2->dia = aux_data.dia;
    dt2->mes = aux_data.mes;
    dt2->ano = aux_data.ano;

    printf("Dt1: %d/%d/%d.\n", dt1->dia, dt1->mes, dt1->ano);
    printf("Dt2: %d/%d/%d.\n", dt2->dia, dt2->mes, dt2->ano);
}

int main()
{
    data date1, date2;
    date1.dia = 10;
    date1.mes = 5;
    date1.ano = 1923;

    date2.dia = 15;
    date2.mes = 2;
    date2.ano = 1980;

    data *pont_1 = &date1;
    data *pont_2 = &date2;

    datecpy(pont_1, pont_2);

    return 0;
}

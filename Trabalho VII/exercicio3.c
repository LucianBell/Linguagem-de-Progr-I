/*
Explique o que faz o programa abaixo

     int main(){
             float vet[5] = {1.1,2.2,3.3,4.4,5.5};
             float *f;
             int i;
             f = vet;
             printf("contador/valor/valor/endereco/endereco");
                    for(i = 0 ; i <= 4 ; i++){
                         printf("\ni = %d",i);
                         printf("   vet[%d] = %.1f",i, vet[i]);
                         printf("   *(f + %d) = %.1f",i, *(f+i));
                         printf("   &vet[%d] = %X",i, &vet[i]);
                         printf("   (f + %d) = %X",i, f+i);
                  }

              return 0;
     }

RESPOSTA: O programa mostra uma tabela onde, na 1ª coluna temos o valor do contador do loop, mostrando qual valor
da array vet estamos analisando no momento. Na 2ª coluna temos o valor de vet na mesma posição do valor do
contador, ou seja, o valor da array vet que estamos analisando no momento. Na 3ª coluna, temos a expressão
"*(f + %d)", que busca mostrar qual o valor está presente no local da memória onde o ponteiro, mais o valor
de i aponta. Ou seja, se o ponteiro aponta para o primeiro número do array, e adicionamos 0, o ponteiro vai
continuar apontando para o mesmo local, e o conteúdo para onde ele aponta é 1.1. Na 4ª coluna temos o endereço
de memória onde está localizado o elemento naquela posição específica (determinado pelo i) do array. Na última
coluna, por fim, temos a expressão "(f + %d) = ..." que mostra, por meio de ponteiro, qual o endereço de memória
para onde o ponteiro mais o valor de i está apontando.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for (i = 0; i <= 4; i++)
    {
        printf("\ni = %d", i);
        printf("   vet[%d] = %.1f", i, vet[i]);
        printf("   *(f + %d) = %.1f", i, *(f + i));
        printf("   &vet[%d] = %X", i, &vet[i]);
        printf("   (f + %d) = %X", i, f + i);
    }

    return 0;
}
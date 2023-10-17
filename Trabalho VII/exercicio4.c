/*
Explique o que o progama abaixo faz

   int main() {
      int vet[] = {4,9,12};
      int i,*ptr;
      ptr = vet;
        for(i = 0 ; i < 3 ; i++)
          printf("%d ",*ptr++);
      return 0;
   }

RESPOSTA: O programa, utilizando o ponteiro *ptr, mostra o conteúdo o do array vet. Assim, a expressão "*ptr++",
mostra qual o conteúdo para onde o ponteiro está apontando e, após isso, aumenta o valor do ponteiro, fazendo com
que seja apontado para o local na memória que contem o próximo número do array.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {4, 9, 12};
    int i, *ptr;
    ptr = vet;
    for (i = 0; i < 3; i++)
        printf("%d ", *ptr++);
    return 0;
}
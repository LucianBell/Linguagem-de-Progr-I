
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
 int pp,tam,x;
 char APELIDO[100];
 printf ("[%c]Informe um apelido: ");
 gets(APELIDO);
 tam=strlen(APELIDO); /* ontem o tamanho de APELIDO */
 for(pp=1; pp<=tam-1;pp=pp+2)
 printf(" %c ",APELIDO[pp]);
return 0;
} 
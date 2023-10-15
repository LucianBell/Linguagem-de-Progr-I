/*
PERGUNTA: Responda as perguntas abaixo. Se achar necessário, faça testes no  programa em C.

a) Explique a diferença entre

p++;            (*p)++;           *(p++);

b) O que quer dizer *(p+10);?

RESPOSTA:
a) A diferença é como segue:
P++ -> incrementa o ponteiro
(*p)++ -> incrementa o conteúdo do local onde o ponteiro aponta
*(p++) -> o conteudo do endereco onde o ponteiro aponta é incrementado
*(p++) -> Nesse caso, mostra-se o conteudo para onde o ponteiro esta
          apontando, e depois incrementa a posicao para onde o ponteiro esta apontando

b) Quer dizer que o conteúdo para onde o ponteiro aponta será mostrado, e depois a posição
   para onde oponteiro aponta será incrementada dez vezes.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[] = {1, 2, 3, 4};
    int *p;
    p = vetor;

    printf("Caso um: %d\n", *p);
    printf("Caso um: %p\n", p++);
    printf("-------------------\n");
    printf("Caso um: %d\n", *p);
    printf("Caso um: %p\n", p);
    printf("Nesse caso, o ponteiro esta apontando para o proximo local na memoria\n\n");

    printf("Caso dois: %d\n", (*p)++);
    printf("Caso dois: %d\n", *p);
    printf("Vetor[1]: %d\n", vetor[1]);
    printf("Nesse caso, o conteudo do endereco onde o ponteiro aponta foi incrementado\n\n");

    printf("Vetor[1] recebendo 52\n");
    vetor[1] = 52;
    printf("Vetor[2] recebendo 62\n");
    vetor[2] = 62;
    printf("Conteudo onde o ponteiro aponta: %d\n", *p);
    printf("Caso tres: %d\n", *(p++));
    printf("Caso tres: %d\n", *p);
    printf("Nesse caso, mostra-se o conteudo para onde o ponteiro esta apontando, e depois incrementa a posicao\npara onde o ponteiro esta apontando\n\n");

    return 0;
}

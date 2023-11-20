/*
Qual serão as saídas do seguinte programa? Explique o motivo.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Algoritmos";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("(a) %d \n", valor);
    // Saída: 20 CORRETO

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("(b) %.1f \n", temp);
    // Saída: 29.0 CORRETO

    /* (c) */
    // Só a primeira letra de nome
    p3 = &nome[0];
    aux = *p3;
    printf("(c) %c \n", aux);
    // Saída: A CORRETO

    /* (d) */
    // A 5a letra de nome
    p3 = &nome[4];
    aux = *p3;
    printf("(d) %c \n", aux);
    // Saída: r CORRETO

    /* (e) */
    // Recebe a string inteira, mais o ponteiro aponta APENAS PARA A PRIMEIRA POSIÇÃO (strings são arrays de chars)
    p3 = nome;
    // Então, ao pedir para mostrar um char e o conteúdo para onde p3 aponta, recebemos só o A
    printf("(e) %c \n", *p3);
    // Saída: A CORRETO

    /* (f) */
    // Recebe a posição inicial e avança 4 (para no r)
    p3 = p3 + 4;
    printf("(f) %c \n", *p3);
    // Saída: r CORRETO

    /* (g) */
    // Diminui uma posição de p3 (o)
    p3--;
    printf("(g) %c \n", *p3);
    // Saída: o CORRETO

    /* <h> */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    // Recebe a primeira posição do vetor
    p4 = vetor;
    idade = *p4;
    printf("(h) %d \n", idade);
    // Saída: 31 CORRETO

    /* (i) */
    // Recebe segunda posição do vetor (avança uma com o +1)
    p5 = p4 + 1;
    idade = *p5;
    printf("(i) %d \n", idade);
    // Saída: 45 CORRETO

    /* (j) */
    // Avança mais uma a partir de p5
    p4 = p5 + 1;
    idade = *p4;
    printf("(j) %d \n", idade);
    // Saída: 27 CORRETO

    /* (l) */
    // A posição para onde p4 aponta (a última) e diminui duas (para na primeira do array)
    p4 = p4 - 2;
    idade = *p4;
    printf("(l) %d \n", idade);
    // Saída: 31 CORRETO

    /* (m) */
    // ATENÇÃO AO ÍNDICE DA MATRIZ
    p5 = &vetor[2] - 1; // Última posição do array e volta uma (para em 45)
    printf("(m) %d \n", *p5);
    // Saída: 45 CORRETO

    /* (n) */
    p5++; // Uma posição para frente de onde p5 aponta no array
    printf("(n) %d \n", *p5);
    // Saída: 27 CORRETO

    return (0);
}
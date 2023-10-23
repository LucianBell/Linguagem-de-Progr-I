/*
Qual serão as saídas do seguinte programa? Explique o motivo.


*/

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

    /* (a) = Valor recebe 10 e após p1 recebe o local na memória de valor. O ponteiro p1 acessa o variável valor e atribui 20 */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("(a) %d \n", valor);

    /* (b) = Temp recebe o valor. Inicia p2 e recebe o local de memória de temp. Após p2 acessa a variável temp e incrementa 29 sendo o resultado.*/
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("(b) %.1f \n", temp);

    /* (c) = P3 recebe o Local de memória de nome e aux contem o primeiro caractere de 'nome'. Após impprime a letra A por ser um char .  */
    p3 = &nome[0];
    aux = *p3;
    printf("(c) %c \n", aux);

    /* (d) = Imrprime a quarta posição da palavra algoritmos que é R */
    p3 = &nome[4];
    aux = *p3;
    printf("(d) %c \n", aux);

    /* (e) = Imprime o primeiro caracter de nome que é A*/
    p3 = nome;
    printf("(e) %c \n", *p3);

    /* (f) = Imprime um caracter de nome na quarta casa o qual é R */
    p3 = p3 + 4;
    printf("(f) %c \n", *p3);

    /* (g) = Imrpime um casa anterior a R, a qual é O */
    p3--;
    printf("(g) %c \n", *p3);

    /* <h> = Resulta em 31*/
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("(h) %d \n", idade);

    /* (i) = Resulta em 45 pois incremenra o vetor deslocando uma casa para direira / incrementando */
    p5 = p4 + 1;
    idade = *p5;
    printf("(i) %d \n", idade);

    /* (j) = Resulta em 27 pois incrementa mais um no resultado anterior */
    p4 = p5 + 1;
    idade = *p4;
    printf("(j) %d \n", idade);

    /* (l) = Resulta em 31 pois volta dois vetores*/
    p4 = p4 - 2;
    idade = *p4;
    printf("(l) %d \n", idade);

    /* (m) = 45 */
    p5 = &vetor[2] - 1;
    printf("(m) %d \n", *p5);

    /* (n) = incrementa mais um, então 27 */
    p5++;
    printf("(n) %d \n", *p5);

    return (0);
}

/*
(a) 20
(b) 29.0
(c) A
(d) r
(e) A
(f) r
(g) o
(h) 31
(i) 45
(j) 27
(l) 31
(m) 45
(n) 27
*/
/*
Faça um programa que leia 3 notas de N alunos aluno e calcule 
a média final de cada um deles mostrando-as ao final da execução.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantAlunos = 0, contador = 0, contadorNotas = 0;
    float notaAtual = 0.0, mediaAtual = 0.0;

    printf("Quantos alunos terão suas notas inseridas: ");
    scanf("%d", &quantAlunos);

    float medias[quantAlunos];

    while (contador < quantAlunos)
    {
        while (contadorNotas < 3)
        {
            printf("Insira a nota do aluno: ");
            scanf("%f", &notaAtual);
            mediaAtual += notaAtual;
            contadorNotas++;
        }

        medias[contador] = mediaAtual / 3; 
        notaAtual = 0;
        mediaAtual = 0;
        contadorNotas = 0;

        contador++;
    }

    contador = 0;
    while (contador < quantAlunos)
    {
        printf("Nota do aluno %d: %.2f\n", (contador+1), medias[contador]);
        contador++;
    }
    

    return 0;
}

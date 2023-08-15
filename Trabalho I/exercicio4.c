/*
Faça um programa que leia o tempo de duração de um evento em uma
fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duracaoSegundos, horas, minutos, segundos;

    printf("Digite o tempo de duração em segundos: ");
    scanf("%d", &duracaoSegundos);

    horas = duracaoSegundos / 3600;          
    duracaoSegundos %= 3600;                 
    minutos = duracaoSegundos / 60;         
    segundos = duracaoSegundos % 60;        

    printf("Tempo de duração: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
    
    return 0;
}

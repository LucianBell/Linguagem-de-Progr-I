/*
Faça um programa que leia uma frase fornecida pelo usuário e imprima a frase letra por letra. 
Dica: Utilize um laço de repetição para isso
*/

#include <stdio.h>

int main()
{

char frase[100];

printf ("Digite uma frase:   ");
fgets (frase, sizeof (frase), stdin);

printf ("Sua frase letra por letra: \n");
for (int loop = 0; frase[loop] != '\0'; loop++) 
{
if (frase [loop] != '\n' && frase [loop] != '\r')
{
    printf ("%c\n", frase[loop]);
}
}
return 0;
}
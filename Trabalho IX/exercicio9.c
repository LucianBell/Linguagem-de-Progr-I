/*
Criar uma função que receba como parâmetro o ano e retorne 1 se ele for bissexto e 0 se não for bissexto.A função main deve mostrar a mensagem apropriada.
Dicas: Um ano é bissexto se for divisivel por 400.
Um ano também é bissexto se for divisivel por 4.
Assim o ano 2000 foi bissexto (2000 / 400 = 5). Já o ano 1900 não foi bissexto (1900 / 400 = 4 e resto 3) pois 1900 não é divisivel por 400
*/

#include <stdio.h>

int ehBissexto(int ano)
{
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0)))
    {
        return 1; // É bissexto
    }
    else
    {
        return 0; // Não é bissexto
    }
}

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano))
    {
        printf("%d é um ano bissexto.\n", ano);
    }
    else
    {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}
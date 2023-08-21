/*
Faça uma variação do programa anterior que use apenas 2 variáveis.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[3], contador = 0;

    while (contador < 3)
    {
        printf("Inserir valor: ");
        scanf("%d", &numeros[contador]);

        contador++;
    }
    
    contador = 0;

    printf("Soma: %d", (numeros[0] + numeros[1] + numeros[2]));

    return 0;
}

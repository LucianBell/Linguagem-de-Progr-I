/*
Uma pesquisa sobre o sabor de um novo refrigerante  foi   feita com várias pessoas. 
As mesmas preenchiam uma tabela com 'O' de ótimo,   'B'  de bom,   'R'  de  regular  e  
'U'  de  ruim.  Faça um programa   que   leias   as   respostas   coletadas   pela   pesquisa 
(as letras   'O',   'B',   'R'   e   'U')   sendo  que   o   fim  das   respostas   será indicado 
por   um   traço   '-'.   Outras   letras   devem   ser desconsideradas. O programa deve também:

• indicar a quantidade de cada resposta,
• indicar o total de respostas,
• calcular a porcentagem de cada uma das respostas, e
• indicar se a soma de respostas 'O' e 'B' é maior ou não que a soma de respostas 'R' e 'U'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantRespostas = 0, respostasO = 0, respostasB = 0, respostasR = 0, respostasU = 0;
    float percO, percB, percR, percU;
    char respostaAtual;
    
    while (respostaAtual != '-')
    {    
        scanf("%c", &respostaAtual);

        switch (respostaAtual)
        {
        case 'o':
        case 'O':
            printf("Resposta O registrada\n");
            quantRespostas++;
            respostasO++;
            break;

        case 'b':
        case 'B':
            printf("Resposta B registrada\n");
            quantRespostas++;
            respostasB++;
            break;

        case 'r':
        case 'R':
            printf("Resposta R registrada\n");
            quantRespostas++;
            respostasR++;
            break;

        case 'u':
        case 'U':
            printf("Resposta U registrada\n");
            quantRespostas++;
            respostasU++;
            break;

        default:
            break;
        }
    }

    
    printf("Quantidade de respostas: %d\n", quantRespostas);
    printf("Quantidade de respostas O: %d\n", respostasO);
    printf("Quantidade de respostas B: %d\n", respostasB);
    printf("Quantidade de respostas R: %d\n", respostasR);
    printf("Quantidade de respostas U: %d\n", respostasU);

    return 0;
}

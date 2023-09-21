/*
Considere que o cálculo da multa para o pagamento de um determinado imposto varia de acordo com a tabela a seguir:

Valor do Imposto original	Multa por mês de atraso
até R$ 99,99	R$ 2,00
até R$ 100,00 a R$ 500,00	R$ 4,00
mais de R$ 500,00	R$ 8,00


Por exemplo, se um imposto no valor de R$ 200,00 estiver 3 meses atrasados, o valor da multa a ser paga será de 
R$ 12,00 (3 x 4 Reais). Escreva um programa completo que leia inicialmente o valor do imposto e o número de meses
de atraso no pagamento (esses valores devem ser fornecidos pelo usuário do programa via o teclado). De acordo com 
o valor do imposto, o programa deve calcular a multa devida e  imprimir uma mensagem para o usuário com o valor da
multa e o novo valor do imposto, já acrescido da multa. Lembre-se de que o valor deverá ser um float e a saída 
formatada corretamente no que diz respeito ao número de casas decimais
*/

#include <stdio.h>

int main() {
    float valor_imposto, multa, novo_valor_imposto;
    int meses_atraso;

    printf("Digite o valor do imposto: R$ ");
    scanf("%f", &valor_imposto);

    printf("Digite o número de meses de atraso: ");
    scanf("%d", &meses_atraso);

    if (valor_imposto <= 99.99) {
        multa = meses_atraso * 2.0;
    } else if (valor_imposto <= 500.00) {
        multa = meses_atraso * 4.0;
    } else {
        multa = meses_atraso * 8.0;
    }

    novo_valor_imposto = valor_imposto + multa;

    printf("Multa a ser paga: R$ %.2f\n", multa);
    printf("Novo valor do imposto: R$ %.2f\n", novo_valor_imposto);

    return 0;
}
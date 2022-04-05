/*
3.19 Calculadora de comissão de vendas. Uma grande
companhia química paga seus vendedores por comissão.
Os vendedores recebem R$ 200,00 por semana, mais 9
por cento de suas vendas brutas nessa semana. Por exemplo,
um vendedor que comercialize R$ 5.000,00 em produtos
químicos em uma semana receberá R$ 200,00 e
mais 9 por cento de R$ 5.000,00, ou seja, receberá um
total de R$ 650,00. Desenvolva um programa que peça os
valores brutos de cada vendedor na semana que passou,
calcule e apresente o valor que esse vendedor deverá receber.
Processe os valores referentes a um vendedor por vez.
Veja um exemplo do diálogo de entrada/saída:
*/


//EXEMPLO

/*
Informe a venda em reais (-1 para terminar):
5.000,00
O pagamento é de: R$650,00
Informe a venda em reais (-1 para terminar):
1.234,56
O pagamento é de: R$311,11
Informe a venda em reais (-1 para terminar):
1.088,89
O pagamento é de: R$298,00
Informe a venda em reais (-1 para terminar): -1
*/

#include<stdio.h>

double sell;
double fix = 200;
double comission;
double sumfixcom;

int main(int argc, char const *argv[]){
    while (sell != -1){
    
    printf("Input the sells value [-1 exit]: ");
    scanf("%lf", &sell);

    comission = sell * 0.09;

    sumfixcom = fix + comission;

    printf("The payment will be:%.2f ", sumfixcom);

    }
    
    return 0;
}

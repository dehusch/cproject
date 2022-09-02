/*
Uma pessoa investe R$ 1.000,00 em uma conta de poupança que rende juros de 5 por cento. 
Supondo que os juros sejam deixados na conta, calcule e apresente o valor existente na 
conta ao final de cada ano em um período de dez anos. Use a fórmula a seguir para determinar 
esses valores:

    vf = vp(1 + t)n *(n é elevado a potencia)
    vp é o valor original investido (ou seja, o principal);
    t é a taxa de juros anual;
    n é o número de anos;
    vf é o valor do depósito ao final do n-ésimo ano.

Tem que incluir a biblioteca math.h para usar o comando pow(x,y), onde x é elevado a
potencia de y.

Para vincular uma biblioteca usar os -lm (ex: gcc -lm)
*/

#include<stdio.h>
int main()
{
    double valor;
    double principal = 1000.0;
    double taxa = 0.05;
    int ano;

    printf("%4s%21s\n", "Ano", "Valor da conta");

    for (ano = 1; ano <- 10; ano++)
    {
        valor = principal * pow(1.0 + taxa, ano);
        printf("%4d%21.2f\n", ano, valor);
    }
    return 0;
    
}
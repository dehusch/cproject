/*
Calculadora de juros. Os juros simples sobre um
empréstimo  calculados a partir da fórmula
juros = principal * taxa * dias / 365;
Essa fórmula considera que taxa seja a taxa de juros
anual e, portanto, inclui a divisão por 365 (dias). Desenvolva
um programa que aceite principal, taxa e dias
para vários empréstimos, calcule e apresente os juros simples
para cada empréstimo, usando a fórmula apresentada.
Veja um exemplo do diálogo de entrada/saída:
*/

//EXEMPLO

/*
Informe o valor principal do empréstimo
(-1 para terminar): 1.000,00
Informe a taxa de juros: 0,1
Informe o prazo do empréstimo em dias: 365
O valor dos juros é de R$100,00
Informe o valor principal do empréstimo
(-1 para terminar): 1.000,00
Informe a taxa de juros: 0,08375
Informe o prazo do empréstimo em dias: 224
O valor dos juros é de R$51,40
Informe o valor principal do empréstimo
(-1 para terminar): 10.000,00
Informe a taxa de juros: 0,09
Informe o prazo do empréstimo em dias: 1460
O valor dos juros é de R$3600,00
Informe valor principal do empréstimo
(-1 para terminar): -1
*/

#include<stdio.h>

double value;
double taxrate;
double days;
double rate;

int main(){
    printf("Input loan value [-1 exit]: ");
    scanf("%lf", &value);

    while (value != -1){
        printf("Input the tax rate: ");
        scanf("%lf", &taxrate);

        printf("Input the term of loan [days]: ");
        scanf("%lf", &days);

        rate = value * taxrate * days / 365;

        printf("The rate value is: %.2lf\n\n", rate);

        printf("Input loan value [-1 exit]: ");
        scanf("%lf", &value);

    }
    
    return 0;
}




/*
3.47diferença
Calculadora de crescimento populacional mun-
dial. Use a Web para determinar a população mundial
atual e sua taxa de crescimento anual. Escreva uma
aplicação que leia esses valores, depois apresente a po-
pulação mundial estimada após um, dois, três, quatro e
cinco anos.

Calculo = Nasc - Mortes + Saldo Migratorio / populacão total
Resultado em %

Pop atual = 8 Bilhões
Taxa de crescimento = 1%
*/
#include<stdio.h>

int main(){

    float pop = 8000000000;
    float cres = 1.01;
    int anos = 1;
    float calc = 1;
    int cont = 0;

    printf("Digite a quantidade de anos: ");
    scanf("%d", &anos);

    printf("\nPoputação: %.0f\nCrescimento anual: 1%%\n\n", pop);

    calc = pop;

    while (cont < anos){
        calc = calc * 1.01;
        cont++;
    }

    printf("\nCrescimento em %d ano(s) = %.0f\n\n", anos , calc);
}

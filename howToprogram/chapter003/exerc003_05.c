/*
Combine as instruções que você escreveu no Exercício 3.4
em um programa que calcule a soma dos inteiros de 1 a
10. Use a estrutura while para realizar um loop pelas
instruções de cálculo e incremento. O loop deverá termi-
nar quando o valor de x chegar a 11.
*/
#include <stdio.h>

int main(void){
    int soma, x;
    x = 1;
    soma = 0;

    while (x <= 10){
        soma = soma + x;
        ++x;
        printf("soma é = %d\n", soma);
        printf("x é = %d\n", x);
    }
    printf("A soma total é: %d\n", soma);
    return 0;
}




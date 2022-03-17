/*
Combine as instruções que você escreveu no Exercício 3.4
em um programa que calcule a soma dos inteiros de 1 a
10. Use a estrutura while para realizar um loop pelas
instruções de cálculo e incremento. O loop deverá termi-
nar quando o valor de x chegar a 11.
*/
#include <stdio.h>

int x = 1;
int soma = 0;

int main(){
        
    while (x <= 10){
        soma = soma + x;
        printf("Soma = %d\n", soma);
    }
    return 0;
}




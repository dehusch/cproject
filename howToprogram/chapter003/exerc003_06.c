/*
Determine os valores das variáveis produto e x depois
que o cálculo a seguir for realizado. Suponha que pro-
duto e x tenham o valor 5 quando a instrução começar
a ser executada.
*/
#include<stdio.h>

int produto, x;

int main(){
    produto = 5;
    x = 5;
    produto *= x++;
    printf("Produto = %d", produto);
    printf("X = %d", x);

    return 0;
}
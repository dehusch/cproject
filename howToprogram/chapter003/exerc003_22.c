/*
Pré-incrementando versus pós-incrementando.
Escreva um programa que demonstre a diferença entre
pré-decrementar e pós-decrementar usando o operador
de decremento --.
*/
#include<stdio.h>

int x;

int main(){

    x = 6;
    printf("%d\n", x);
    printf("%d\n", --x);
    printf("%d\n", x);

    x = 6;
    printf("%d\n", x);
    printf("%d\n", x--);
    printf("%d\n", x);

    return 0;
}
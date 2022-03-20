/*
Escreva um programa em C que use as instruções do Exer-
cício 3.7 para calcular x elevado à potência y. O programa
deverá ter uma estrutura de controle de repetição while.
*/
#include<stdio.h>

int x, y, potencia;

x = 3;
y = 2;

int main(){
    potencia = x*(x*y);
    printf("%d", potencia);
    }
    
    return 0;
}   

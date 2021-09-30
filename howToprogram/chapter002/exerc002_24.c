/*
Par ou ímpar. Escreva um programa que leia um in-
teiro, determine e imprima se ele é par ou ímpar. [Dica:
use o operador módulo. Um número par é um múlti-
plo de dois. Qualquer múltiplo de dois gera resto zero
quando dividido por 2.]
*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("O numero é par!");
    }

    if (num % 2 != 0){
        printf("O numero é impar!");
    }

    return 0;
}
/*
Múltiplos. Escreva um programa que leia dois inteiros,
determine e imprima se o primeiro for um múltiplo do
segundo. [Dica: use o operador módulo.]
*/
#include <stdio.h>

int main(){
    
    int num1;
    int num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if ( num1 % num2 == 0){
        printf("%d é mutiplo de %d\n", num1, num2);
        printf("de fator %d\n", num1 / num2);

    }

    if (num1 % num2 != 0){
        printf("%d não é mutiplo de %d\n", num1, num2);

        return 0;
    }
}
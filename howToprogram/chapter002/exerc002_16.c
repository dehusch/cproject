/*
Aritmética. Escreva um programa que peça ao usuá-
rio que digite dois números, obtenha esses números e
imprima a soma, o produto, a diferença, o quociente e o
módulo (resto da divisão).
*/
#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite um numero e pressione Enter: "); 
    scanf("%d", &x);
    printf("Digite outro numero e pressione Enter: ");  
    scanf("%d", &y);

    printf("A soma é: %d\n", x + y);
    printf("O produto é: %d\n", x * y);
    printf("A diferença é: %d\n", x - y);
    printf("O quociente é: %d\n", x / y);
    printf("O modulo é: %d\n", x % y);
}
/*2.5 Usando as instruções que você escreveu no Exercício 2.4,
escreva um programa completo que calcule o produto de
três inteiros.*/
#include<stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;

    //adress a integer number to variable
    printf("Type the first value:"); scanf("%d", &number1);
    printf("Type the Second value:"); scanf("%d", &number2);
    printf("Type the Third value:"); scanf("%d", &number3);

    printf("%d X %d x %d = ", number1, number2, number3); 
    int result = number1 * number2 * number3;
    printf("%d\n", result);

    return 0;
}
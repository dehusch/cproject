/*Write a calc programm
with 3 integer numbers*/
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

//RESPOSTAS

/*
a) /* Calcula o produto de três inteiros */
/*
b) int x, y, z, resultado;
c) printf( “Digite três inteiros: ” );
d) scanf( “%d%d%d”, &x, &y, &z );
e) result = x * y * z;
f) printf( “O produto é %d\n”, resultado );
*/


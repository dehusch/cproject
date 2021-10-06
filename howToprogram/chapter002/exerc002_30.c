/*
Separando dígitos em um inteiro. Escreva um progra-
ma que leia um número de cinco dígitos, separe o número
em dígitos individuais e imprima os dígitos separados um
do outro por três espaços cada um. [Dica: use combinações
da divisão inteira e da operação módulo.] Por exemplo, se o
usuário digitar 42139, o programa deverá exibir
4 2 1 3 9
*/

/* Exercise 2.30 Solution */
#include <stdio.h>

    int main(){

    int number; /* number input by user */
    int temp1; /* first temporary integer */
    int temp2; /* second temporary integer */

    printf( "Enter a five-digit number: " ); /* prompt user */
    scanf( "%d", &number ); /* read integer */
    printf( "%d ", number / 10000 ); /* print left-most digit */
    
    temp2 = number % 10000;

    printf( " %d ", temp2 / 1000 );

    temp1 = temp2 % 1000;

    printf( " %d ", temp1 / 100 );

    temp2 = temp1 % 100;

    printf( " %d ", temp2 / 10 );

    temp1 = temp2 % 10;

    printf( " %d\n", temp1 ); /* print right-most digit */
    
    return 0; /* indicate successful termination */
    
} /* end main */

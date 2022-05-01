/*
3.39 Contando 7s. Escreva um programa que leia um inteiro
e determine e imprima quantos dígitos no inteiro são
algarismos 7.
*/
#include <stdio.h>
int main()
{
    int number;
    int numCopy;
    int factor = 10000;
    int digit;
    int sevens = 0;
    
    printf( "Enter a 5-digit number: " );
    scanf( "%d", &number );

    numCopy = number; //ie. 12375 = numCopy

    while ( factor >= 1 ) {
        digit = numCopy / factor; //digit = 12375 / 10000

        if ( digit == 7 ) { 
            ++sevens;
        }
        numCopy = numCopy % factor; 
        factor = factor / 10;
    }
    
    printf( "The number %ld has %d seven(s) in it\n", number, sevens );
    return 0;
}
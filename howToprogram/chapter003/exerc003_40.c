/*
Padrão de asteriscos em xadrez. Escreva um programa
que apresente o seguinte padrão de tabuleiro de
xadrez:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
Seu programa deverá usar apenas três instruções de saída,
uma de cada das seguintes formas:
printf( “* “ );
printf( “ “ );
printf( “\n” );
*/
#include <stdio.h>

int main()
{
    int side = 8;
    int row;
    int mod;

    while ( side >= 1 ) {
        row = 8;
        mod = side % 2;
        
        while ( row >= 1 ) {
            if ( mod != 0 ) {
            printf( " " );
            mod = 0;
        }
    
        printf( "* " );
        --row;
        }
        
    printf( "\n" );
    --side;
    }
    return 0;
}

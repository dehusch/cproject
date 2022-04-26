/*
3.34 Quadrado de asteriscos vazio. Modifique o programa
que você escreveu no Exercício 3.33 para que ele
exiba um quadrado vazio. Por exemplo, se seu programa
ler um tamanho 5, ele deverá exibir
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int lado;
    int posColuna;
    int tamanho;
    
    printf( "Digite o numero de lado: " );
    scanf( "%d", &lado );
    
    tamanho = lado; /* set tamanho counter to length of lado */
    
    /* loop lado number of times */
    while ( lado > 0 ) {
        posColuna = tamanho; /* set row counter to length of tamanho */
        /* loop posColuna number of times */
        while ( posColuna > 0 ) {
            /* if lado or row counter is 1 or tamanho print an '*' */
            if ( tamanho == lado ) {
            printf( "*" );
            }   /* end if */
            else if ( lado == 1 ) {
            printf( "*" );
            }/* end else if */
            else if ( posColuna == 1 ) {
            printf( "*" );
            } /* end else if */
            else if ( posColuna == tamanho ) {
            printf( "*" );
            } /* end else if */
            else { /* otherwise, print a space */
            printf( " " );
            } /* end else */
            --posColuna; /* decrement row counter */
        } /* end inner while */
        printf( "\n" ); /* new line for next row */
        --lado; /* decrement lado counter */
    } /* end outer while */
    //Testing git fetch
    return 0;
}
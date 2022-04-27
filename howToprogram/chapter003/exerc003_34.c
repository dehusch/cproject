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
    
    tamanho = lado; //define o tamanho igual o lado
    
    while ( lado > 0 ) {
        posColuna = tamanho;
        while ( posColuna > 0 ) {
            //Se Tamanho for = ao lado, imprima "*"
            if ( tamanho == lado ) {
            printf( "*" );
            }
            //Se lado == 1, imprima "*"
            else if ( lado == 1 ) {
            printf( "*" );
            }
            //Se posColuna for = 1, imprima "*"
            else if ( posColuna == 1 ) {
            printf( "*" );
            }
            //Se posColuna = tamanho, imprima "*"
            else if ( posColuna == tamanho ) {
            printf( "*" );
            }
            //Ou então, imprima " "
            else {
            printf( " " );
            }
            --posColuna; //decrementa o posColuna
        }
        printf( "\n" );
        --lado; //decrementa o lado
    }
    return 0;
}
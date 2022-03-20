/*
Escreva um programa em C que use as instruções do Exer-
cício 3.7 para calcular x elevado à potência y. O programa
deverá ter uma estrutura de controle de repetição while.
*/
#include <stdio.h>
int main( void ){
    int x, y, i, potência; /* declara variáveis */
    i = 1; /* inicializa i */
    potência = 1; /* inicializa potência */
    printf("Digite valor de X: ");
    scanf( "%d", &x ); /* lê do usuário o valor para x */
    printf("Digite valor de y: ");
    scanf( "%d", &y ); /* lê do usuário o valor para y */
    
    while ( i <= y ) { /* loop while i é menor ou igual a y */
        potência *= x; /* multiplica potência por x */
        ++i; /* incrementa i */
    } /* fim do while */
    printf( "%d", potência ); /* exibe potência */
    return 0;
} /* fim da função main */
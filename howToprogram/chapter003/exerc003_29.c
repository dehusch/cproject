//3.29 O que o programa a seguir exibe?
#include <stdio.h>

int main( void ){
    int contador = 1; /* inicializa contador */
    while ( contador <= 10 ) { /* loop 10 vezes*/
        /* exibe linha de texto */
        printf("%s\n", contador);
        printf( "%s\n", contador % 2 ? "****" : "++++++++" );
        contador++; /* incrementa contador */
    } /* fim do while */

    return 0; /* indica que o programa terminou com sucesso */
} /* fim da função main */
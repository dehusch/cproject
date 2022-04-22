#include <stdio.h>
int main( void ){

    int linha = 10; /* inicializa linha*/
    int coluna; /* declara coluna */
    
    while ( linha >= 1 ) { /* loop até linha < 1 */
        coluna = 1; /* define coluna como 1 quando a iteração começa */
    
            while ( coluna <= 10 ) { /* loop 10 vezes */
                printf( "%s", linha % 2 ? "<":">" ); /* saída */
                coluna++; /* incrementa coluna*/
            } /* fim do while interno */
    
        linha--; /* decrementa linha */
        printf( "\n" ); /* inicia nova linha de saída */
        
    } /* fim do while externo */
    return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */
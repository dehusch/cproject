/* Usando o comando break em uma estrutura for */
#include <stdio.h>
/* função main inicia a execução do programa */
int main()
{
    int x; /* contador */
    
    /* loop por 10 vezes */
    for ( x = 1; x <= 10; x++ ) {
    /* se x é 5, encerra o loop */
        if ( x == 5 ) {
            break; /* sai do loop somente se x é 5 */
        } /* fim do if */
    
        printf( "%d ", x ); /* exibe valor de x */
    } /* fim de for */

    printf( "\nSaiu do loop em x == %d\n", x );
    return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */
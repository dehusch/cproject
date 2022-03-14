/*
C também fornece o operador unário de incremento ++ e o operador
 unário de decremento --. Se uma variável c é incrementada em 1, 
 o operador de incremento ++ pode ser usado no lugar das expressões
 c = c + 1 ou c + = 1. Se um operador de incremento ou de decremento 
 for colocado antes de uma variável (ou seja, se ele for prefixado), 
 ele é chamado de operador de pré-incremento ou de pré-decremento, 
 respectivamente. Se um operador de incremento ou decremento é 
 colocado depois de uma variável, ele é chamado de operador de 
 pós-incremento ou de pós-decremento, respectivamente. Pré-
-incrementar (ou pré-decrementar) uma variável faz com que a 
variável seja incrementada (ou decrementada) em 1, sendo o novo valor 
da variável, então, usado na expressão em que ela aparece. Pós-incrementar 
(ou pós-decrementar) uma variável faz com que o valor corrente da 
variável seja primeiramente usado na expressão em que ela aparece, 
para depois ser incrementado (ou decrementado) por 1.
Pós-incrementar a variável c faz com que ela seja incrementada depois 
de ser usada no comando de printf. Pré-incrementar a variá­vel
c faz com que ela seja incrementada antes de ser usada no comando printf.


Operador
++              ++a     Incrementa a em 1, e então usa o novo valor de a na expressão em que a estiver.
++              a++     Usa o valor corrente de a na expressão em que a estiver, e então incrementa a em 1.
--              --b     Decrementa b em 1, e então usa o novo valor de b na expressão em que b estiver.
--              b--     Usa o valor corrente de b na expressão em que b estiver, e então decrementa b em 1.

*/

/* Figura 3.13: fig03_13.c
Pré-incrementando e pós-incrementando */
#include <stdio.h>
/* função main inicia a execução do programa */
int main( void ){
    int c; /* define variável */
    /* demonstra pós-incremento */
    c = 5; /* atribui 5 a c */
    printf( "%d\n", c ); /* imprime 5 */
    printf( "%d\n", c++ ); /* imprime 5 e depois pós-incrementa*/
    printf( "%d\n\n", c ); /* imprime 6 */
    /* demonstra pré-incremento */
    c = 5; /* atribui 5 a c */
    printf( "%d\n", c ); /* imprime 5 */
    printf( "%d\n", ++c ); /* pré-incrementa e depois imprime 6 */
    printf( "%d\n", c ); /* imprime 6 */
    return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */
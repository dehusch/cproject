/*
A estrutura de repetição for
A estrutura de repetição for trata de todos os detalhes da repetição 
controlada por contador. Para ilustrar seu poder, reescrevere-
mos o programa da Figura 4.1. O resultado aparece na Figura 4.2.
O programa opera da seguinte forma: quando a estrutura for começa
a ser executada, a variável de controle contador é declara-
da e inicializada com 1. Então, é verificada a condição de 
continuação do loop, contador <= 10. Como o valor inicial do 
contador é 1, a condição é satisfeita; assim, a instrução printf 
(linha 13) imprime o valor de contador, ou seja, 1. A variável 
de controle contador é, então, incrementada na expressão contador++, 
e o loop começa novamente com o teste de continuação do loop. Como a
variável de controle agora é igual a 2, o valor final não é excedido, 
e, assim, o programa executa novamente a instrução printf. Esse 
processo se estende até que a variável de controle contador seja 
incrementada ao seu valor final, que é 11; isso faz com que o teste
de continuação do loop não seja satisfeito, e a repetição termine. 
O programa recomeça com a execução do primeiro comando depois
da estrutura for (nesse caso, o comando return no fim do programa).
*/


/* Fig. 4.2: fig04_02.c
Repetição controlada por contador com a estrutura for */
#include <stdio.h>
/* função main inicia a execução do programa */
    int main( void ){
    int contador; /* declara o contador */
/* inicialização, condição de repetição e incremento
são todos incluídos no cabeçalho da estrutura for. */
    for ( contador = 1; contador <= 10; contador++ ) {
        printf( "%d\n", contador );
    } /* fim do for */
    return 0; /* indica que o programa terminou com sucesso */
} /* fim da função main */
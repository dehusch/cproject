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
    
int main( void ){
    
    int contador; /* declara o contador */
    int i;
    int j;
    
    for ( contador = 1; contador <= 10; contador++ ) {
        printf( "%d\n", contador );
    }
    for ( i = 1; i <= 100; i++ ){ //Alterne a variável de controle de 1 a 100 em incrementos de 1.
        printf("%d", i);
    }
    for ( i = 100; i >= 1; i-- ){ //Alterne a variável de controle de 100 a 1 em incrementos de -1 (decrementos de 1).
        printf("%d", i);
    }
    for ( i = 7; i <= 77; i += 7 ){//Alterne a variável de controle de 7 a 77 em intervalos de 7.
        printf("\n%d\n", i);
    }
    for ( i = 20; i >= 2; i -= 2 ){ //Alterne a variável de controle de 20 a 2 em intervalos de -2.
        printf("\n%d\n", i);
    }
    for ( j = 2; j <= 17; j += 3 ){ //sequência de valores: 2, 5, 8, 11, 14, 17.
        printf("\n%d\n", j);
    }
    for ( j = 44; j >= 0; j -= 11 ){ //sequência de valores: 44, 33, 22, 11, 0.
         printf("\n%d\n", j);
    }
    return 0;
    }
/*Programa de exibição de gráfico de barras. Uma
aplicação interessante dos computadores é a de desenhar
gráficos e gráficos de barras (às vezes, chamados ‘histogramas’).
Escreva um programa que leia cinco números
(entre 1 e 30). Para cada número lido, seu programa
deverá exibir uma linha contendo esse número de asteriscos
adjacentes. Por exemplo, se seu programa ler o
número sete, ele deverá exibir *******.
*/

/*The program must read and show five results in the
end of the program. Each number will be displayed "*"
 in a new line*/
#include <stdio.h>
int main(void){
int i;
int j;
int number;
    printf( "Enter 5 numbers between 1 and 30: " );
    for ( i = 1; i <= 5; i++ ) {
        scanf( "%d", &number );
        for ( j = 1; j <= number; j++ ) {
            printf( "*" );
        }
        printf( "\n" );
    }
    return 0;
}
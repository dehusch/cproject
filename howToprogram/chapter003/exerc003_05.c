/*
Escreva uma instrução em C que possibilite realizar as
seguintes tarefas:
a) declarar variáveis soma e x para que sejam do tipo int.
b) inicializar variável x em 1.
c) inicializar variável soma em 0.
d) somar variável x à variável soma e atribuir o resulta-
do à variável soma.
e)imprimir 'A soma é:' seguido pelo valor da variá­vel soma.
*/
#include <stdio.h>

int soma = 0;
int x = 1;

int main(){
    soma = soma + x;
    printf("Soma = %d\n", soma);

    return 0;
}




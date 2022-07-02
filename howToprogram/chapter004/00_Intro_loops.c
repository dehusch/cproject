/*
4.3 Repetição controlada por contador
A repetição controlada por contador exige:
1. O nome de uma variável de controle (ou contador do loop).
2. O valor inicial da variável de controle.
3. O incremento (ou decremento) pelo qual a variável de controle é modificada a cada execução do loop.
A condição que testa o valor final da variável de controle (isto é, se o looping deve continuar).
Considere o programa simples mostrado na Figura 4.1, que imprime os números de 1 até 10. A declaração
int contador = 1; /* inicialização */

/* Figura 4.1: fig04_01.c
Repetição controlada por contador */
#include <stdio.h>
/* função main inicia a execução do programa */
int main( void )
    {
    int contador = 1; /* inicialização */
    while ( contador <= 10 ) { /* condição de repetição */
        printf ( "%d\n", contador ); /* exibe contador */
        ++contador; /* incrementa */
    } /* fim do while */
    while ( ++contador <= 20){ //colocando o incremento direto na condição.
        printf("%d\n", contador);
    }
    return 0; /* indica que o programa foi concluído com sucesso */
} /* fim da função main */
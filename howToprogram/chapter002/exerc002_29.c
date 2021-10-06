/*
Valor inteiro de um caractere. Vamos dar um passo
adiante. Neste capítulo, você aprendeu sobre inteiros e o
tipo int. C também pode representar letras maiúsculas,
letras minúsculas e uma grande variedade de símbolos
especiais. C usa inteiros pequenos internamente para re-
presentar diferentes caracteres. O conjunto de caracteres
que um computador utiliza, juntamente com as repre-
sentações de inteiros correspondentes a esses caracteres,
é chamado de conjunto de caracteres desse computador.
Você pode imprimir o equivalente da letra A maiúscula,
por exemplo, executando a instrução
printf( “%d”, ‘A’ );
Escreva um programa em C que imprima os equivalentes
inteiros de algumas letras maiúsculas, letras minúsculas,
dígitos e símbolos especiais. No mínimo, determine os
equivalentes inteiros de A B C a b c 0 1 2 $ * +
/ e o caractere de espaço em branco.
*/

/* Exercise 2.29 Solution */
#include <stdio.h>
    
    int main(){

    char especial; //Pode inserir uma letra, numero, ou char especial
    
    printf( "Digite um numero, letra ou caractere especial: " );
    scanf( "%c", &especial );
    printf( "%c's inteiro é equivalente a %d\n", especial, especial );
    
    return 0;
}

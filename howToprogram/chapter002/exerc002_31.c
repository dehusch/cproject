/*
2.31Tabela de quadrados e cubos. Usando apenas as técni-
cas que você aprendeu neste capítulo, escreva um programa
que calcule os quadrados e os cubos dos números 0 a 10, e
use tabulações para imprimir a seguinte tabela de valores:
número      quadrado        cubo
0           0               0
1           1               1
2           4               8
3           9               27
4           16              64
*/
#include <stdio.h>

int main(){

    int num=0;

    printf("Numero  Quadrado    Cubo\n");
    printf("%d       %d           %d\n", num, num*num, num*num*num);

    num = num + 1;

    printf("%d       %d           %d\n", num, num*num, num*num*num);

    num = num + 1;

    printf("%d       %d           %d\n", num, num*num, num*num*num);

    num = num + 1;

    printf("%d       %d           %d\n", num, num*num, num*num*num);

    num = num + 1;

    printf("%d       %d          %d\n", num, num*num, num*num*num);

    num = num + 1;

    printf("%d       %d          %d\n", num, num*num, num*num*num);

    num = num + 1;

    printf("%d       %d          %d\n", num, num*num, num*num*num);


    return 0;
}
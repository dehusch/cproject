/*
3.7
Escreva instruções em C que:
a) leiam a variável inteira x com scanf.
b) leiam a variável inteira y com scanf.
c) inicializem a variável inteira i em 1.
d) inicializem a variável inteira potência em 1.
e) multipliquem a variável potência por x e atribua o
resultado à potência.
f) incrementem a variável i em 1.
g) testem i para verificar se ele é maior ou igual a y na
condição de uma estrutura while.
h) exibam a variável inteira potência com printf.
*/
#include<stdio.h>

int x, y, i, potencia;

int main(){
    printf("Digite o Valor de X: ");
    scanf("%d", &x);
    printf("X = %d\n", x);
    printf("Digite o Valor de Y: ");
    scanf("%d", &y);
    printf("Y = %d\n", y);
    
    return 0;
}
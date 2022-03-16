/*Escreva uma única instrução em C que possibilite reali-
zar as seguintes tarefas:
a) atribuir a soma de x e y a z e incrementar o valor de
x em 1 após o cálculo.
b) multiplicar a variável produto por 2 usando o ope-
rador *=.
c) multiplicar a variável produto por 2 usando os
operadores = e *.
d) testar se o valor da variável contador é maior do
que 10. Se for, imprimir ‘Contador é maior do
que 10’.
e) decrementar a variável x em 1, depois subtraí-la da
variável total.
f) somar a variável x à variável total, depois decre-
mentar x por 1.
g) calcular o resto após q ser dividido por divisor e
atribuir o resultado a q; escreva essa instrução de
duas maneiras diferentes.
h) imprimir o valor 123.4567 com 2 dígitos de preci-
são. Que valor é impresso?
i) imprimir o valor de ponto flutuante 3.14159 com
três dígitos à direita do ponto decimal. Que valor é
impresso?
*/
#include<stdio.h>
//resposta A
int x = 1;
int y = 1;
int z = 0;



int main(){
    z = x + y;
    x++;
    z = x + y;
    printf("\nA soma é : %d\n", z);

    return 0;
}
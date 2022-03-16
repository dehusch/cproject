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
//resposta A, B e C
int x = 1;
int y = 1;
int z = 0;
int produto = 2;
int contador = 0;
int total = 3;
float q = 0;
float numero = 123.4567;
float pi = 3.14159


int main(){
    z = x + y;
    x++;
    z = x + y;
    produto *=2;
    printf("\nA soma é : %d\n", z);
    printf("%d\n", produto);
    produto = produto * 2;
    printf("%d\n", produto);
    //fim resposta A, B e C
    //Resposta D
    printf("\nResposta do item D\n");
    while(contador <= 10){
        contador = contador + 1;
        if(contador > 10){
            printf("\nContador maior que 10\n");
        }
    }
    //Fim resposta D
    
    //Resposta E
    printf("\nResposta do item E\n");
    x--;
    printf("X = %d\n", x);
    printf("Total = %d\n", total);
    total = total - x;
    printf("Total - X = %d\n", total);
    //Fim da resposta E
    
    //Resposta F
    printf("\nResposta do item F\n");
    printf("Valor de Total = %d\n", total);
    total = total + x;
    printf("Valor de atual X = %d\n", x);
    printf("Total + X = %d\n", total);
    x--; //X era 1 e foi decrementado para 0
    printf("X decrementado = %d\n", x);
    total = total + x;
    printf("Total + X com X decrementado = %d\n", total);
    //Fim da resposta F

    //Resposta G
    printf("\nResposta do item G\n");
    q = 3 != 5;
    printf("%.2f\n", q);
    //Fim da resposta G

    //Resposta H
    printf("\nResposta do item H\n");
    printf("%.2f\n", numero);
    return 0;
}
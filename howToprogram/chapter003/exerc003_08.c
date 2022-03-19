/*
Escreva um programa em C que use as instruções do Exer-
cício 3.7 para calcular x elevado à potência y. O programa
deverá ter uma estrutura de controle de repetição while.
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
    i = 4;
    printf("i = %d\n", i);
    potencia = 1;
    printf("potencia = %d\n", potencia);
    i++;
    printf("i incrementado é = %d\n", i);
    while(i >= y){
        printf("O valor de i é: %d\n", i);
        printf("Digite o valor de Y: ");
        scanf("%d", &y);
        if(y <= i){
            printf("Y ainda é menor ou igual a i\n");
        }
        
    }
    
    return 0;
}   

/*
a) scanf( “%d”, &x );
b) scanf( “%d”, &y );
c) i = 1;
d) potência = 1;
e) potência *= x;
f) i++;
g) if ( i <= y )
h) printf(
 “%d”, potência );
 */
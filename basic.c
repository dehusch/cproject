#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    int idade = 18;
    float salario = 1250.75;
    double porcent_desc = 2.5;
    char genero = 'M';
    float altura = 1.63;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    c = a % b;
    d = a / b;
    printf("Resto da divisao = %d\n", c);
    printf("Resultado da divisao = %d\n", d);
    printf("Idade: %d\n", idade);
    printf("Salario: %f\n", salario);
    printf("Desconto (%%): %f\n", porcent_desc);
    printf("Genero: %c\n", genero);
    printf("Altura: %.3f\n", altura);
    return 0;

}
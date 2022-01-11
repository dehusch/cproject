#include <stdio.h>
#define PI 3.14

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
    float valor1=0, valor2=0;

    
    scanf("%d\n", &a);
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
    
    
    //float do valor1 e valor2
    printf("Digite um valor: \n");
    scanf("%f", &valor1);
    printf("Digite outro valor: \n");
    scanf("%f", &valor2);
    printf("O primeiro valor é: %.2f\nO segundo valor é: %.2f\n", valor1, valor2);

    //Constantes
    const float G = 9.80;

    printf("\n PI: %.2f", PI); //Constante definida no começo do programa #define
    printf("\n G: %.2f\n", G);

    return 0;

}
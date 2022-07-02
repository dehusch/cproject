/* Sua aplicação deverá ler um inteiro de quatro dígitos
informado pelo usuário e codificá-lo da seguinte forma:
substitua cada dígito pelo resultado da soma de 7 ao dígi-
to e calcular o módulo depois de dividir o novo valor por
10. Depois, troque o primeiro dígito pelo terceiro e troque
o segundo dígito pelo quarto. A seguir, imprima o inteiro
codificado. Escreva outra aplicação que receba um inteiro
de quatro dígitos codificado e o decodifique (invertendo
o esquema de codificação) para formar o número origi-
nal. 
*/
#include<stdio.h>

int main(){
    int valor = 0;
    int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0;
    int valorInv1 = 0, valorInv2 = 0, valorInv3 = 0, valorInv4 = 0;

    printf("Digite um numero com 4 digitos:");
    scanf("%d", &valor);

    valor1 = valor / 1000;
    valor2 = valor / 100;
    valor2 = valor2 % 10;
    valor3 = valor / 10;
    valor3 = valor3 % 10;
    valor4 = valor % 10;

    printf("Valor1: %d\n", valor1);
    printf("Valor2: %d\n", valor2);
    printf("Valor3: %d\n", valor3);
    printf("Valor4: %d\n", valor4);

    // cada digito + 7
    printf("\nCalculando o modulo do valor por 10\n");
    valor1 = (valor1 + 7) % 10;
    valor2 = (valor2 + 7) % 10;
    valor3 = (valor3 + 7) % 10;
    valor4 = (valor4 + 7) % 10;

    printf("Valor1: %d\n", valor1);
    printf("Valor2: %d\n", valor2);
    printf("Valor3: %d\n", valor3);
    printf("Valor4: %d\n", valor4);

    //Trocar o primeiro pelo terceiro e o segundo pelo quarto.
    valorInv1 = valor3;
    valorInv2 = valor4;
    valorInv3 = valor1;
    valorInv4 = valor2;

    printf("\nSubstituindo os valores 1\\3 e 2\\4\n");
    printf("Valor1: %d\n", valorInv1);
    printf("Valor2: %d\n", valorInv2);
    printf("Valor3: %d\n", valorInv3);
    printf("Valor4: %d\n", valorInv4);

    //revertendo o numero codificado

    

    return 0;

}
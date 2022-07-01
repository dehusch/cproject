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

    printf("Digite um numero com 4 digitos:");
    scanf("%d", &valor);


    printf("Valor: %d", valor);

}
/*
3.35 Testador de palíndromo. Um palíndromo é um número,
ou uma frase textual, que pode ser lido da mesma
forma da esquerda para a direita e vice-versa. Por
exemplo, cada um dos seguintes inteiros de cinco dígitos
é um palíndromo: 12321, 55555, 45554 e 11611. Escreva
um programa que leia um inteiro de cinco dígitos e
determine se ele é ou não um palíndromo. [Dica: use os
operadores de divisão e módulo para separar o número
em seus dígitos individuais.]
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int temp1;
    int temp2;
    int primDig;
    int segDig;
    int quaDig;
    int quiDig;

    printf("Digite 5 numeros: ");
    scanf("%d", &num);

    temp1 = num;

    //primeiro digito
    primDig = temp1 / 10000;
    temp2 = temp1 % 10000;

    //segundo digito
    segDig = temp2 / 1000;
    temp1 = temp2 % 1000;

    temp2 = temp1 % 100;

    //quarto digito
    quaDig = temp2 / 10;
    temp1 = temp2 % 10;

    quiDig = temp1;

    if (primDig = quiDig)
    {
        if (segDig = quaDig)
        {
            printf("%d é um palindromo", &num);
        }
        else
        {
            printf("%d não é um palindromo", &num);
        }
        
    }
    else
    {
        printf("%d não é um palindromo", &num);
    }
    
    



    return 0;
}

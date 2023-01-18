/*Calculando o produto de inteiros ímpares. Escreva
um programa que calcule e imprima o produto dos
inteiros ímpares de 1 a 15.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0, sum = 0;

    for (x = 1; x <= 15; x += 2)
    {
        printf("%d", x);

        sum += x;
    }

    printf("\n\n%d\n", sum);
    return 0;
}

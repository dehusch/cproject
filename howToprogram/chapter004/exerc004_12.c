/*Calculando a soma de inteiros pares.
Escreva um programa que calcule e imprima a soma dos inteiros pares
de 2 a 30.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0, sum = 0;

    for (x = 2; x <= 30; x += 2)
    {
        printf("%d", x);

        sum += x;
    }

    printf("\n\n%d", sum);

    return 0;
}

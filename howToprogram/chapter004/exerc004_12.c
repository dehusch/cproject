/*Calculando a soma de inteiros pares.
Escreva um programa que calcule e imprima a soma dos inteiros pares
de 2 a 30.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum, num;

    printf("\nDigite um valor pra somar: ");
    scanf("%d", &num);

    while (num != 9999)
    {
        sum += num;

        printf("\nDigite um valor pra somar: ");
        scanf("%d", &num);
    }

    printf("\n%d", sum);

    return 0;
}
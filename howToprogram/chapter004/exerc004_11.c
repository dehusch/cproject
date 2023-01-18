/*
4.11 Ache o menor. Escreva um programa que encontre o
menor de vários inteiros. Considere que o primeiro valor
lido especifique o número de valores restantes.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0, y = 0, z = 0, menor = 0;

    printf("Digite quantos numeros serão inserido: ");
    scanf("%d", &z);

    printf("Digite um numero: ");
    scanf("%d", &menor);

    for (x = 0; x < z - 1; x++)
    {
        printf("Digite outro numero: ");
        scanf("%d", &y);

        if (y < menor)
        {
            y = menor;
        }
    }

    printf("\n%d", menor);

    return 0;
}
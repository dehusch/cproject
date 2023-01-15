/*
4.11 Ache o menor. Escreva um programa que encontre o
menor de vários inteiros. Considere que o primeiro valor
lido especifique o número de valores restantes.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0, y = 0, z = 0, menor;

    printf("Digite quantos numeros serão inserido: ");
    scanf("%d", &z);

    for (x = 0; x < z; x++)
    {
        printf("Digite um numero: ");
        scanf("%d", &y);

        if (y < menor)
        {
            y = menor;
        }
    }

    printf("\n%d", y);
    printf("\n%d", menor);

    return 0;
}
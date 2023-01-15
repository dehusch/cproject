/*Soma de uma sequência de inteiros.

Escreva um programa que some uma sequência de inteiros. Considere
que o primeiro inteiro lido com scanf especifique o
número de valores restantes a serem inseridos. Seu programa
deve ler apenas um valor toda vez que scanf for
executado. Uma sequência de entrada típica poderia ser
5 100 200 300 400 500
onde o 5 indica que os cinco valores subsequentes devem
ser somados.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z;

    printf("Digite quantos numeros serão inserido: ");
    scanf("%d", &z);

    for (x = 0; x < z; x++)
    {
        printf("Digite um numero: ");
        scanf("%d", &y);

        y = y + y;
    }

    printf("%d", y);

    return 0;
}

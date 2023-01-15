/*4.10 Média de uma sequência de inteiros.

Escreva um programa que calcule e imprima a média de vários inteiros.
Considere que o último valor lido com scanf seja a sentinela
9999. Uma sequência de entrada típica poderia ser
10 8 11 7 9 9999
indicando que é preciso calcular a média de todos os valores
anteriores a 9999.
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

/*
Fatoriais. A função fatorial é usada com frequência
nos problemas de probabilidade. O fatorial de um inteiro
positivo n (escrito como n! e pronunciado como ‘fatorial
de n’) é igual ao produto dos inteiros positivos de 1 a n.
Escreva um programa que avalie os fatoriais dos inteiros
de 1 a 5. Imprima os resultados em formato tabular. Que
dificuldade poderia impedi-lo de calcular o fatorial de 20?
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int y;
    int fact;

    printf("X\tFactorial de X\n");

    for (x = 1; x <= 5; x++)
    {
        fact = 1;
        for (y = 1; y <= x; y++)
        {
            fact *= y;
        }
        printf("%d\t%d\n", x, fact);
    }

    return 0;
}

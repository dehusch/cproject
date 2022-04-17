/*
3.25 Saída tabular. Escreva um programa que use o looping
para imprimir a tabela de valores a seguir. Use a sequência
de escape de tabulação, \t, na instrução printf para separar
as colunas com tabulações.
N 10*N 100*N 1000
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    printf("N   N*10    N*100   N*1000\n");

    for (int i = 0; i < 10; i++)
    {
        num++;
        printf("%d\n", num);
    }
         
    return 0;
}

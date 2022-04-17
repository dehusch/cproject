/*
3.26 Saída tabular. Escreva um programa que use o looping
para produzir a seguinte tabela de valores:
A   A+2 A+4 A+6
3   5   7   9
6   8   10  12
9   11  13  15
12  14  16  18
15  17  19  21
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    printf("A       A+2     A+4     A+6\n");

    for (int i = 0; i < 5; i++)
    {
        num += 3;
        printf("%d\t%d\t%d\t%d\n", num, num+2, num+4, num+6);
    }
    

    return 0;
}

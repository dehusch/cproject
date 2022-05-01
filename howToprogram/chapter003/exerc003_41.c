/*
3.41 Múltiplos de 2 com um loop infinito. Escreva um programa
que continue imprimindo os múltiplos do inteiro 2,
a saber 2, 4, 8, 16, 32, 64 e assim por diante. Seu loop não
deverá terminar (ou seja, você deverá criar um loop infinito).
O que acontece quando você executa esse programa?
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num = 2;

    while (num > 0)
    {
        num = num + num;
        printf("%d\n", num);
    }
    
    return 0;
}

/*
Resposta colhida do livro de respostas:
ANS: Program execution terminates when largest integer is exceeded (i.e., the loop continuation test fails when the maximum
value for an integer is exceeded. On a 4-byte system, the largest integer value is 2147483647 and anything above
that is represented by a negative number, which fails the loop continuation test).
3.42 Write a program that reads the radius of a circle (as a float value) and computes and prints the diameter, the circumference
and the area. Use the value 3.14159 for π.
1 */

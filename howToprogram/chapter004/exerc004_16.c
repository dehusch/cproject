/*Problema de impressão de triângulo. Escreva um
programa que imprima os padrões a seguir separadamente,
um abaixo do outro. Use loops for para gerar os
padrões. Todos os asteriscos (*) devem ser impressos por
uma única instrução printf na forma printf(“*”);
(isso faz com que os asteriscos sejam impressos lado a
lado). [Dica: os dois últimos padrões exigem que cada
linha comece com um número de espaços apropriado.]*/
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int linha;
    int coluna;
    int espaco;

    for (linha = 1; linha <= 10; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (linha = 10; linha >= 1; linha--)
    {
        for (espaco = 1; espaco <= 10 - linha; espaco++)
        {

            printf(" ");
        }

        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("*");
            printf("\n");
        }

        printf("\n");

        return 0;
    }
}

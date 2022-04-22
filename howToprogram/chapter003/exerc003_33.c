/*
3.33 Quadrado de asteriscos. Escreva um programa que
leia o lado de um quadrado e depois exiba esse quadrado
a partir de asteriscos. Seu programa deverá funcionar
para quadrados de todos os tamanhos de lado entre 1 e
20. Por exemplo, se o programa ler um tamanho 4, ele
deverá exibir.
****
****
****
****
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int lado;

    printf("Digite a quantidade de lados: ");
    scanf("%d", &lado);

    if(lado < 20){
    printf("\n\n");
        for (int i = 0; i < lado; i++)
        {
            printf("*");

            for (int i = 1; i < lado; i++)
            {
                printf("*");
            }
            
        printf("\n");
            
        }
    printf("\n\n");
    }
    else{
    printf("\nMaximo 20 lados\n\n\n");
    }
    return 0;
}

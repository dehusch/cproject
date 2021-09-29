/*
Comparando inteiros. Escreva um programa que
peça ao usuário que digite dois inteiros, obtenha os nú-
meros e depois imprima o maior número seguido das
palavras ‘é maior’. Se os números forem iguais, impri-
ma a mensagem “Esses números são iguais”. Use
apenas a forma de seleção única da instrução if que
você aprendeu neste capítulo.
*/
#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &y);

    if (x > y){
        printf("%d é maior\n", x);
    }

    if (x < y){
        printf("%d é maior\n", y);
    }

    if (x == y){
        printf("Sao iguais\n");
    }
    
}
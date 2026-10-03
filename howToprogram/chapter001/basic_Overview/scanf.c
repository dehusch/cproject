#include<stdio.h>

char frase[101];

int main(){
    printf("Digite uma frase:");
    scanf(" %100[^\n]", frase);
    printf("%s\n", frase);


    return 0;

}

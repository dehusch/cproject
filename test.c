#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    c = a % b;
    d = a / b;
    printf("Resto da divisao = %d\n", c);
    printf("Resultado da divisao = %d\n", d);

    return 0;

}
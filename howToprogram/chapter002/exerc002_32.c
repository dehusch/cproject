#include <stdio.h>

int main(){

    int num;
    int num2;

    
    scanf("%d", &num);
    printf("%d\n", num / 10000);

    num2 = num % 10000;

    printf("%d\n", num2 / 1000);

    return 0;
}
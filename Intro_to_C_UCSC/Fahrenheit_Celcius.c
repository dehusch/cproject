//F = C - 32 / 1.8

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int fahrenheit, celsius;

    printf("Insert Fahrenheit value: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8;
    printf("\n%d Fahrenheit is %d Celsius!\n", fahrenheit, celsius);
    return 0;
}

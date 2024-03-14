//write a program in C to print the sum of two numbers
#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum of %d and %d is %d", a, b, sum);
    return 0;
}

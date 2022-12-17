//Reading three floats and print the sum.
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c, sum;
    printf("Input three floats: ");
    scanf("%f%f%f", &a, &b, &c);
    prinft("a = %f\nb = %f\nc = %f\n", a, b, c);
    sum = a + b + c;
    printf("Sum = %f\n\n", sum);
    return 0;
}

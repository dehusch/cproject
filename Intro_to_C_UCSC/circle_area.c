#include<stdio.h>

#define PI 3.14159

int main(int argc, char const *argv[])
{
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("\nRadius of %lf meters; Area is %lf sq. meters\n", radius, area);

    return 0;
}
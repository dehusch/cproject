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


/*
AREA 3 = 28.27431
AREA 4 = 50.26544
AREA 5 = 78.53975
AREA 6 = 113.09724
*/
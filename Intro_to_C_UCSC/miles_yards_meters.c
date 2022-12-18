#include<stdio.h>

int main(int argc, char const *argv[])
{
    double miles = 0;
    double yards = 0;
    double kilometers = 0;

    printf("Insert miles distance: ");
    scanf("%lf", &miles);
    printf("Insert yards distance:");
    scanf("%lf", &yards);

    yards = yards / 1760.0;

    printf("\nYards converted to miles is %lf\n", yards);

    kilometers = 1.609 * (miles + yards);

    printf("\nThe distance in kilometer is %lf\n", kilometers);
    return 0;
}

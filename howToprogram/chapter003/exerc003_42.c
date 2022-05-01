/*
3.42 Diâmetro, circunferência e área de um círculo.
Escreva um programa que leia o raio de um círculo
(como um valor float) e calcule e imprima o diâmetro,
a circunferência e a área. Use o valor 3.14159 para p.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float radius = 0;
    float area = 0;
    
    printf("Input the radius value: ");
    scanf("%f", &radius);

    printf("Radius:\t\t%f\n", radius);

    area = 3.14159 * (radius * radius);
    radius = radius * 2;

    printf("Diameter:\t%f\n", radius);

    radius = radius * 3.14159;

    printf("Perimeter:\t%f\n", radius);

    printf("Area:\t\t%f\n", area);

    return 0;
}

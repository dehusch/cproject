/*
Lados de um triângulo. Escreva um programa que leia
três valores float diferentes de zero, determine e imprima
se eles poderiam representar os lados de um triângulo.
*/

/*
Not (!)	!(a == 3)	True if a is not equal to 3
And (&&)	a == 3 && b == 6	True if a is equal to 3 and b is equal to 6
Or (||)	a == 2 || b == 4	True if a is equal to 2 or b is equal to 4
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int s1;
    int s2;
    int s3;

    printf("Input first valeu of triangule: ");
    scanf("%d", &s1);

    printf("Input second value: ");
    scanf("%d", &s2);

    printf("Input thirt value: ");
    scanf("%d", &s3);

    if (s1 < s2 + s3 && s2 < s1 + s3 && s3 < s1 + s2)
    {
        printf("There's a triangule!");
    }
    else
    {
        printf("There's no triangule possible!");
    }
        

    return 0;
}

//Answer from anwered book

/*
#include <stdio.h>

int main()
{
    double a;
    double b;
    double c;
    printf( "Enter three doubleing point numbers: " );
    scanf( "%lf%lf%lf", &a, &b, &c);
    if ( c * c == a * a + b * b ) {
        printf( "The three numbers could be sides of a triangle\n" );
    }
    else {
        printf( "The three numbers probably");
        printf( " are not the sides of a triangle\n" );
    }
    return 0;
}

*/
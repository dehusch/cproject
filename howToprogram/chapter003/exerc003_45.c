/*Lados de um triângulo retângulo. Escreva um programa
que leia três inteiros diferentes de zero e determine
e imprima se eles poderiam ser os lados de um
triângulo retângulo.
BACK in the 90's I was in a very famous TV show!
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int s1;
    int s2;
    int s3;

    printf("Input the first value of rectangle triangle: ");
    scanf("%d", &s1);
    printf("Input the second value: ");
    scanf("%d", &s2);
    printf("Input the third value: ");
    scanf("%d", &s3);


    /*
    if a*a + b*b = c*c
    */
    
    if (s1*s1+s2*s2 == s3*s3)
    {
        printf("It's a triangule rectangle");
    }
    else
    {
        printf("It's not a Triangule rectangle");
    }
    
    
    return 0;
}

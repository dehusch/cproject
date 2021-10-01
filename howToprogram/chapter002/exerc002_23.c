/*
Maiores e menores inteiros. Escreva um programa
que leia cinco inteiros e depois determine e imprima o
maior e o menor inteiro no grupo. Use apenas as técnicas
de programação que você aprendeu neste capítulo.
*/
#include <stdio.h>

int main(){

    int a;
    int b;
    int c;
    int d;
    int e;

    printf("Digite o 1o numero:");
    scanf("%d", &a);

    printf("Digite o 2o numero:");
    scanf("%d", &b);

    printf("Digite o 3o numero:");
    scanf("%d", &c);

    printf("Digite o 4o numero:");
    scanf("%d", &d);

    printf("Digite o 5o numero:");
    scanf("%d", &e);

    int menor = a;

    if (b < menor) {
        menor = b;

    }

    if (c < menor) {
        menor = c;

    }

    if (d < menor){
        menor = d;
    }

    if (e < menor){
        menor = e;
    }

    printf("%d é o menor!\n", menor);

    int maior = a;

    if (b > maior){
        maior = b;
    }

    if (c > maior){
        maior = c;
    }

    if (d > maior){
        maior = d;
    }

    if (e > maior){
        maior = e;
    }

    printf("%d é o maior!\n", maior);


//Outra solucão

/* Exercise 2.23 Solution */
    int largest;
    int smallest;
    int int1;
    int int2;
    int int3;
    int temp;
    
    printf("Input 5 integers: ");
    scanf( "%d%d%d%d%d", &largest, &smallest, &int1, &int2, &int3 );
    
    if ( smallest > largest ) { 
        temp = largest;
        largest = smallest;
        smallest = temp;
    }
    
    if ( int1 > largest ) {
        largest = int1;
    }
    
    if ( int1 < smallest ) {
        smallest = int1;
    }
    
    if ( int2 > largest ) {
        largest = int2;
    }
    
    if ( int2 < smallest ) {
        smallest = int2;
    }
    
    if ( int3 > largest ) {
        largest = int3;
    }
    
    if ( int3 < smallest ) {
        smallest = int3;
    }
    
    printf( "The largest value is %d\n", largest );
    printf( "The smallest value is %d\n", smallest );
    
    return 0;

}

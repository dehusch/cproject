/*
Aritmética, maior e menor valor. Escreva um pro-
grama que leia três inteiros diferentes do teclado, depois
apresente a soma, a média, o produto, o menor e o maior
desses números. Use apenas a forma de seleção única da
instrução if que você aprendeu neste capítulo. O diálogo
na tela deverá aparecer da seguinte forma:
Exemplo:
Digite três inteiros diferentes: 13 27 14
A soma é 54
A média é 18
O produto é 4914
O menor é 13
O maior é 27
*/

#include <stdio.h>

int main(){

    int x;
    int y;
    int z;
    int menor;
    int maior;

    printf("Digite um numero:");
    scanf("%d", &x);
    printf("Digite outro numero:");
    scanf("%d", &y);
    printf("Digite mais um numero:");
    scanf("%d", &z);

    printf("Os numeros digitados foram: %d, %d, %d\n", x, y, z);

    printf("A soma dos numeros é: %d\n", (x + y + z));
    printf("A media dos numeros é: %d\n", (x + y + z)/2 );
    printf("O produto dos numeros é: %d\n", (x * y * z) );

    menor = x; //Consideramos x o menor
    
    if ( y < menor ) { //se y for menor, menor = y
        menor = y;
    }
    
    if ( z < menor ) { //se z for menor, menor = z
        menor = z;
    }

    printf( "menor é %d\n", menor );
    
    maior = x;
    
    if ( y > maior ) {
        maior = y;
    }
    
    if ( z > maior ) {
        maior = z;
    }

    printf( "maior é %d\n", maior );
    return 0;
}
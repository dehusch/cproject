/*2.5 Usando as instruções que você escreveu no Exercício 2.4,
escreva um programa completo que calcule o produto de
três inteiros.*/
#include<stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;

    //adress a integer number to variable
    printf("Type the first value:"); scanf("%d", &number1);
    printf("Type the Second value:"); scanf("%d", &number2);
    printf("Type the Third value:"); scanf("%d", &number3);

    printf("%d X %d x %d = ", number1, number2, number3); 
    int result = number1 * number2 * number3;
    printf("%d\n", result);

    return 0;
}

//RESPOSTAS

/*
2.5 Veja a seguir.
1 /* Calcula o produto de três inteiros
*/
/*
2 #include <stdio.h>
3
4 int main( void )
5 {
6 int x, y, z, resultado; /* declara
variáveis */
/*
7
8 printf( “Digite três inteiros: ” );
/* prompt */
/*
9 scanf( “%d%d%d”, &x, &y, &z ); /*
lê três inteiros */
/*
10 result = x * y * z; /* multiplica
os valores */
/*
11 printf( “O produto é %d\n”,
result ); /* exibe o resultado */
/*
12 return 0;
13 } /* fim da função main */
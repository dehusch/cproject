/*Write a single instruction and
do the follow steps*/
//Declare a variable
#include <stdio.h>
int main() {

    int thisVariable;
    //ask for a number
    printf("Enter a int number: "); scanf("%d", &thisVariable);
    printf("\n");
    //check if the number is not 7

    if ( thisVariable != 7 ){
        printf("%d is not 7\n", thisVariable);
    }
    
    printf("This is a C Programm\nThis is a C programm\n");
    printf("This\nis\na\nC\nProgramm\n");
    printf("    This\n    is\n    a\n    C\n    Programm\n");

    return 0;
}

//Respostas

/*
a) int c, estaVariável, q76354, número;
b) printf( "Digite um inteiro:" );
c) scanf( "%d", &a );
d) if ( número != 7 )
{
printf( “A variável número não é
igual a 7.\n” );
}
e) printf( “Este é um programa em C.\n” );
f) printf( “Este é um programa em\nC.\n” );
g) printf( “Este\né\num\nprograma\nem\
nC.\n” );
h) printf( “Este\té\tum\tprograma\tem\
tC.\n” );
*/
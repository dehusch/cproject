/*3.31 Problema do else pendurado. 
Determine a saída para cada um dos seguintes códigos quando x for 9 e y
for 11, e quando x for 11 e y for 9. O compilador ignora o
recuo em um programa em C. Além disso, o compilador
sempre associa um else com o if anterior, a menos
que seja informado de que deve proceder de outra forma
pela colocação das chaves { }. Visto que, à primeira
vista, você pode não saber ao certo a que if um else
corresponde, isso é conhecido como o problema do ‘else
pendurado’. Eliminamos o recuo do código a seguir para
tornar o problema mais desafiador. [Dica: aplique as
convenções de recuo que você aprendeu.]

a) if ( x < 10 )
if ( y > 10 )
printf( “*****\n” );
else
printf( “#####\n” );
printf( “$$$$$\n” );


b) if ( x < 10 ) {
if ( y > 10 )
printf( “*****\n” );
}
else {
printf( “#####\n” );
printf( “$$$$$\n” );
}
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int y;
    printf("Digite X: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);

    printf("Resposta da A\n");
    if ( x < 10 )
        if ( y > 10 )
        printf( "*****\n" );
    else
        printf( "#####\n" );
    printf( "$$$$$\n" );

    printf("\nRespota da B\n");
    if ( x < 10 ){
        if ( y > 10 )
        printf( "*****\n" );
    }
    else{
    printf( "#####\n" );
    printf( "$$$$$\n" );
    }
    return 0;
}

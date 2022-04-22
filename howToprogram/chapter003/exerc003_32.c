/*
3.32 Outro problema do else pendurado. 
Modifique o seguinte código para produzir a saída mostrada. Use as
técnicas de recuo apropriadas. Você pode não precisar fazer
mudança alguma, além de inserir as chaves. O compilador
ignora os recuos em um programa. Eliminamos
o recuo do código a seguir para tornar o problema mais
desafiador. [Nota: é possível que nenhuma modificação
seja necessária.]
if ( y == 8 )
if ( x == 5 )
printf( “@@@@@\n” );
else
printf( “#####\n” );
printf( “$$$$$\n” );
printf( “&&&&&\n” );

a) Supondo que x = 5 e y = 8, a seguinte saída será
produzida.
@@@@@
$$$$$
&&&&&

b) Supondo que x = 5 e y = 8, a seguinte saída será
produzida.
@@@@@

c) Supondo que x = 5 e y = 8, a seguinte saída será
produzida.
@@@@@
&&&&&

d) Supondo que x = 5 e y = 7, a seguinte saída será
produzida. [Nota: as três últimas instruções printf
fazem parte de uma instrução composta.]
#####
$$$$$
&&&&&
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int y;
    printf("Difina X: ");
    scanf("%d", &x);
    printf("Defina y: ");
    scanf("%d", &y);

    printf("Resposta da A\n");
    if ( y == 8 ){
        if ( x == 5 )
            printf( "@@@@@\n" );
        else
            printf( "#####\n" );
        printf( "$$$$$\n" );
        printf( "&&&&&\n" );
    }

    printf("\n\nResposta da B\n");
    if ( y == 8 ){
        if ( x == 5 )
            printf( "@@@@@\n" );
    }
    else{
        printf( "#####\n" );
        printf( "$$$$$\n" );
        printf( "&&&&&\n" );
    }

    printf("\n\nResposta da C\n");
    if ( y == 8 ){
        if ( x == 5 )
            printf( "@@@@@\n" );
    
        else{
            printf( "#####\n" );
            printf( "$$$$$\n" );
        }
    }
    printf( "&&&&&\n" );

    printf("\n\nResposta da D\n");
    if ( y == 8 ){
        if ( x == 7 )
            printf( "@@@@@\n" );
    
        else{
            printf( "#####\n" );
            printf( "$$$$$\n" );
            printf( "&&&&&\n" );
        }
    }
    

    return 0;
}

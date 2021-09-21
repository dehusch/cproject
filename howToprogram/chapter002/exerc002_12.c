/*
2.12 O que é exibido quando cada uma das seguintes instruções
é executada? Se nada for exibido, então responda
‘Nada’. Considere que x = 2 e y = 3.
a) printf( “%d”, x );
b) printf( “%d”, x + x );
c) printf( “x=” );
d) printf( “x=%d”, x );
e) printf( “%d = %d”, x + y, y + x );
f) z = x + y;
g) scanf( “%d%d”, &x, &y );
h) /* printf( “x + y = %d”, x + y ); */
/*
i) printf( “\n” );
*/

//RESPOSTAS

#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    printf("%d", (x+x) * (y+y));
}
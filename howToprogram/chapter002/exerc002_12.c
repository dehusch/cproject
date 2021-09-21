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

/*
2.12 What, if anything, prints when each of the following C statements 
is performed? If nothing prints, then answer “nothing.”
Assume x = 2 and y = 3.
a) printf( "%d", x );
ANS: 2
b) printf( "%d", x + x );
ANS: 4
c) printf( "x=" );
ANS: x=
d) printf( "x=%d", x );
ANS: x=2
e) printf( "%d = %d", x + y, y + x );
ANS: 5 = 5
f) z = x + y;
ANS: Nothing. Value of x + y is assigned to z.
g) scanf( "%d%d", &x, &y );
ANS: Nothing. Two integer values are read into the location of x 
and the location of y.
h) /* printf( "x + y = %d", x + y ); */
/*
ANS: Nothing. This is a comment.
i) printf( "\n" );
ANS: A newline character is printed, and the cursor is positioned 
at the beginning of the next line on the screen.
*/

#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    printf("%d", (x+x) * (y+y));
    printf("x=%d\n", x);

    scanf( "%d%d", &x, &y );
    int z = x + y;
    printf("%d", z);
    printf("\n");
}
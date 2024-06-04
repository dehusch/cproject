/*4.29 Leis de De Morgan. Neste capítulo, discutimos os
peradores lógicos &&, || e !. Às vezes, as Leis de De
Morgan podem tornar mais conveniente a indicação
de uma expressão lógica. Essas leis afirmam que a ex-
pressão !(condition1 && condition2) é logicamente
Controle de programa em C equivalente à expressão
(!condition1 || !condition2). 

Além disso, a expressão !(condition1 || con-
dition2) é logicamente equivalente à expressão (!con-
dition1 && !condition2). Use as Leis de De Morgan
para escrever expressões equivalentes para cada um dos
seguintes itens, e depois escreva um programa para mos-
trar que a expressão original e a nova expressão em cada
caso são equivalentes.
a)!( x < 5 ) && !( y >= 7 )
b)!( a == b ) || !( g != 5 )
c)!( ( x <= 8 ) && ( y > 4 ) )
d)!( ( i > 4 ) || ( j <= 6 ) )
*/

/* Exercise 4.29 Solution */
#include<stdio.h>
	int main( void ){
	int x = 10; /* define current variable value */
	int y = 1; /* define current variable value */
	int a = 3; /* define current variable value */
	int b = 3; /* define current variable value */
	int g = 5; /* define current variable value */
	int Y = 1; /* define current variable value */
	int i = 2; /* define current variable value */
	int j = 9; /* define current variable value */
	
	/* display variable values */
	printf( "current variable values are: \n" );
	printf( "x = %d, y = %d, a = %d,", x, y, a );
	printf( " b = %d\n", b );
	printf( "g = %d, Y = %d, i = %d,", g, Y, i );
	printf( " j = %d\n\n", j );
	/* part a */
	if ( ( !( x < 5 ) && !( y >= 7 ) ) == ( !( ( x < 5 ) || ( y >= 7 )) ) ) {
		printf( "!( x < 5 ) && !( y >= 7 ) is equivalent to"" !( ( x < 5 ) || ( y >= 7 ) )\n" );
	} /* end if */
	else {
		printf( "!( x < 5 ) && !( y >= 7 ) is not equivalent to"" !( ( x < 5 ) || ( y >= 7 ) )\n" );
	} /* end else */
	
	/* part b */
	if ( ( !( a == b ) || !( g != 5 ) ) == ( !( ( a == b ) && ( g != 5 )) ) ) {
		printf( "!( a == b ) || !( g != 5 ) is equivalent to"" !( ( a == b ) && ( g != 5 ) )\n" );
	} /* end if */
	else {
		printf( "!( a == b ) || !( g != 5 ) is not equivalent to"" !( ( a == b ) && ( g != 5 ) )\n" );
	} /* end else */

	/* part c */
	if ( !( ( x <= 8 ) && ( Y > 4 ) ) == ( !( x <= 8 ) || !( Y > 4 )) ) {
		printf( "!( ( x <= 8 ) && ( Y > 4 ) ) is equivalent to"" ( !( x <= 8 ) || !( Y > 4 ) )\n" );
	} /* end if */
	else {
		printf( "!( ( x <= 8 ) && ( Y > 4 ) ) is not equivalent to"" ( !( x <= 8 ) || !( Y > 4 ) )\n" );
	} /* end else */

	/* part d */
	if ( !( ( i > 4 ) || ( j <= 6 ) ) == ( !( i > 4 ) && !( j <= 6 )) ) {
		printf( "!( ( i > 4 ) || ( j <= 6 ) ) is equivalent to"" ( !( i > 4 ) && !( j <= 6 ) )\n" );
	} /* end if */
	else {
		printf( "!( ( i > 4 ) || ( j <= 6 ) ) is not equivalent to"" ( !( i > 4 ) && !( j <= 6 ) )\n" );
	} /* end else */

	
	return 0; /* indicate successful termination */
} /* end main */

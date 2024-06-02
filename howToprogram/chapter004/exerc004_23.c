/*4.24 Considere i = 1, j = 2, k = 3 e m = 2. O que cada
uma das seguintes instruções imprime?
a)
 printf( “%d”, i == 1 );
b)
 printf( “%d”, j == 3 );
c)
 printf( “%d”, i >= 1 && j < 1 );
d)
 printf( “%d”, m < = 99 && k < m );
e)
 printf( “%d”, j <= i || k <= m );
f)
 printf( “%d”, k + m < j || 3 - j >= k );
g)
 printf( “%d”, !m );
h)
i)
j)
printf( “%d”, !( j - m ) );
printf( “%d”, !( k > m ) );
printf( “%d”, !( j > k ) );
*/

#include<stdio.h>

int i = 1, j = 2, k = 3, m = 2;

int main(){
    printf( "Condition 1: %d\n", i == 1 );		// 1 true			
    printf( "Condition 2: %d\n", j == 3 );		// 0 false
    printf( "Condition 3: %d\n", i >= 1 && j < 1 );	// 0 false
    printf( "Condition 4: %d\n", m <= 99 && k < m );	// 0 false
    printf( "Condition 5: %d\n", j <= i || k <= m );	// 0 false
    printf( "Condition 6: %d\n", k + m < j || 3 - j >= k );	// 0 false
    printf( "Condition 7: %d\n", !m );			// 0 false
    printf( "Condition 8: %d\n", !( j - m ) );		// 0 false
    printf( "Condition 9: %d\n", !( k > m ) );		// 0 false
    printf( "Condition 10: %d\n", !( j > k ) );		// 1 true
    return 0;
}
//gcc exerc004_24.c -o exerc004_24

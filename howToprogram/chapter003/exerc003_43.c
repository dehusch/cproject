/*O que há de errado com a instrução a seguir? Reescreva-
-a para obter o resultado que o programador provavelmente
tentava obter.
printf( “%d”, ++( x + y ) );
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int y;
    int z;

    x = 2;
    y = 2;
    z = (x+y);
    while (z < 30)
    {
        printf("%d\n", ++z);
    }
        
    return 0;
}
/*
Resposta colhida do livro de resposta:

ANS: printf( “%d”, 1 + x + y );
*/

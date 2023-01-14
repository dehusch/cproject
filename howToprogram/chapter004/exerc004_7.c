/*
4.7 Escreva estruturas for que imprimam a seguinte sequência
de valores:
a) 1, 2, 3, 4, 5, 6, 7
b) 3, 8, 13, 18, 23
c) 20, 14, 8, 2, –4, –10
d) 19, 27, 35, 43, 51
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int w, y, x, z;

    for (w = 1; w <= 7; w++)
    {
        printf("%d", w);
    }

    printf("\n");

    for (y = 3; y <= 24; y += 5)
    {
        printf("%d", y);
    }

    printf("\n");

    for (x = 20; x >= -11; x -= 6)
    {
        printf("%d", x);
    }

    printf("\n");

    for (z = 19; z <= 51; z += 8)
    {
        printf("%d", z);
    }

    return 0;
}

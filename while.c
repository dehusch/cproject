#include <stdio.h>

int main()
{
    int contador = 1;

    while (contador <=5)
    {
        printf("%i\n", contador);
        contador = contador + 1; //outra forma de representar essa situação é "++contador;"
    }
    return 0;
}

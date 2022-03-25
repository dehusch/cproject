#include <stdio.h>

int main()
{
    int contador = 1;
    int x = 0, y = 0, total = 0;
    while (contador <=5)
    {
        printf("%i\n", contador);
        contador = contador + 1; //outra forma de representar essa situação é "++contador;"
    }

    while (x <= 10){
        total = x * y;
        printf("%d x %d = %d", x, y, total);
        x++;
        y++;
        
    }

    return 0;
}

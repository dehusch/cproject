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


    //Multiple table
    printf("Set the number for multiple table: ");
    scanf("%d", &x);

    while (y <= 10){
        total = x * y;
        printf("%d x %d = %d\n", x, y, total);
        y++;

    }

    return 0;
}

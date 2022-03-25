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

    //Sentinel value
    int a = 1, soma = 0;

    while(a != 0){
        printf("Digite um valor (0 para sair): ");
        scanf("%d", &a);
        soma += a;
    }
    printf("A soma total é = %d\n", soma);

    return 0;
}

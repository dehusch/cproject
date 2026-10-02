#include <stdio.h>
int main()
{
    int contador;

    for(contador =1; contador <= 10; contador = contador + 1)
    {
        printf("Ola\n");

    }
    for(contador = 1; contador <= 10;){
        
        printf("9 x %d = %d\n", contador, 9 * contador);
        contador = contador + 1;
    }
    return 0;
}

#include <stdio.h>
// using var by input data from user
// this is a rectangle area calculation
int main()
{
int base;
int altura;
int area;


printf("Digite o valor da base: "); scanf("%i", &base);
printf("Digite o valor da altura: "); scanf("%i", &altura);

// % caractere especial, que inicia um especificador de conversão
// & operador de endereço

printf("O valor da base é: %i\n", base);
printf("O valor da altura é: %i\n", altura);

area = base * altura;

printf("O valor da area é %i \n", area);




    return 0;

}

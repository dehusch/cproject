/*Using if statements, relational operators, and equality operators */
#include <stdio.h>
int main() {
    int num1;
    int num2;

    printf("Entre com dois numeros inteiros e\n");
    printf("farei as relações entre eles: ");

    scanf("%d%d", &num1, &num2);

    if ( num1 == num2 ){
        printf("%d é igual a %d\n", num1, num2);
    }

    if ( num1 != num2 ){
        printf("%d é diferente de %d\n", num1, num2);
    }

    if ( num1 < num2 ){
        printf("%d é menor que %d\n", num1, num2);
    }

    if ( num1 > num2 ){
        printf("%d e maior que %d\n", num1, num2);
    }

    if ( num1 <= num2 ){
        printf("%d e menor ou igual a %d\n", num1, num2);
    }

    if ( num1 >= num2 ){
        printf("%d e maior ou igual a %d\n", num1, num2);
    }

    return 0;
}

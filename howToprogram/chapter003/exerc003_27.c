/*
3.27 Ache os dois maiores números. Usando uma técnica
semelhante à do Exercício 3.24, ache os dois maiores
valores dos 10 números. [Nota: você poderá informar
cada número apenas uma vez.]
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numero;
    int maior = 0;
    int segmaior = 0;
    printf("Digite um numero: ");
    scanf("%d", &maior); //Se eu digitar 10, o maior é 10.
    
    for (int i = 0; i < 9; i++)
    {
        printf("Digite mais um numero: ");
        scanf("%d", &numero); //se eu digitar 20 o numero é 20.

        if (numero > maior) //como numero é maior que que maior 
        {
            segmaior = maior; //segmaior era 0 e agora é 10
            maior = numero; //maior agora é = 20.
        }
        else {
            if (numero > segmaior){ //Numero que vale 20 é maior que  segmaior que vale 10 então:
                segmaior = numero; // segmaior que era 10 agora é igual a numero que vale 20.
            }
            
        }
        printf("Numero: %d, Maior: %d\n", numero, maior);
    }
    
    printf("O maior numero e %d\n", maior);
    printf("O segundo maior e %d\n", segmaior);

    return 0;
}
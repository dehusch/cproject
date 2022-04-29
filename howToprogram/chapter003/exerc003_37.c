/*Qual é a velocidade do seu computador? Como
você pode determinar a velocidade com que seu computador
realmente opera? Escreva um programa com um
loop while que conte de 1 até 300.000.000 em intervalos
de 1. Toda vez que o contador atingir um múltiplo
de 100.000.000, mostre esse número na tela. Use seu
relógio para marcar o tempo gasto entre cada repetição
do loop por 100 milhões de vezes.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num = 1;

    while (num < 300000000)
    {
        num++;
        if (num % 100000000 == 0)
        {
            printf("%d", num / 100000000);
        }
        
    }
    
    return 0;
}

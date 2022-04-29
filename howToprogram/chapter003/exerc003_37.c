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
#include<time.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    int num = 1;

    while (num < 300000000)
    {
        num++;
        /*
        double time_spent = 0.0;
 
        clock_t begin = clock();
        */
        if (num % 100000000 == 0)
        {
            printf("%d", num / 100000000);
        }
        
        /*
        sleep(3);
 
        clock_t end = clock();
    
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    
        printf("The elapsed time is %f seconds", time_spent);
        */
    }
    
    return 0;
}

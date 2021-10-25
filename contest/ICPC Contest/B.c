#include <stdio.h>

    int main() {
    
    int i;
    int fato[10]; //definindo uma lista com 10 fatores.

    fato[0] = 1;

    //repeticao até 9!
    //Aqui cria uma lista de fatoriais fato[i] que vai de fato[1] até fato[9]
    /*
    fato[1] = 1
    fato[2] = 2
    fato[3] = 6
    fato[4] = 24
    fato[5] = 120
    fato[6] = 720
    fato[7] = 5040
    fato[8] = 40320
    fato[9] = 362880
    */

    for (i = 1; i <= 9; i++) {
        fato[i] = i*fato[i-1]; //Exemplo quando fato[2] = 2*fato[2-1] 
        //printf("%d\n", fato[i]); //printa até o fatorial 9!
    }  
    
    int P;
 
    scanf("%d", &P); //Entrada do valor
 
    int x = 0;
    int k;
    
    for (i = 1; i<=9; i++) {
        printf("%d = valor de 'i'\n", i);  //imprime o valor atual de "i"
        if (fato[i]>P) {        //exemplo: na entrada de valor "10", o fato[i] será até "4!". 4! = 24 e é maior que 10.
            //print(fato[i]);
            k = i-1;
            break;
        }
        printf("%d! = %d\n",i ,fato[i]); //imprime o fatorial para cada valor de "i".
    }
 
    for (i = k; i >= 0; i--) {
        x += (P/fato[i]);
        P = P%fato[i];
    }
 
    printf("%d\n", x); //Saida do valor
    return 0;
}
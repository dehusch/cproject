#include <stdio.h>

    int main() {
    
    int i;
    int fato[10]; //definindo um vetor com 10 posições

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

    //neste laço ele cria uma lista de fatoriais, do 1! até o 9!
    for (i = 1; i <= 9; i++) {
        fato[i] = i*fato[i-1]; //Exemplo quando fato[2] = 2*fato[2-1] 
        //printf("%d\n", fato[i]); //printa até o fatorial 9!
    }  
    
    int P;
 
    scanf("%d", &P); //Entrada do valor
 
    int x = 0;
    int k;
    
    //neste laço, ele encontra o maior numero antes do numero "P" digitado pelo usuario.
    for (i = 1; i<=9; i++) {
        printf("%d = valor de 'i'\n", i);  //imprime o valor atual de "i"
        if (fato[i]>P) {        //exemplo: na entrada de valor "10", o fato[i] será até "4!". 4! = 24 e é maior que 10.
            //print(fato[i]);
            k = i-1;
            break;
        }
        printf("%d! = %d\n",i ,fato[i]); //imprime o fatorial para cada valor de "i".
    }
 
    for (i = k; i >= 1; i--) {  //PARA k = 3, usando o exemplo N = 10
        x = x + (P/fato[i]);    //x = 0 + 10/6 = 1          ==>> x = 1 + 4/2 = 3        ==>> x = 3 + 0/1 = 3
        printf("x = %d\n", x);
        P = P%fato[i];          //P = 10 % 6 = 4            ==>> P = 4 % 2 = 0          ==>> P = 0 % 1 == 0
        printf("P = %d\n", P);
    }
 
    printf("A quantidade possivel é: %d\n", x); //Saida do valor
    return 0;
}
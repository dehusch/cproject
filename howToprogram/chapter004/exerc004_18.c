/*Programa de exibição de gráfico de barras. Uma
aplicação interessante dos computadores é a de desenhar
gráficos e gráficos de barras (às vezes, chamados ‘histogramas’).
Escreva um programa que leia cinco números
(entre 1 e 30). Para cada número lido, seu programa
deverá exibir uma linha contendo esse número de asteriscos
adjacentes. Por exemplo, se seu programa ler o
número sete, ele deverá exibir *******.
*/

/*The program must read and show five results in the
end of the program. Each number will be displayed
 in a new line*/

#include <stdio.h>

int main(){

    int number = 0;
    int i = 0;
    int j = 0;
    int k = 1;

    printf("Enter a number between 1 and 30: ");
    scanf("%d", &number);

    while (k < 5)
    {
    
        while(number < 1 || number > 30){
            printf("Enter a number between 1 and 30: ");
            scanf("%d", &number);
        }

        for(i = 0; i < number; i++){
            printf("*");
        }

        printf("\n");

        printf("Enter a number between 1 and 30: ");
        scanf("%d", &number);
        
    k++;
    }
    return 0;

}

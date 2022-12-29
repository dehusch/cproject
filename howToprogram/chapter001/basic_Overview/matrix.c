#include <stdio.h>

int main(){

    float notas[3][2];

    //aluno1

    notas[0][0] = 10;
    notas[0][1] = 8.5;

    //aluno2

    notas[1][0] = 5.5; // É substituido o valor pelo scanf abaixo.
    notas[1][1] = 2.7;

    //aluno3

    notas[2][0] = 4;
    notas[2][1] = 10;


    printf("Digite uma nota:\n ");

    scanf("%f", &notas[1][0]);

    printf("Notas: %.2f / %.2f\n", notas[0][0], notas[0][1]);
    printf("Notas: %.2f / %.2f\n", notas[1][0], notas[1][1]);
    printf("Notas: %.2f / %.2f\n", notas[2][0], notas[2][1]);

    return 0;


}
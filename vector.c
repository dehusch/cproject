#include <stdio.h>

int main(){

    float altura[3] = {1, 2, 2.3};

    printf("Altura 1 = %.2f\n", altura[0]);
    printf("Altura 2 = %.2f\n", altura[1]);
    printf("Altura 3 = %.2f\n", altura[2]);

    altura[1] = 4; //Pode trocar o valor dos vetores.

    printf("Altura 2 agora é = %.2f\n", altura[1]);

    printf("Digite um novo valor para a altura 3: ");
    scanf("%f", &altura[2]);

    printf("A altura 3 agora é: %.2f\n", altura[2]);

    float total = (altura[0] + altura[1] + altura[2]);
    
    printf("A soma total das alturas é: %.2f\n", total);

    return 0;
}
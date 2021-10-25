#include <stdio.h>

    int main() {
    
    int i;
    int fato[10];

    fato[0] = 1;

    for (i = 1; i <= 9; i++) {
        fato[i] = i*fato[i-1];
    }  
    
    int P;
 
    scanf("%d", &P); //Entrada do valor
 
    int x = 0;
    int k;
    for (i = 1; i<=9; i++) {
        if (fato[i]>P) {
            k = i-1;
            break;
        }
    }
 
    for (i = k; i >= 0; i--) {
        x += (P/fato[i]);
        P = P%fato[i];
    }
 
    printf("%d\n", x); //Saida do valor
    return 0;
}
#include <stdio.h>

int main(){
    
    int A;
    int B;
    int MEDIA;

    scanf("%d", &A); //entrada do valor A
    scanf("%d", &MEDIA); //entrada do valor MEDIA
    
    int DOBROM = MEDIA * 2;
    B = DOBROM - A;

    printf("%d\n", B); //saida do valor B

    return 0;
}
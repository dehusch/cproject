#include<stdio.h>
//Contando notas de letras
int main(){

    int nota;
    int aCont = 0;
    int bCont = 0;
    int cCont = 0;
    int dCont = 0;
    int fCont = 0;

    printf("Digite as notas em letras.\n");
    printf("Digite 'EOF' para finalizar o programa.\n");

    while ((nota = getchar()) !=EOF){
        
        switch (nota){
            case 'A':
            case 'a':
                ++aCont;
                break;

            case 'B':
            case 'b':
                ++bCont;
                break;

            case 'C':
            case 'c':
                ++cCont;
                break;

            case 'D':
            case 'd':
                ++dCont;
                break;

            case 'F':
            case 'f':
                ++fCont;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                printf("\nLetra incorreta\n");
                printf("Digite nova nota.\n");
                break;
        }
    }
    
    printf("\nTotais de cada nota:\n");
    printf("A: %d\n", aCont);
    printf("B: %d\n", bCont);
    printf("C: %d\n", cCont);
    printf("D: %d\n", dCont);
    printf("F: %d\n", fCont);

    return 0;
}
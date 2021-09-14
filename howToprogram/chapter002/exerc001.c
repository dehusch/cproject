/*Write a single instruction and
do the follow steps*/
//Declare a variable
#include <stdio.h>
int main() {

    int thisVariable;
    //ask for a number
    printf("Enter a int number: "); scanf("%d", &thisVariable);
    printf("\n");
    //check if the number is not 7
    if ( thisVariable != 7 ){
        printf("%d is not 7\n", thisVariable);
    }
    printf("This is a C Programm\nThis is a C programm\n");
    printf("This\nis\na\nC\nProgramm\n");
    printf("    This\n    is\n    a\n    C\n    Programm\n");
}
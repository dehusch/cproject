//Review of C
#include <stdio.h>
#define PI 3.14

int main(){

    int a;
    int b;
    int c;
    int d;
    int age = 18;
    float salary = 1250.75;
    double percent_disc = 2.5;
    char gender = 'M';
    float High = 1.63;
    float value1=0, value2=0;

    
    scanf("%d\n", &a);
    scanf("%d", &b);
    
    c = a % b;
    d = a / b;
    printf("Division rest = %d\n", c);
    printf("Result of division = %d\n", d);
    printf("Age: %d\n", age);
    printf("Salary: %f\n", salary);
    printf("Discount (%%): %f\n", percent_disc);
    printf("Gender: %c\n", gender);
    printf("High: %.3f\n", High);
    
    
    //float of values 1 and 2
    printf("Enter a value: \n");
    scanf("%f", &valor1);
    printf("Enter another value: \n");
    scanf("%f", &valor2);
    printf("The first value ist: %.2f\nThe second value is: %.2f\n", valor1, valor2);

    //Constantes
    const float G = 9.80;

    printf("\n PI: %.2f", PI); //Constant defined in the header
    printf("\n G: %.2f\n", G);

    return 0;

}
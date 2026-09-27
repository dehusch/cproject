//Review of C
//For give a debbuging option use: cc -Wall -Wextra -g programa.c -o programa
//Back to black
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
    float num1=0, num2=0;


    printf("Enter a value for A integer: ");
    scanf("%d", &a);
    printf("Enter another value for B integer: ");
    scanf("%d", &b);
    printf("Enter a value for num1 as float: ");
    scanf("%f", &num1);
    printf("Enter a value for num2 as float: ");
    scanf("%f", &num2);



    c = a % b;
    d = a / b;
    float num3 = num1 / num2;
    printf("Division rest = %d\n", c);
    printf("Result of division = %d\n", d);
    printf("Result of division using float = %f\n", num3);
    printf("Age: %d\n", age);
    printf("Salary: %.3f\n", salary);
    printf("Discount (%%): %.2f\n", percent_disc);
    printf("Gender: %c\n", gender);
    printf("High: %.3f\n", High);
    
    
    //float of values 1 and 2
    printf("Enter a value: \n");
    scanf("%f", &value1);
    printf("Enter another value: \n");
    scanf("%f", &value2);
    printf("The first value ist: %.2f\nThe second value is: %.2f\n", value1, value2);
    float value3 = value1 / value2;
    printf("The float division between value1 and value2 is: %f\n", value3);


    //Constantes
    const float G = 9.80;
    printf("\n PI: %.2f", PI); //Constant defined in the header
    printf("\n G: %.2f\n", G); //Constant G defined in the main

    return 0;

}

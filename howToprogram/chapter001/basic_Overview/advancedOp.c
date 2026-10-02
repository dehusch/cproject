#include <stdio.h>
    int a = 10;
    int b = 5;


int main ()
{
    printf("a value = %d\n", a);
    printf("b value = %d\n", b);
    int sum = a + b; // Addition
    int difference = a - b; // Subtraction
    int product = a * b; // Multiplication
    int quotient = a / b; // Division
    int remainder = a % b; // Modulus
    int increment = a++; // Post-increment
    int decrement = b--; // Post-decrement

    int greaterThan = (a > b); // Greater than
    int lessThan = (a < b); // Less than
    int equalTo = (a == b); // Equal to
    int notEqualTo = (a != b); // Not equal to

    int logicalAnd = (a > 0 && b > 0); // Logical AND
    int logicalOr = (a > 0 || b > 0); // Logical OR
    int logicalNot = !(a < 0); // Logical NOT

    //Create a printf statement for each variable
    printf("sum a + b= %d\n", sum);
    printf("difference a - b = %d\n", difference);
    printf("product a * b = %d\n", product);
    printf("quotient a / b = %d\n", quotient);
    printf("remainder a / b = %d\n", remainder);
    printf("increment a + a = %d\n", increment); //error found in debbuging
    printf("decrement b - b= %d\n", decrement); //error found in debbuging
    printf("greaterThan a > b = %d\n", greaterThan);
    printf("lessThan a < b = %d\n", lessThan);
    printf("equalTo a == b = %d\n", equalTo);
    printf("notEqualTo a != b = %d\n", notEqualTo);
    printf("logicalAnd a > 0 && b > 0 = %d\n", logicalAnd);
    printf("logicalOr a > 0 || b > 0 = %d\n", logicalOr);
    printf("logicalNot !(a < 0) = %d\n", logicalNot);
    
    return 0;
}

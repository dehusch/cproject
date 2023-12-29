#include <stdio.h>
    int a = 10;
    int b = 5;


void main() {
    printf("a = %d\n", a);
    printf("b = %d\n", b);
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
    printf("sum = %d\n", sum);
    printf("difference = %d\n", difference);
    printf("product = %d\n", product);
    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);
    printf("increment = %d\n", increment);
    printf("decrement = %d\n", decrement);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("greaterThan = %d\n", greaterThan);
    printf("lessThan = %d\n", lessThan);
    printf("equalTo = %d\n", equalTo);
    printf("notEqualTo = %d\n", notEqualTo);
    printf("logicalAnd = %d\n", logicalAnd);
    printf("logicalOr = %d\n", logicalOr);
    printf("logicalNot = %d\n", logicalNot);
    
}
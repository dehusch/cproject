#include <stdio.h>

void main() {
    int a = 10;
    int b = 5;
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
    int logicalNot = !(a > 0); // Logical NOT
}
/* In C programming, a function is a reusable block of code that performs a specific task. 
It can take input in the form of parameters, execute code, and return a result. 
Functions help in organizing code, making it more readable, maintainable, and modular.

Here's an example of a simple function in C:
*/

#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int result;

    // Function call
    result = add(5, 3);

    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
/* In this example, we have defined a function named add that takes two integer parameters a and b and returns their sum.
 * The function is declared before the main function, and its definition is provided after the main function.
 * Inside the main function, we call the add function with arguments 5 and 3, and the result is stored in the variable result.
 * Finally, we print the result using the printf function.
 */

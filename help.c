#include <stdio.h>    // Standard input/output: printf, scanf, FILE, fopen, fclose.
#include <stdbool.h>  // Boolean type: bool, true, false.
#include <string.h>   // String helpers: strlen, strcpy, strcmp.
#include <stdlib.h>   // General utilities: malloc, free, rand, srand.
#include <time.h>     // Time helpers: time, used here to seed rand.

#define PI 3.14159       // Macro constant: replaced by the preprocessor before compiling.
#define SQUARE(x) ((x) * (x)) // Function-like macro: simple text substitution.

// enum creates named integer constants.
enum Difficulty {
    EASY = 1,
    MEDIUM = 2,
    HARD = 3
};

// struct groups related values under one custom type.
struct Person {
    char name[30];
    int age;
    double height;
};

// Function prototype: tells the compiler the function exists before main uses it.
int add(int a, int b);

// void means this function returns no value.
void print_line(const char *title)
{
    printf("\n==== %s ====\n", title);
}

// argc is the number of command-line arguments; argv stores the argument strings.
int main(int argc, char *argv[])
{
    print_line("Basic output");
    printf("printf prints formatted text.\n");
    printf("argc tells how many command-line arguments were passed: %d\n", argc);
    if (argc > 0) {
        printf("argv[0] is usually the program name: %s\n", argv[0]);
    }

    print_line("Primitive types");
    char letter = 'A';              // char stores one character or small integer.
    int count = 42;                 // int stores whole numbers.
    short small = 10;               // short is a smaller whole-number type.
    long big = 1000000L;            // long stores larger whole numbers.
    long long huge = 9000000000LL;  // long long stores very large whole numbers.
    float ratio = 0.5f;             // float stores decimal numbers with less precision.
    double precise = 3.1415926535;  // double stores decimal numbers with more precision.
    unsigned int positive = 25U;    // unsigned stores only zero and positive values.
    bool ready = true;              // bool stores true or false.

    printf("char=%c int=%d short=%hd long=%ld long long=%lld\n", letter, count, small, big, huge);
    printf("float=%.2f double=%.5f unsigned=%u bool=%d\n", ratio, precise, positive, ready);
    printf("sizeof returns memory size in bytes: int=%zu double=%zu char=%zu\n",
           sizeof(int), sizeof(double), sizeof(char));

    print_line("Arithmetic operations");
    int a = 10;
    int b = 3;
    printf("a=%d b=%d\n", a, b);
    printf("addition a+b=%d\n", a + b);          // + adds values.
    printf("subtraction a-b=%d\n", a - b);       // - subtracts values.
    printf("multiplication a*b=%d\n", a * b);    // * multiplies values.
    printf("integer division a/b=%d\n", a / b);  // / divides; int division removes decimals.
    printf("modulo a%%b=%d\n", a % b);           // % gives the remainder.
    printf("double division %.2f\n", (double)a / b); // Cast changes a value's type.

    print_line("Assignment and increment");
    int x = 5;          // = assigns a value.
    x += 2;             // += adds and assigns.
    x -= 1;             // -= subtracts and assigns.
    x *= 3;             // *= multiplies and assigns.
    x /= 2;             // /= divides and assigns.
    x %= 4;             // %= stores the remainder.
    x++;                // ++ increases by 1 after use.
    ++x;                // ++ increases by 1 before use.
    x--;                // -- decreases by 1 after use.
    --x;                // -- decreases by 1 before use.
    printf("x after assignment operations: %d\n", x);

    print_line("Comparison and boolean operations");
    printf("a == b: %d\n", a == b);              // == checks equality.
    printf("a != b: %d\n", a != b);              // != checks not equal.
    printf("a > b: %d\n", a > b);                // > checks greater than.
    printf("a < b: %d\n", a < b);                // < checks less than.
    printf("a >= b: %d\n", a >= b);              // >= checks greater or equal.
    printf("a <= b: %d\n", a <= b);              // <= checks less or equal.
    printf("true && false: %d\n", true && false); // && means logical AND.
    printf("true || false: %d\n", true || false); // || means logical OR.
    printf("!true: %d\n", !true);                // ! means logical NOT.

    print_line("Bitwise operations");
    unsigned int flags = 0;
    flags |= 1U;                 // | sets bits when either side has the bit.
    flags |= 2U;
    printf("flags after bitwise OR: %u\n", flags);
    printf("flags & 1: %u\n", flags & 1U);       // & keeps bits set on both sides.
    printf("flags ^ 1: %u\n", flags ^ 1U);       // ^ toggles bits that differ.
    printf("~flags: %u\n", ~flags);              // ~ flips all bits.
    printf("1 << 3: %u\n", 1U << 3);             // << shifts bits left.
    printf("8 >> 1: %u\n", 8U >> 1);             // >> shifts bits right.

    print_line("if, else if, else, and ternary");
    if (count > 50) {                             // if runs when condition is true.
        printf("count is greater than 50\n");
    } else if (count == 42) {                     // else if checks another condition.
        printf("count is exactly 42\n");
    } else {                                      // else runs when previous checks fail.
        printf("count is something else\n");
    }
    printf("ternary result: %s\n", ready ? "ready" : "not ready"); // ?: chooses one of two values.

    print_line("switch");
    enum Difficulty level = MEDIUM;
    switch (level) {                              // switch chooses a case by value.
        case EASY:
            printf("easy mode\n");
            break;                                // break exits the switch.
        case MEDIUM:
            printf("medium mode\n");
            break;
        case HARD:
            printf("hard mode\n");
            break;
        default:
            printf("unknown mode\n");            // default runs when no case matches.
            break;
    }

    print_line("Loops");
    for (int i = 0; i < 3; i++) {                 // for is ideal when the count is known.
        printf("for loop i=%d\n", i);
    }

    int while_count = 0;
    while (while_count < 3) {                     // while repeats while condition is true.
        printf("while loop count=%d\n", while_count);
        while_count++;
    }

    int do_count = 0;
    do {                                          // do while runs at least once.
        printf("do while count=%d\n", do_count);
        do_count++;
    } while (do_count < 3);

    for (int i = 0; i < 5; i++) {
        if (i == 1) {
            continue;                             // continue skips to the next loop cycle.
        }
        if (i == 4) {
            break;                                // break exits the loop.
        }
        printf("loop with continue/break i=%d\n", i);
    }

    print_line("Arrays and strings");
    int numbers[5] = {1, 2, 3, 4, 5};             // Array stores multiple values of one type.
    printf("numbers[0]=%d numbers[4]=%d\n", numbers[0], numbers[4]);

    char word[20] = "hello";                      // C string is a char array ending with '\0'.
    printf("string=%s length=%zu\n", word, strlen(word));
    strcpy(word, "C language");                   // strcpy copies one string into another.
    printf("copied string=%s\n", word);
    printf("strcmp same string result=%d\n", strcmp(word, "C language")); // 0 means equal.

    print_line("Pointers");
    int value = 100;
    int *ptr = &value;                            // & gets an address; * declares a pointer.
    printf("value=%d address=%p pointer_value=%d\n", value, (void *)ptr, *ptr);
    *ptr = 200;                                   // * dereferences: changes value at address.
    printf("value after pointer write=%d\n", value);

    int *heap_number = malloc(sizeof(int));       // malloc allocates memory on the heap.
    if (heap_number != NULL) {                    // Always check allocation before use.
        *heap_number = 77;
        printf("heap number=%d\n", *heap_number);
        free(heap_number);                        // free releases heap memory.
    }

    print_line("Functions, macros, structs");
    printf("add(2, 3)=%d\n", add(2, 3));          // Function call uses reusable code.
    printf("PI macro=%.5f SQUARE(4)=%d\n", PI, SQUARE(4));

    struct Person person = {"Ada", 36, 1.65};     // Struct literal initializes fields.
    printf("person.name=%s age=%d height=%.2f\n", person.name, person.age, person.height);
    struct Person *person_ptr = &person;
    printf("person_ptr->age=%d\n", person_ptr->age); // -> accesses a field through a pointer.

    print_line("Input example without blocking");
    char input[] = "123 45.6 text";
    int scanned_int;
    double scanned_double;
    char scanned_word[20];
    sscanf(input, "%d %lf %19s", &scanned_int, &scanned_double, scanned_word);
    // scanf reads from keyboard; sscanf reads formatted data from a string.
    printf("sscanf read int=%d double=%.1f word=%s\n", scanned_int, scanned_double, scanned_word);

    print_line("Files");
    FILE *file = fopen("help_output.txt", "w");   // fopen opens a file; "w" means write mode.
    if (file != NULL) {
        fprintf(file, "fprintf writes formatted text to a file.\n");
        fclose(file);                             // fclose saves and closes the file.
        printf("Created help_output.txt\n");
    } else {
        perror("fopen failed");                   // perror prints the reason for a system error.
    }

    print_line("Random numbers");
    srand((unsigned int)time(NULL));              // srand seeds the random number generator.
    printf("rand example from 1 to 6: %d\n", (rand() % 6) + 1);

    print_line("const and scope");
    const int max_score = 100;                    // const means the variable should not change.
    {
        int local_only = 7;                       // Block scope: visible only inside these braces.
        printf("const max_score=%d local_only=%d\n", max_score, local_only);
    }

    print_line("Common escape sequences");
    printf("newline: first line\nsecond line\n"); // \n starts a new line.
    printf("tab:\tindented\n");                  // \t inserts a tab.
    printf("quote: \"hello\"\n");                // \" prints a double quote.
    printf("backslash: \\\n");                   // \\ prints one backslash.

    print_line("Program result");
    return 0;                                     // return 0 means the program ended successfully.
}

// Function definition: code that runs when add is called.
int add(int a, int b)
{
    return a + b;                                 // return sends a value back to the caller.
}

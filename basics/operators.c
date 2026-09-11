#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    // Relational Operators
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);

    // Logical Operators
    printf("(a > 5 && b < 5): %d\n", (a > 5 && b < 5));

    return 0;
}

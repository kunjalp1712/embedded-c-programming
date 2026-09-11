#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to calculate square
int square(int number)
{
    return number * number;
}

int main()
{
    int x = 10;
    int y = 5;

    int sum = add(x, y);
    int result = square(x);

    printf("Sum: %d\n", sum);
    printf("Square of %d: %d\n", x, result);

    return 0;
}

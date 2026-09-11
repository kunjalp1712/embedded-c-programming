#include <stdio.h>

int main()
{
    int i;

    // For loop
    printf("For Loop:\n");

    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    // While loop
    printf("\nWhile Loop:\n");

    i = 1;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    // Do-while loop
    printf("\nDo-While Loop:\n");

    i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i <= 5);

    return 0;
}

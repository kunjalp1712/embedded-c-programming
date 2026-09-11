#include <stdio.h>

int main()
{
    int value = 25;

    // Pointer stores the address of a variable
    int *ptr = &value;

    printf("Value: %d\n", value);
    printf("Address of value: %p\n", (void *)&value);
    printf("Address stored in pointer: %p\n", (void *)ptr);
    printf("Value using pointer: %d\n", *ptr);

    // Changing value using pointer
    *ptr = 50;

    printf("New value: %d\n", value);

    return 0;
}

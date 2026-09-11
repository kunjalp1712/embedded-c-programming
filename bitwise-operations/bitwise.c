#include <stdio.h>

int main()
{
    unsigned char register_value = 0x00;

    // Set bit 2
    register_value |= (1U << 2);
    printf("After setting bit 2: 0x%02X\n", register_value);

    // Set bit 5
    register_value |= (1U << 5);
    printf("After setting bit 5: 0x%02X\n", register_value);

    // Clear bit 2
    register_value &= ~(1U << 2);
    printf("After clearing bit 2: 0x%02X\n", register_value);

    // Toggle bit 5
    register_value ^= (1U << 5);
    printf("After toggling bit 5: 0x%02X\n", register_value);

    // Check bit 5
    if (register_value & (1U << 5))
        printf("Bit 5 is ON\n");
    else
        printf("Bit 5 is OFF\n");

    return 0;
}

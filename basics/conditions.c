#include <stdio.h>

int main()
{
    int temperature = 35;

    if (temperature > 40)
    {
        printf("High Temperature\n");
    }
    else if (temperature >= 25)
    {
        printf("Normal Temperature\n");
    }
    else
    {
        printf("Low Temperature\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int sensor_values[5] = {10, 20, 30, 40, 50};

    printf("Sensor Values:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Sensor %d: %d\n", i + 1, sensor_values[i]);
    }

    return 0;
}

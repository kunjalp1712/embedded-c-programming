#include <stdio.h>

struct Sensor
{
    int id;
    float value;
    char status;
};

int main()
{
    struct Sensor sensor1;

    sensor1.id = 1;
    sensor1.value = 27.5;
    sensor1.status = 'A';

    printf("Sensor ID: %d\n", sensor1.id);
    printf("Sensor Value: %.2f\n", sensor1.value);
    printf("Sensor Status: %c\n", sensor1.status);

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <inttypes.h>

void movavg(float *array, uint8_t array_size, uint8_t window_size);

int main(void)
{



    return 0;
}

void movavg(float *array, uint8_t array_size, uint8_t window_size)
{
    float avg;
    float sum = 0.0;
    int i, j;

    for (i = 0; i <= (array_size - window_size); i++)
    {
        if (i > 0)
            printf(",");

        avg = 0.0;
        sum = 0.0;
        for (j = i; j < (i + window_size); j++)
        {
            sum += array[j];
        }

        avg = sum / window_size;
        printf("%.2f", avg);
    }
}
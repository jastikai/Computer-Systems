#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

struct mpudata_t {
    float data[6];
};

void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold);


int main(void)
{


    struct mpudata_t values = { { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 } };
    tarkistus(values, 5, 3.21);

    return 0;
}

void tarkistus(struct mpudata_t mpu, uint8_t index, float threshold)
{
    int i;
    if (mpu.data[index] > threshold)
    {
        for (i = 0; i <= 5; i++)
        {
            if (i > 0)
                printf(",");
            printf("%.2f", mpu.data[i]);
        }
    }

    printf("\n");
}
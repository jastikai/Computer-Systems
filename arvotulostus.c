#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <math.h>

void kirjoita_sensorit(char *str, float ax, float ay, float az, float press, float temp);

/*
int main(void)
{
    char *str;
    kirjoita_sensorit(str, 0.2536, -5.3272, -1.3277776, 101325.273261, 27.721667);
    printf("%s\n", str);
    return 0;
}
*/
void kirjoita_sensorit(char *str, float ax, float ay, float az, float press, float temp)
{
    char *ptr = str;

    //uint32_t pressure = (int)press;
    int pressure = round(press);
    //printf("%d", pressure); 

    //print ax
    sprintf(ptr, "%+.2f,", ax);
    ptr += sizeof(ax) + 1;
    sprintf(ptr, "%s", ","); ptr++;
    //print ay
    sprintf(ptr, "%+.2f", ay);
    ptr += sizeof(ay) + 1;
    sprintf(ptr, "%s", ","); ptr++;
    //print az
    sprintf(ptr, "%+.2f", az);
    ptr += sizeof(az) + 1;
    sprintf(ptr, "%s", ","); ptr++;
    //print press
    sprintf(ptr, "%u", pressure);
    ptr += sizeof(pressure) + 2;
    sprintf(ptr, "%s", ","); ptr++;
    //print temp
    sprintf(ptr, "%.2f", temp);
    ptr += sizeof(temp) + 1;
    //sprintf(ptr, "\0");
}
#include <stdlib.h> 
#include <time.h> 
#include <inttypes.h>
#include <stdio.h>
 
void shuffle(uint8_t *list, uint16_t list_size); 
/* 
int main(void) 
{ 
    srand(time(NULL));
    uint16_t listanKoko = 8;
    uint8_t lista[] = {1, 2, 3, 4, 5, 6, 7, 8};

    shuffle(lista, listanKoko);
    
    for (int i = 0; i <= listanKoko; i++)
    {
        printf("%d\n", lista[i]);
    }
    return 0; 
} 
 */ 
void shuffle(uint8_t *list, uint16_t list_size) 
{ 
    int rng; 
    int i, j; 
    uint8_t placeholder[list_size];

    uint16_t sizeVar = list_size;

    for (i = 0; i < list_size; i++)
    {
        rng = rand() % sizeVar;
        rng = (int)rng;
        placeholder[i] = list[rng];

        for (j = rng; j < sizeVar; j++)
        {
            list[j] = list[j + 1];
        }

        sizeVar--;
    }

    for (i = 0; i <= list_size; i++)
    {
        list[i] = placeholder[i];
    }
}
#include <math.h>
#include <stdlib.h>

struct piste {
  int koordinaatit[3];
  struct piste *seuraava;
};

struct polku {
  double matka;
  struct piste *pisteet;
};

void laske_kuljettu_matka(struct polku *polku);

int main(void)
{

    return 0;
}

void laske_kuljettu_matka(struct polku *polku)
{
    int *koordinaatit0;
    int *koordinaatit1;

    struct piste *piste = polku->pisteet;

    koordinaatit0 = piste->koordinaatit;

    while (piste->seuraava != NULL)
    {
        piste = piste->seuraava;
        koordinaatit1 = piste->koordinaatit;
        polku->matka += sqrt(pow(koordinaatit1[0] - koordinaatit0[0], 2) + pow(koordinaatit1[1] - koordinaatit0[1], 2) + pow(koordinaatit1[2] - koordinaatit0[2], 2));
        koordinaatit0 = koordinaatit1;
    }
}
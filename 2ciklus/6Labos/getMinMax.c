#include <stdio.h>
void getMinMax(int *pok, int vel, int *min, int *max) {
   *min = *max = *pok;
   for (int i = 1; i < vel; i++) {
      if (*(pok + i) > *max)
         *max = *(pok + i);
      if (*(pok + i) < *min)
         *min = *(pok + i);
   }
}

// KASNIJE
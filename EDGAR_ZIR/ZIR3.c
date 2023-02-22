#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tocka_s {
   int x;
   int y;
};

void put(int seed, int koraka, struct tocka_s *tocke) {
   srand(seed);

   for (int i = 0; i <= koraka; i++) {
      if (i == 0) {
         tocke->x = 0;
         tocke->y = 0;
      } else {
         (tocke + i)->x = (tocke + i - 1)->x + (rand() % 11);
         (tocke + i)->y = (tocke + i - 1)->y + (rand() % 11);
      }
   }
}
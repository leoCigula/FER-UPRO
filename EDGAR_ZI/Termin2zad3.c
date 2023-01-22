#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void igra(int seed, int brojBacanja, int *pobjednik, int *razlika);

int main() { return 0; }

void igra(int seed, int brojBacanja, int *pobjednik, int *razlika) {
   srand(seed);
   int x, y, delta;
   x = y = 0;
   for (int i = 0; i < brojBacanja; i++) {
      x += (rand() % 6 + 1);
      y += (rand() % 6 + 1);
   }
   delta = abs(x - y);
   *razlika = delta;
   if (x > y)
      *pobjednik = 1;
   else if (y > x)
      *pobjednik = 2;
   else
      *pobjednik = 0;
}
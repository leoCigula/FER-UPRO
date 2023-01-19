#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define UpperRange 60
#define LowerRange 50

int randomBr() {
   static bool init = 0;
   if (init == 0) {
      srand((unsigned)time(NULL));
      init = 1;
   }
   return (rand() % (UpperRange - LowerRange + 1) + LowerRange);
}

int main() {

   int brPojava[UpperRange - LowerRange + 1] = {};
   for (int i = 0; i < 1000; i++) {
      brPojava[randomBr() % 50]++;
   }
   for (int j = 0; j < UpperRange - LowerRange + 1; j++) {
      printf("%d %d\n", 50 + j, brPojava[j]);
   }

   getch();
   return 0;
}
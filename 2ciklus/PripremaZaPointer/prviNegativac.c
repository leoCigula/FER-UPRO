#include <stdio.h>
int *pokNeg(int *pok, int vel) {
   for (int i = 0; i < vel; i++) {
      if (*(pok + i) < 0) {
         return pok + i;
      }
   }
   return NULL;
}
int main() {
   int n;
   printf("Upisite broj clanove > ");
   scanf("%d", &n);
   int br[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &br[i]);
   }
   int *prviNeg;
   prviNeg = pokNeg(&br[0], n);
   if (prviNeg != NULL)
      printf("Prvi negativni > %d", *prviNeg);
   else
      printf("Nema negativnih oupce");
   getch();
   return 0;
}
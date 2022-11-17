#include <stdio.h>
int main() {

   int zn[11] = {0};
   int br, nbr, t;
   do {
      if (br == NULL) {
      } else {
         nbr = br;
         if (br < 0) {
            zn[10]++;
         } else {
            while (nbr > 0) {
               t = nbr % 10;
               zn[t]++;
               nbr /= 10;
            }
         }
      }
      scanf("%d", &br);
   } while (br != 0);
   for (int i = 0; i < 10; i++)
      printf("Znamenka %d: %3d\n", i, zn[i]);
   printf("Negativni : %3d", zn[10]);

   getch();
   return 0;
}
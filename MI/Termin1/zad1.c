/*
Napisati program koji će učitavati duljinu cjelobrojnog polja sve dok duljina ne
bude u intervalu [5, 10]. Potom definirati cjelobrojno polje zadane veličine te
učitati s tipkovnice njegove članove. Zamijeniti najveći i najmanji element
polja te ispisati polje. Ako postoji više najvećih odnosno najmanjih elemenata,
uzeti onog s najmanjim indeksom.

Na primjer, za sljedeći unos:

Unesite·duljinu·polja·>·3↵
Unesite·duljinu·polja·>·4↵
Unesite·duljinu·polja·>·5↵
1·1·3·5·5↵
treba ispisati:

Rezultat:·5,·1,·3,·1,·5
Pazite na zareze i razmake.

*/

#include <stdio.h>
int main() {
   int br;
   do {
      printf("Unesite duljinu polja > ");
      scanf("%d", &br);
   } while (!(br >= 5 && br <= 10));
   int num[br];
   for (int i = 0; i < br; i++)
      scanf("%d", &num[i]);
   int max, maxind, min, minind, t;
   max = min = num[0];
   maxind = minind = 0;
   for (int i = 1; i < br; i++) {
      if (num[i] > max) {
         max = num[i];
         maxind = i;
      }
      if (num[i] < min) {
         min = num[i];
         minind = i;
      }
   }
   t = max;
   num[maxind] = min;
   num[minind] = t;
   printf("Rezultat:");
   for (int i = 0; i < br; i++) {
      if (i != br - 1)
         printf(" %d,", num[i]);
      else
         printf(" %d", num[i]);
   }

   return 0;
}

/*
S tipkovnice učitati prirodni broj (ne morate provjeravati ispravnost unosa)
koji predstavlja prvi član niza a1. Potom računati i ispisivati članove niza
definiranog na sljedeći način:

ako je ai paran, ai+1 = ai / 2
ako je ai neparan, ai+1 = 3 * ai + 1
Članove niza ispisivati sve dok se član niza vrijednosti 1 u ispisu ne pojavi
treći put.

Primjeri izvršavanja programa:

Unesite·prirodni·broj·>·5↵
Rezultat:·5,·16,·8,·4,·2,·1,·4,·2,·1,·4,·2,·1
Unesite·prirodni·broj·>·10000↵
Rezultat:·10000,·5000,·2500,·1250,·625,·1876,·938,·469,·1408,·704,·352,·176,·88,·44,·22,·11,·34,·17,·52,·26,·13,·40,·20,·10,·5,·16,·8,·4,·2,
1,·4,·2,·1,·4,·2,·1
Unesite·prirodni·broj·>·1↵ Rezultat:·1,·4,·2,·1,·4,·2,·1
*/
#include <stdio.h>
int main() {
   int a, cnt = 0;
   printf("Unesite prirodni broj > ");
   scanf("%d", &a);
   if (a == 1)
      cnt++;
   printf("Rezultat: %d", a);
   while (cnt != 3) {
      if (a % 2 == 0)
         a /= 2;
      else {
         a *= 3;
         a++;
      }
      if (a == 1)
         cnt++;
      printf(", %d", a);
   }

   getch();
   return 0;
}
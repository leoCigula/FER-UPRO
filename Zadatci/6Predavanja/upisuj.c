#include <stdio.h>
#define GRESKA "Sjebao si nes"
int main() {
   printf("Upisite brojeve: ");
   int br, i = 0, pos = 0, neg = 0;
   int najvpos, najmneg;
   scanf("%d", &br);
   while (br != 0) {
      i++;
      if (br > 0) {
         pos++;
         if (pos == 1 || (br > najvpos))
            najvpos = br;
      } else {
         neg++;
         if (neg == 1 || (br < najmneg))
            najmneg = br;
      }
      scanf("%d", &br);
   }
   if (i != (neg + pos))
      printf(GRESKA);
   else {
      if (i == 0)
         printf("Nije upisan niti jedan neg/pos broj");
      else {
         if (pos == 0) {
            printf("Nije upisan niti jedan positivan broj");
         } else
            printf("Najveci pozitivan > %d", najvpos);
         if (neg == 0) {
            printf("Nije upisan niti jedan negativan broj");
         } else
            printf("Najmanji negativni broj > %d", najmneg);
      }
   }

   getch();
   return 0;
}
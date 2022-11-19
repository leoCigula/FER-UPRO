/*
Za sve i > 2, član niza ai izračunava se na sljedeći način:

ako je indeks i člana neparan ai = ai-2*3
ako je indeks i člana paran ai = ai-2*2
Potrebno je računati i ispisivati članove niza sve dok je suma (ispisanih)
članova niza manja od maxSuma.
*/

#include <stdio.h>
int main() {
   int a[100], maxsum, sum = 0, t = 0;
   printf("Upisite tri prirodna broja > ");
   scanf("%d %d %d", &a[0], &a[1], &maxsum);
   printf("Rezultat: ");
   sum += a[0];
   if (sum < maxsum) {
      t++;
      sum += a[1];
      if (sum < maxsum) {
         t++;
         a[t] = a[0] * 3;
         sum += a[t];
         while (sum < maxsum) {
            t++;
            if (t % 2 == 1)
               a[t] = a[t - 2] * 2;
            else
               a[t] = a[t - 2] * 3;
            sum += a[t];
         }
      }
   }
   for (int i = 0; i < t; i++) {
      if (i == 0)
         printf("%d", a[i]);
      else
         printf(", %d", a[i]);
   }

   getch();
   return 0;
}
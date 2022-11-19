/*
7.5 bodova
Učitati vrijednosti za broj redaka m i broj stupaca n dvodimenzijskog polja
cijelih brojeva (tj. matrice) pri čemu m i n moraju biti prirodni brojevi. Ako
neki od njih nije prirodan broj, ponoviti učitavanje toga broja.

Potom po retcima učitati vrijednosti članova polja.

Nakon toga treba sve nenegativne elemente polja koji imaju neparni indeks retka
zamijeniti jedinicama, a sve nenegativne elemente polja koji imaju parni indeks
retka zamijeniti nulama. Negativni elementi polja ostaju nepromijenjeni.

Nakon provedenog postupka treba ispisati novu matricu.
Zadatak treba riješiti bez upotrebe pomoćnog polja.
Kod ispisa strogo paziti na razmake i nove retke.

Primjeri izvršavanja programa:
*/

#include <stdio.h>
int main() {
   int m, n;
   do {
      printf("Unesite m > ");
      scanf("%d", &m);
   } while (m < 1);
   do {
      printf("Unesite n > ");
      scanf("%d", &n);
   } while (n < 1);
   int br[m][n];
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &br[i][j]);
         if (i % 2 == 1 && br[i][j] >= 0)
            br[i][j] = 1;
         if (i % 2 == 0 && br[i][j] >= 0)
            br[i][j] = 0;
      }
   }
   printf("Rezultat:\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if (j == n - 1 && i != m - 1)
            printf("%3d\n", br[i][j]);
         else
            printf("%3d", br[i][j]);
      }
   }

   getch();
   return 0;
}
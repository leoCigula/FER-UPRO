/*
Učitati vrijednost dimenzije kvadratne matrice n (dvodimenzijsko polje). Ako n
nije prirodan broj, ponoviti učitavanje.

Potom po retcima učitati vrijednosti članova ovog polja.

Nakon toga treba sve elemente sporedne dijagonale u retcima s neparnim indeksom
retka zamijeniti jedinicama, a sve elemente sporedne dijagonale u retcima s
parnim indeksom retka zamijeniti nulama. Ostali elementi ostaju nepromijenjeni.

Nakon provedenog postupka treba ispisati izmijenjenu matricu. Zadatak treba
riješiti bez upotrebe pomoćnog polja. Kod ispisa strogo paziti na razmake i nove
retke.

Primjeri izvršavanja programa:
*/

#include <stdio.h>
int main() {
   int n;
   do {
      printf("Upisite n > ");
      scanf("%d", &n);
   } while (n < 1);
   int br[n][n];
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &br[i][j]);
         if (n - 1 - i == j) {
            if (i % 2 == 0)
               br[i][j] = 0;
            else
               br[i][j] = 1;
         }
      }
   }
   printf("Rezultat:\n");
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if (j != n - 1 || i == n - 1)
            printf(" %2d", br[i][j]);
         else
            printf(" %2d\n", br[i][j]);
      }
   }
   getch();
   return 0;
}
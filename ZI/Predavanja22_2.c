/*
S tipkovnice učitavati nizove znakova, redak po redak (niti jedan niz
uključujući oznaku novog retka sigurno neće biti dulji od 40 znakova) dok god se
ne učita redak koji je (uključujući oznaku novog retka) kraći od 10 znakova.
Ispisati koliko je u učitanim nizovima (koji su bili dulji od 10 znakova) bilo
ukupno znamenki

U ovom 12,345 nizu
ima 710 0 znamenki
abcdefghi
koje treba 123 brojati
1premalo
Broj znamenki: 12
*/

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 40
int main() {
   int uk = 0, cnt = 0;
   char rec[MAX + 1];
   do {
      uk += cnt;
      cnt = 0;
      fgets(rec, MAX + 1, stdin);
      for (int i = 0; i < strlen(rec); i++) {
         if (isdigit(rec[i]))
            cnt++;
      }
   } while (strlen(rec) >= 10);
   printf("Broj znamenki: %d", uk);

   getch();
   return 0;
}
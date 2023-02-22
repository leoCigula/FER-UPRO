#include <stdio.h>
#include <string.h>

int unosKonverzija(char *niz, int *dulj) {
   char c;
   *dulj = 0;
   int konv = 0;
   while ((c = getchar()) != '!' && *dulj < 10) {
      if (c >= '0' && c <= '9') {
         *(niz + *dulj) = '?';
         konv++;
      } else if (c >= 'A' && c <= 'Z') {
         *(niz + *dulj) = c + 32;
      }
      ++*dulj;
   }
   *(niz + 1 + *dulj) = '\0';
   return konv;
}
#include <math.h>
#include <stdio.h>
#include <string.h>
#define Lenght 20

void IzbaciNR(char *pok) void IzbaciSamoglase(char *pok);

int main() {
   char niz[Lenght + 1];
   fgets(niz, 20, stdin);
   IzbaciNR(niz);
   IzbaciSamoglase(niz);

   getch();
   return 0;
}

void IzbaciNR(char *pok) {
   int i = 0;
   while (*(pok + i) != '\0') {
      if (*(pok + i) == '\n')
         *(pok + i) = '\0';
      i++;
   }
   fputs(pok, stdout);
   return 0;
}
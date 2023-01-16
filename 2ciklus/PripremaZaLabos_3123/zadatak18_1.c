#include <math.h>
#include <stdio.h>
#define duljina 20

void IzbaciNR(char *pok);
int main() {
   char niz[duljina + 1 + 1];
   fgets(niz, 20 + 1 + 1, stdin);
   IzbaciNR(niz);

   getch();
   return 0;
}

void IzbaciNR(char *pok) {
   int i = 0;
   while (*(pok + i) != '\0') {
      if (*(pok + i) == '\n')
         *(pok + i) = '!';
      i++;
   }
   fputs(pok, stdout);
   return 0;
}
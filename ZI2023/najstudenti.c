#include <stdio.h>
#include <stdlib.h>
struct rezultat {
   char ime[15 + 1];
   int bodovi;
};
int najstudenti(char *txtdat, char *bindat) {
   struct rezultat r;
   int rez = 0;
   FILE *tok = fopen(, "r+");
   FILE *bin = fopen(bindat, "w");
   if (tok == NULL || bin == NULL) {
      rez = -1;
      return rez;
   }
   while (fscanf(tok, "%s %d", r.ime, &r.bodovi) == 2) {
      if (r.bodovi >= 80) {
         rez++;
         fwrite(&r, sizeof(r), 1, bin);
      }
   }
   return rez;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char jmbag[10 + 1], ime[20 + 1], prezime[20 + 1];
   float points, uk = 0, ars;
   int cnt = 0;
   FILE *tok = fopen("E:/bodovi.txt", "r");
   if (tok == NULL) {
      printf("Nije uspjelo otvaranje >");
      exit(EXIT_FAILURE);
   } else {
      while (fscanf(tok, "%s %s %s %f\n", jmbag, ime, prezime, &points) == 4) {
         cnt++;
         uk += points;
      }
      ars = uk / cnt;
      fseek(tok, 0L, SEEK_SET);
      while (fscanf(tok, "%s %s %s %f\n", jmbag, ime, prezime, &points) == 4) {
         if (points > ars)
            printf("%s %s %s %.1f\n", jmbag, ime, prezime, points);
      }
      fclose(tok);
      getch();
      return 0;
   }
}
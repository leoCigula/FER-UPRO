#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   FILE *tok = fopen("E:/brojevi.txt", "r+");
   float br, zbr = 0, ars;
   int cnt = 0;
   if (tok == NULL)
      exit(EXIT_FAILURE);
   else {
      while (fscanf(tok, "%f", &br) == 1) {
         cnt++;
         zbr += br;
      }
   }
   fclose(tok);
   if (cnt != 0) {
      ars = zbr / cnt;
      printf("%f", ars);
   } else
      printf("Nije ucitan nijedan broj");

   getch();
   return 0;
}
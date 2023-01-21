#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
   FILE *tok = fopen("E:/mjerenja.txt", "r");
   int dan, brMje;
   float temp, zbr = 0, pros;
   if (tok == NULL)
      exit(EXIT_FAILURE);
   else {
      while (fscanf(tok, "#%d#%d", &dan, &brMje) == 2) {
         zbr = 0;
         pros = 0;
         for (int i = 0; i < brMje; i++) {
            fscanf(tok, "#%*d#%f ", &temp);
            zbr += temp;
         }
         pros = zbr / brMje;
         printf("Dan=%3d, Broj mjerenja=%2d, Prosjek=%6.2f\n", dan, brMje,
                pros);
      }
   }
   fclose(tok);
   getch();
   return 0;
}
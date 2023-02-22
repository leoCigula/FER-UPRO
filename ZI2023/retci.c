#include <stdio.h>
float zamijeniRetke(float *p, int brRed, int brStup, int indRed1, int indRed2);

int main(void) {
   int brojRedaka, brojStupaca, indeksRetka1, indeksRetka2;
   printf("Upisi broj redaka i stupaca > ");
   scanf("%d %d", &brojRedaka, &brojStupaca);
   printf("Upisi indekse redaka za zamjenu > ");
   scanf("%d %d", &indeksRetka1, &indeksRetka2);
   float polje[brojRedaka][brojStupaca];
   printf("Upisi elemente matrice > \n");
   for (int i = 0; i < brojRedaka; ++i)
      for (int j = 0; j < brojStupaca; ++j)
         scanf("%f", &polje[i][j]);

   float razlikaSuma = zamijeniRetke(polje, brojRedaka, brojStupaca,
                                     indeksRetka1, indeksRetka2);

   for (int i = 0; i < brojRedaka; ++i) {
      for (int j = 0; j < brojStupaca; ++j) {
         printf("%8.3f ", polje[i][j]);
      }
      printf("\n");
   }
   printf("Razlika suma: %8.3f", razlikaSuma);

   getch();

   return 0;
}
float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1,
                    int indRed2) {
   float sum1, sum2;
   sum1 = sum2 = 0;
   float t;
   for (int i = 0; i < brStup; i++) {
      sum1 += *(polje + indRed1 * brStup + i);
      sum2 += *(polje + indRed2 * brStup + i);
      t = *(polje + indRed1 * brStup + i);
      *(polje + indRed1 * brStup + i) = *(polje + indRed2 * brStup + i);
      *(polje + indRed2 * brStup + i) = t;
   }
   return sum1 - sum2;
}
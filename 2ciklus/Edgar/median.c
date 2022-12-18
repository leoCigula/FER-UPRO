#include <stdio.h>
float median(float a, float b, float c) {
   float max = a, min = a, median = a + b + c;
   if (b > max)
      max = b;
   if (c > max)
      max = c;
   if (b < min)
      min = b;
   if (c < min)
      min = c;
   return (median - min - max);
}
int main() {
   float a, b, c, arsr, med, dif;
   printf("Upisite tri realna broja > ");
   scanf("%f %f %f", &a, &b, &c);
   printf("\n");
   med = median(a, b, c);
   arsr = (a + b + c) / 3.f;
   dif = med - arsr;
   if (dif < 0)
      dif *= -1;
   printf("Apsolutna vrijednost razlike mediana i srednje vrijednosti je: %.3f",
          dif);
   getch();
   return 0;
}
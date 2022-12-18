#include <math.h>
#include <stdio.h>
int factorial(int n) {
   int f = 1;
   if (n >= 2) {
      for (int i = 2; i <= n; i++)
         f *= i;
   }
   return f;
}
int zbroj_znamenaka(int n) {
   int br = n, suma = 0;
   while (br != 0) {
      suma += (br % 10);
      br /= 10;
   }
   return suma;
}
void savrsen_kvadrat(int n, int og) {
   printf("\n");
   if ((int)sqrt((double)n) == sqrt((double)n))
      printf("Suma znamenaka od %d! je savrsen kvadrat.", og);
   else
      printf("Suma znamenaka od %d! nije savrsen kvadrat.", og);
}
int main() {
   int br;
   printf("Upisite prirodni broj >");
   scanf("%d", &br);
   savrsen_kvadrat(zbroj_znamenaka(factorial(br)), br);
   return 0;
}
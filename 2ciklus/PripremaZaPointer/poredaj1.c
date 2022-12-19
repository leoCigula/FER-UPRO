#include <stdio.h>
void Poredaj(double *a, double *b, double *c) {
   int t;
   // zamjena trece i druge 321 - 312
   if (*b > *c) {
      t = *c;
      *c = *b;
      *b = t;
   }
   // zamjena prve i druge 132
   if (*a > *b) {
      t = *b;
      *b = *a;
      *a = t;
   }
   // ponovno 3 i 2 132 - 123
   if (*b > *c) {
      t = *c;
      *c = *b;
      *b = t;
   }

   return;
}
int main() {
   double a, b, c;
   printf("Upisite tri realna broja >");
   scanf("%lf %lf %lf", &a, &b, &c);
   Poredaj(&a, &b, &c);
   printf("%lf %lf %lf", a, b, c);

   getch();
   return 0;
}
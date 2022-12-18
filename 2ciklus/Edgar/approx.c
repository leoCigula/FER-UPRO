#include <math.h>
#include <stdio.h>
double e_approx(int n) {
   double sum = 1;
   int fakt = 1;
   for (int i = 1; i <= n; i++) {
      fakt *= i;
      sum += (1.0 / fakt);
   }
   return sum;
}
int main() {
   printf("Upisite broj n: ");
   int n;
   scanf("%d", &n);
   double ap = e_approx(n);
   printf("Aproksimacija e: %.12lf\n", ap);
   printf("Razlika: %.12lf", ap - exp(1));
   getch();
   return 0;
}
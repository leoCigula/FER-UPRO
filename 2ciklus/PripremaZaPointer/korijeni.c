#include <math.h>
#include <stdio.h>
void Korijeni(unsigned int n) {
   double k2, k3, k5;
   k2 = pow((double)n, 1 / 2.f);
   k3 = pow((double)n, (1.f / 3.f));
   k5 = pow((double)n, 0.2f);
   printf("%.8lf\n%f\n%f\n", k2, k3, k5);

   return;
}
int main() {
   unsigned int n = 12;
   Korijeni(n);
   getch();
   return 0;
}
#include <math.h>
#include <stdio.h>
int fakt(unsigned int n) {
   int res = 1;
   if (n > 1) {
      for (int i = 2; i <= n; i++)
         res *= i;
   }
   return res;
}
double apsolut(double s1, double s2) {
   if ((s1 - s2) < 0)
      return -(s1 - s2);
   else
      return (s1 - s2);
}
double sinus(double x, unsigned int n) {
   float sum = 0;
   for (int i = 1; i <= n; i++) {
      sum += (pow(-1, i + 1) * (pow(x, (2 * i) - 1))) / (fakt(2 * i - 1) * 1.0);
   }
   return sum;
}
int main() {
   double x;
   unsigned int n;
   printf("Upisi x i n >");
   scanf("%lf %u", &x, &n);
   double s1 = sin(x);
   double s2 = sinus(x, n);
   printf(" sin (%lf) i sinus ( %lf )\n", s1, s2);
   printf(" Razlika %lf", apsolut(s1, s2));
   getch();
   return 0;
}
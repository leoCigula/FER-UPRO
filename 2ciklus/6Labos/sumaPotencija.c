#include <math.h>
#include <stdio.h>
void sumaPotencija(int a, int b, int c, int n, int *rez1, int *rez2) {

   int sum1 = 0, sum2 = 0;
   sum1 = pow(a, n) + pow(b, n) + pow(c, n);
   *rez1 = sum1;
   sum2 = pow(a + b + c, n);
   *rez2 = sum2;

   return;
}
// Ferko trazi ovo //
int main() {
   printf("Unesite a, b, c i n > ");
   int a, b, c, n, r1, r2;
   int *rez1, *rez2;
   rez1 = &r1;
   rez2 = &r2;
   scanf("%d %d %d %d", &a, &b, &c, &n);
   sumaPotencija(a, b, c, n, rez1, rez2);
   printf("Suma %d potencija iznosi %d\n %d-ta potencija sume je %d", n, *rez1,
          n, *rez2);
   getch();
   return 0;
}
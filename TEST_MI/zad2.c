/// zamjeni parni index sa susjednom,a zadnji ako ne diraj
#include <stdio.h>
int main() {
   int n, i, t;
   do {
      printf("Unesite n > ");
      scanf("%d", &n);
   } while (n < 1);
   int a[n];
   for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }
   for (i = 0; i < n; i++) {
      if (i % 2 == 0 && i != n - 1) {
         t = a[i];
         a[i] = a[i + 1];
         a[i + 1] = t;
      }
   }
   for (i = 0; i < n; i = i + 1) {
      printf("%d ", a[i]);
   }
   getch();
   return 0;
}
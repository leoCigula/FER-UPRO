#include <stdio.h>
int min(int a, int b);
int main() {
   int m, n;
   m = n = 7;
   for (int i = 1; i <= m; i++) {
      for (int j = 1; j <= n; j++) {
         printf("%4.2f  ", (min(i, j) * 1.f) / j);
      }
      printf("\n");
   }

   getch();
   return 0;
}

int min(int a, int b) { return (a > b) ? b : a; }
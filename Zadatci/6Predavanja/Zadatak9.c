#include <stdio.h>
int main() {
   int n, m;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);
   for (int i = 1; i <= m; i++) {
      for (int j = i + (n - 1); j >= i; j--) {
         if (j != i) {
            printf("%2d ", j);

         } else
            printf("%2d", j);
      }
      printf("\n");
   }
   getch();
   return 0;
}
#include <stdio.h>
int main() {
   int m, n;
   printf("Upisite dva prirodna broja m i n > ");
   scanf("%d %d", &m, &n);
   if (m < n) {
      printf("%d", (m * n) % 10);
   } else {
      for (int i = m + n - 1; i > 0; i--) {
         if ((i % 5 == 0) || (i % 3 == 0))
            printf("%d ", i);
      }
   }
   getch();
   return 0;
}
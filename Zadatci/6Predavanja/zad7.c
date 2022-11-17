#include <stdio.h>
int main() {
   int n, cnt = 0;
   printf("Upisite broj > ");
   scanf("%d", &n);
   if (!(n >= 1 && n <= 10)) {

   } else {
      for (int i = 0; i < n; i++) {
         printf("\n");
         for (int j = 0; j < n; j++) {
            if (i > j)
               printf("   ");
            else {
               cnt++;
               if (j != n - 1) {
                  printf("%2d ", cnt);
               } else
                  printf("%2d", cnt);
            }
         }
      }
   }
   getch();
   return 0;
}
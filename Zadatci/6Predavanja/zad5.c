#include <stdio.h>
int main() {
   int m, n;
   printf("Upisite m i n > ");
   scanf("%d %d", &m, &n);
   if (n > m)
      printf("It's not working");
   else {
      int br = 1, naz1 = 1, naz2 = 1, naz;
      for (int i = 1; i <= m; i++) {
         br *= i;
      }
      for (int i = 1; i <= n; i++) {
         naz1 *= i;
      }
      for (int i = 1; i <= (m - n); i++) {
         naz2 *= i;
      }
      naz = naz1 * naz2;
      printf("m povrh n : %d", (br / naz));
      getch();
   }
   return 0;
}
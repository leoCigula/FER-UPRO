#include <stdio.h>
int main() {
   int n, cnt = 0, t = 1, br;
   printf("Upisite prirodni broj >");
   scanf("%d", &n); /// brojcek kojim pocinjemo
   br = n;
   do {
      if (n == 1) {
         printf("1 "); // ispisuje clan niza
         t = 0;        // time to stop
      }
      if (t) {
         if (cnt % 10 == 9)
            printf("%d\n", n);
         else
            printf("%d ", n);

         if (n % 2 == 0) {
            n /= 2;
         } else
            n = 3 * n + 1;
         cnt++;
      }

   } while (t);
   printf("\nZa n = %d , total stopping time : %d", br, cnt);
   getch();
   return 0;
}
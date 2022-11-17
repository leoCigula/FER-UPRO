#include <stdio.h>
int main() {
   int a[500], i = 1, br = 1, t = 0;
   a[0] = 2;
   while (i < 500) {
      t = 0;
      for (int j = 2; j <= (int)sqrt((a[0] + br) * 1.f); j++) {
         if ((a[0] + br) % j == 0)
            t = 1;
         if (t == 1)
            break;
      }
      if (t == 0) {
         a[i] = a[0] + br;
         i++;
         br++;
      } else
         br++;
   }
   for (int i = 0; i < 500; i++) {
      printf("%d. %d\n", i + 1, a[i]);
   }

   getch();
   return 0;
}
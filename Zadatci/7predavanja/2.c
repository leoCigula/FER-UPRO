#include <stdio.h>
int main() {
   int br = 1000;
   do {
      int t = 0;
      for (int i = 2; i <= (int)sqrt(br * 1.f); i++) {
         if (br % i == 0)
            t = 1;
         if (t)
            break;
      }
      if (t == 0)
         printf("%d\n", br);
      br++;
   } while (br <= 10000);
   getch();
   return 0;
}
#include <stdio.h>
int main() {
   int cnt = 0, br = 2, t = 0;
   while (cnt < 25) {
      t = 0;
      for (int i = 2; i <= (int)sqrt((br * 1.f)); i++) {
         if (br % i == 0)
            t = 1;
         if (t)
            break;
      }
      if (t == 0) {
         printf("%d\n", br);
         cnt++;
      }

      br++;
   }
   getch();
   return 0;
}
#include <stdio.h>
int main() {
   int br[10], t;
   printf("Upisite 10 cijelih brojeva > ");
   for (int i = 0; i < 10; i++)
      scanf("%d", &br[i]);
   for (int i = 0; i < 10 / 2; i++) {
      t = br[i];
      br[i] = br[10 - 1 - i];
      br[10 - 1 - i] = t;
   }
   for (int i = 0; i < 10; i++)
      printf("%d, ", br[i]);

   getch();
   return 0;
}
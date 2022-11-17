#include <stdio.h>
int main() {
   int br[10];
   printf("Upisite 10 cijelih brojeva > ");
   for (int i = 0; i < 10; i++)
      scanf("%d", &br[i]);
   for (int i = 10 - 1; i >= 0; i--) {
      if (i != 0)
         printf("%d, ", br[i]);
   }
   getch();
   return 0;
}
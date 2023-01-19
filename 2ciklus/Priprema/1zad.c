#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

   int n;
   do {
      scanf("%d", &n);
   } while (!(n >= 3 && n <= 60));
   srand((unsigned)time(NULL));
   for (int i = 0; i < n; i++) {
      int x = rand();
      char ascii = x % ('Z' - 'A' + 1) + 'A';
      printf("%c", ascii);
   }

   getch();
   return 0;
}
#include <stdio.h>
int main() {
   int b[40];
   b[0] = b[1] = 1;
   for (int i = 2; i < 40; i++) {
      b[i] = b[i - 1] + b[i - 2];
   }
   for (int i = 0; i < 40; i++)
      printf("%d\n", b[i]);

   getch();
   return 0;
}
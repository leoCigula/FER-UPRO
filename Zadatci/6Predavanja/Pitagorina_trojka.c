#include <stdio.h>
int main() {
   int cnt = 0;
   for (int i = 1; i < 100; i++) {
      for (int j = 1; j < 100; j++) {
         for (int z = 1; z <= 100; z++) {
            if (((i * i) + (j * j)) == (z * z)) {
               cnt++;
               printf("%3d. trojka: %d^2 + %d^2 = %d^2\n", cnt, i, j, z);
            }
         }
      }
   }
   getch();
   return 0;
}
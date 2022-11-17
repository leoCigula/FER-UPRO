#include <stdio.h>
int main() {
   int a[5], t;
   printf("Unesite 5 prirodnih brojeva > ");
   for (int i = 5 - 1; i >= 0; i--) {
      scanf("%d", &a[i]);
   }
   printf("Unesite granicu > ");
   scanf("%d", &t);
   printf("Elementi polja manji od granice: ");
   for (int i = 0; i < 5; i++) {
      if (a[i] < t)
         printf("%d ", a[i]);
   }

   return 0;
}
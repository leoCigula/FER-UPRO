#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
   srand((unsigned)time(NULL));
   int s, z, o;
   s = z = o = 0;
   for (int i = 0; i < 1000; i++) {
      char x = rand() % (126 - 32 + 1) + 32;
      if (isalnum(x)) {
         if (isdigit(x))
            z++;
         else
            s++;
      } else
         o++;
   }
   printf("%-9s: %4d\n", "Slova", s);
   printf("%-9s: %4d\n", "Znamenke", z);
   printf("%-9s: %4d\n", "Ostali", o);

   int c = getchar();
   return 0;
}
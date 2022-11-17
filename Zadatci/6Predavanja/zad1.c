#include <stdio.h>
int main() {
   float zbr = 0;
   for (int i = 1; i <= 1000; i++) {
      if (i % 2 == 1)
         zbr += (1.f / i);
      else
         zbr -= (1.f / i);
   }
   printf("%f", zbr);
   getch();

   return 0;
}
#include <stdio.h>
int main() {

   unsigned int br, uz;
   printf("Unesite 32-bitni broj > ");
   scanf("%ud", &br);
   printf("Unesite 8-bitni uzorak > ");
   scanf("%ud", &uz);
   int t = 0;
   while (br != 0) {
      if ((br & 0xFF) == uz)
         t++;
      br >>= 1;
   }
   printf("Rezultat: %d", t);

   getch();
   return 0;
}
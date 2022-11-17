#include <stdio.h>
int main() {
   int br = 0, suma = 0;
   do {
      suma += br; // ako hocemo i prekrsni broj stavimo ispod scanf();
      printf("Upisi broj: ");
      scanf("%d", &br);

   } while ((br % 3 == 0) || (br % 7 == 0));
   printf("Suma brojeva je %d", suma);
   getch();
   return 0;
}
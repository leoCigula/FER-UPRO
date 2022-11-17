#include <stdio.h>
int main() {
   int t, sum = 0, br, prbr = 0;

   do {
      scanf("%d", &br);
      if ((prbr == 0 && br != 0) || (br * prbr < 0)) {
         t = 1;
         sum += br;
         prbr = br;
      } else
         t = 0;
   } while (t == 1);
   printf("Suma je %d", sum);
   getch();
   return 0;
}
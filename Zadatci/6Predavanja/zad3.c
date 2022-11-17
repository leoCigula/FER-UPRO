#include <stdio.h>
int main() {
   int br;
   int n = 0, brcp, nbr = 0, place = 1;
   printf("Upisi broj [1,31]: ");
   scanf("%d", &br);
   brcp = br;
   if (!(br >= 1 && br <= 31))
      printf("Neispravan broj");
   else {
      while (brcp) {
         n++;
         nbr += (brcp % 2) * place;
         brcp /= 2;
         place *= 10;
      }
      printf("%d\n", n);
      printf("%d", nbr);
   }
   getch();
   return 0;
}
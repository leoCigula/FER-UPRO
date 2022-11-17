#include <stdio.h>
int main() {
   int br;
   printf("Upisite prirodni broj: ");
   scanf("%d", &br);
   if (br < 100) {
      if (br % 2 == 0)
         printf("%d je djeljiv s 2.", br);
      else
         printf("%d nije djeljiv s 2.", br);
   } else if (br >= 100 && br <= 200) {
      printf("Zbroj prve i trece znamenke je %d.", (br % 10) + (br / 100));
   } else {
      printf("Umnozak zadnje dvije znamenke je %d.",
             (br % 10) * ((br % 100) / 10));
   }
   getch();
   return 0;
}
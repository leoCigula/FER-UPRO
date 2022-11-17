#include <stdio.h>
int main() {

   int br;
   int n, dek = 0;
   printf("Upisi broj znamenki: ");
   scanf("%d", &br);
   if (!(br >= 1 && br <= 31))
      printf("Neispravan broj znamenki!");
   else {
      for (int i = 0; i < br; i++) {
         scanf("%d", &n);
         dek = dek * 2 + n;
      }
      printf("%d", dek);
      getch();
   }

   return 0;
}
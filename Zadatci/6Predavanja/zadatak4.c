#include <stdio.h>
int main() {
   int n, dek = 0, znm;
   printf("Upisi broj znamenki: ");
   scanf("%d", &n);
   if (!(n >= 1 && n <= 10))
      printf("Neispravan broj");
   else {
      for (int i = 0; i < n; i++) {
         scanf("%d", &znm);
         dek = dek * 8 + znm;
      }
      printf("%d", dek);
   }
   getch();
   return 0;
}
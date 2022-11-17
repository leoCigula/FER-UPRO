#include <stdio.h>
int main() {
   int n;
   printf("Upisi tip kvadratne mat");
   scanf("%d", &n);
   if (!(n >= 1 && n <= 10)) {
      printf("Nije pravilanr red matrice");
   } else {
      for (int i = 0; i < n; i++) {
         printf("\n");
         for (int j = 0; j < n; j++) {
            if (j != n - 1) {
               if (j == i)
                  printf("1 ");
               else
                  printf("0 ");
            } else {
               if (j == i)
                  printf("1");
               else
                  printf("0");
            }
         }
      }
   }
   getch();
   return 0;
}
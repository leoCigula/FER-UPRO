#include <stdio.h>
int main() {
   int n, t;
   printf("Unesite dimenzije polja: ");
   scanf("%d", &n);
   int br[n][n];
   printf("Unesite elemente polja: ");
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
         scanf("%d", &br[i][j]);
   }
   int br2[n][n];
   printf("\nIzracunato polje: ");
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         t = br[i][j];
         br[i][j] = br[j][i];
         br[j][i] = t;
      }
   }
   getch();
   return 0;
}

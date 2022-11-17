#include <stdio.h>
int main() {
   int m, n;
   printf("Upisati m i n > ");
   scanf("%d %d", &m, &n);
   int br[m][n];
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &br[i][j]);
      }
   }
   int njsuma = 0, suma, ind;
   for (int i = 0; i < m; i++) {
      suma = 0;
      for (int j = 0; j < n; j++) {
         suma += br[i][j];
      }
      if (suma >= njsuma) {
         njsuma = suma;
         ind = i;
      }
   }
   printf(" \"Najveci redak:\n");
   for (int i = 0; i < n; i++)
      printf("%5d", br[ind][i]);

   getch();
   return 0;
}
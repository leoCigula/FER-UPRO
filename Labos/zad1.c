#include <stdio.h>
int main() {
   int m, n;
   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);
   int br[m][n];
   float rez[m][n];
   printf("Upisite %d x %d clanova > \n", m, n);
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &br[i][j]);
      }
   }
   printf("\n");
   printf("Rezultat:\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         rez[i][j] = ((br[i][j] * 1.f) / 2.f) + (i * j);
         printf("%7.2f ", rez[i][j]);
      }
      printf("\n");
   }
   return 0;
}

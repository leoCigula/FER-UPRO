#include <stdio.h>
int main() {
   int m, n;
   printf("Unesite m > ");
   scanf("%d", &m);
   printf("Unesite n > ");
   scanf("%d", &n);
   int br[m][n], cnt[m], t;
   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         scanf("%d", &br[i][j]);
   printf("Unesite trazenu udaljenost > ");
   scanf("%d", &t);
   for (int i = 0; i < m; i++) {
      cnt[i] = 0;
      for (int j = 0; j < n - 1; j++)
         if ((br[i][j + 1] - br[i][j]) == t)
            cnt[i]++;
      printf("%d. redak, parova: %d\n", i + 1, cnt[i]);
   }

   getch();
   return 0;
}
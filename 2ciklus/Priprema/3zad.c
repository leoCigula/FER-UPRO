#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void pocniGadati(int m, int n, int *matr, int t) {
   srand((unsigned)time(NULL));
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         *(matr + i * n + j) = 0;
      }
   }

   for (int i = 0; i < t; i++) {
      int m1, n1;
      m1 = rand() % m;
      n1 = rand() % n;
      ++*(matr + n * m1 + n1);
   }
   return;
}
int main() {
   int m, n;
   printf("Upisi broj redaka i stupaca");
   // m >= 5 & <=10  // n >10 & n<20;
   scanf("%d %d", &m, &n);
   int br[m][n];
   printf("Upisi broj hitaca ");
   int t;
   t = scanf("%d", &t);
   pocniGadati(m, n, &br[0], t);

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++)
         printf("%d ", br[i][j]);
      printf("\n");
   }

   getch();
   return 0;
}
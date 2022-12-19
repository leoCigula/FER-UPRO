#include <stdio.h>
int suma(int *pok, int m, int n) {
   int sum = 0;
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         sum += *(pok + i * m + j);
      }
   }
   return sum;
}
int main() {
   int m, n;
   printf("Upisi dimenzije > ");
   scanf("%d %d", &m, &n);
   int b[m][n];
   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         scanf("%d", &b[i][j]);
   int rez;
   rez = suma(b, m, n);
   printf("Suma je %d", rez);
   getch();
   return 0;
}
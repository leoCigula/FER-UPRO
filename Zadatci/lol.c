#include <stdio.h>
int main() {
   int m, n;
   printf("Unesite dimenzije:\n");
   scanf("%d %d", &m, &n);
   if (m != n)
      printf("Dimenzije ne odgovaraju kvadratnoj matrici!");
   else {
      int a[m][n];
      printf("Unesite clanove polja\n");
      for (int i = 0; i < n; i++)
         for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
      int d = 0, od = 0;
      printf("Odabrana je matrica:\n");
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            printf("%d", a[i][j]);
            if (i == j)
               d += a[i][j] * a[i][j];
            if ((m - 1 - i) == j)
               od += a[i][j] * a[i][j];
         }
      }
      printf("Razlika brojeva je %d", (d - od));
   }
   getch();
   return 0;
}

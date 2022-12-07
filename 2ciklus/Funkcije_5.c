/*
prvi u redku uvijek broj redka osim ak je 0nulti redak,a kasnije je mnozeno sa
brojem retka
*/

#include <stdio.h>
void Tablica(int m, int n) {
   for (int i = 0; i <= m; i++) {
      if (i != 0) {
         printf("%5d", i);
      } else
         printf("     ");
      for (int j = 1; j <= n; j++) {
         if (i == 0 && !(j == 0))
            printf("%5d", j);
         else
            printf("%5d", j * i);
      }
      printf("\n");
   }

   return;
}
int main() {
   int m, n;
   printf("Upisi broj redaka i stupaca > ");
   scanf("%d %d", &m, &n);
   Tablica(m, n);
   getch();
   return 0;
}
#include <stdio.h>
int main() {
   int n, t, index;
   printf("Unesite broj clanova polja:\n");
   scanf("%d", &n);
   printf("Unesite clanove polja (%d):\n", n);
   int a[n], b[n];
   for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
   printf("Unesite vrijednost novog clana te indeks:\n");
   scanf("%d %d", &t, &index);
   for (int i = 0; i < n; i++) {

      if (i >= index) {
         if (index == i)
            b[i] = t;
         else {
            b[i] = a[i - 1];
         }
      } else
         b[i] = a[i];
   }
   printf("\nPocetno polje\n");
   for (int i = 0; i < n; i++) {
      if (i != n - 1)
         printf("%d ", a[i]);
      else
         printf("%d", a[i]);
   }
   printf("\nNovodobiveno polje\n");
   for (int i = 0; i < n; i++) {
      if (i != n - 1)
         printf("%d ", b[i]);
      else
         printf("%d", b[i]);
   }
   return 0;
}

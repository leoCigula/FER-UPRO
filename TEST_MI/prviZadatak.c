// prvi n prostih,ispisi n najbliyih djeljivih sa tri
#include <math.h>
#include <stdio.h>
int main() {
   int n, t;
   do {
      printf("Upisite N > ");
      scanf("%d", &n);
   } while (n > 50 || n <= 0);
   int niz[n], prim[n], djeljiv[n], cnt, br;
   for (int i = 0; i < n; i++) {
      niz[i] = i + 1;
   }
   br = 2, cnt = 0;
   do {
      t = 0;
      for (int j = 2; j <= sqrt((double)br); j++) {
         if (br % j == 0) {
            t = 1;
            break;
         }
      }
      if (t == 0) {
         prim[cnt] = br;
         cnt++;
      }
      br++;
   } while (cnt < n);

   for (int i = 0; i < n; i++) {
      for (int j = -1; j <= 1; j++) {
         if ((prim[i] - j) % 3 == 0)
            djeljiv[i] = prim[i] - j;
      }
      printf("%d ", djeljiv[i]);
   }
   /* for (int i = 0; i < n; i++) {
       printf("%d ", prim[i]);
    }

    */
   getch();
   return 0;
}
#include <stdio.h>
int main() {

   printf("Upisite broj redaka/stupaca matrice > ");
   int n;
   scanf("%d", &n);
   int m[n][n], suma = 0;
   printf("Upisite %dx%d clanova > \n", n, n);
   for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
         scanf("%d", &m[i][j]);
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         if ((j) % 2 == 0) {
            if (n - 1 - i == j) {
               suma += m[i][j];
               if (j + 1 < n)
                  suma += m[i][j + 1];
            }
         }
      }
   }
   printf("Suma je: %d", suma);
   return 0;
}

///
#include <stdio.h>
#include <string.h>
int main() {
   char a[200], b[30];
   printf("Upisite prvi znakovni niz > ");
   fgets(a, 200, stdin);
   printf("Upisite drugi znakovni niz > ");
   fgets(b, 30, stdin);
   int t = 1, aa[255] = {0}, bb[255] = {0};
   for (int i = 0; i < strlen(a); i++) {

      if (!(a[i] < 32 || a[i] > 126 ||
            a[i] == '\0')) { // || a[i] == '\0' || a[i] == '\n')) {
         aa[(int)a[i]]++;
         if (i < strlen(b) && b[i] != '\0')
            bb[(int)b[i]]++;
      }
   }
   for (int i = 32; i <= 126; i++) {
      if (bb[i] > 0 && aa[i] == 0) {
         t = 0;
      }
   }
   if (t == 1) {
      printf("\nPrvi niz sadrzi sve znakove iz drugoga.\n");
      printf("Prvi niz: %s", a);
      printf("Drugi niz: %s", b);
   } else {
      printf("\nPrvi niz ne sadrzi sve znakove iz drugoga.\n");
      printf("Prvi niz: %s", a);
      printf("Drugi niz: %s\n", b);
   }

   return 0;
}
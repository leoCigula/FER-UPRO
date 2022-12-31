#include <stdio.h>
void negativci(int *pok, int n) {
   for (int i = 0; i < n; i++) {
      if (*pok < 0)
         printf("%d", *pok);
      pok++;
   }

   return;
}
int main() {
   int n;
   printf("Upisite broj clanova > ");
   scanf("%d", &n);
   int b[n];
   for (int i = 0; i < n; i++) {
      scanf("%d", &b[i]);
   }
   negativci(&b[0], n);
   getch();
   return 0;
}
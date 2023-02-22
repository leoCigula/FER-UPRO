#include <stdio.h>
int postaviBitove(unsigned short *pokNaBroj, int n) {
   unsigned short m = *pokNaBroj, nb;
   int j = 1;
   for (int i = 0; i < n - 1; i++) {
      j = j << 1;
      j++;
   }
   nb = m | j;
   *pokNaBroj = nb;
   int cnt = 0;

   for (int i = 0; i < n; i++) {
      if (!(m & 0x01) && (nb & 0x01)) {
         cnt++;
      }
      m = m >> 1;
      nb = nb >> 1;
   }
   return 0;
}
int main() {
   unsigned short p = 7;
   printf("%d", (p >>= 1));
   postaviBitove(&p, 3);

   getch();
   return 0;
}
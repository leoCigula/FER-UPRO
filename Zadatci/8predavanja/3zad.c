#include <stdio.h>
int main() {
   int b[32];
   int br, nbr, rem, i = 1, newbr = 0, cnt = 0;
   printf("Upisi cijeli broj > ");
   scanf("%d", &br);
   nbr = br;
   while (nbr != 0) {
      cnt++;
      rem = nbr % 2;
      nbr /= 2;
      newbr += rem * i;
      i *= 10;
   }
   printf("%d\n", newbr);
   for (int i = 0; newbr > 0; i++) {
      b[i] = newbr % 10;
      newbr /= 10;
   }

   for (int i = cnt - 1; i >= 0; i--) {
      printf("%d", b[i]);
   }
   getch();
   return 0;
}

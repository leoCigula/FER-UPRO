#include <stdio.h>
int getBit(unsigned int br, int n) {
   unsigned int og = br;
   br >>= (n);
   br = br & 0x1;
   return br;
}
void printBinary(unsigned int x) {
   int i;
   for (i = 31; i >= 0; i--)
      printf("%d", getBit(x, i));
}
int main() {
   unsigned int br;
   printf("Upisi broj ");
   scanf("%u", &br);
   printBinary(br);
   getch();
   return 0;
}
#include <stdio.h>
void getBit(unsigned int br, int n) {
   unsigned int og = br;
   br >>= (n);
   br = br & 0x1;
   printf("%d -ti bit od %u -- %u", n + 1, og, br);
   return;
}
int main() {
   unsigned int n;
   printf("Upisi nenegativan broj > ");
   scanf("%u", &n);
   int br;
   printf("Upisi br bita ");
   scanf("%d", &br);
   getBit(n, br);
   getch();
   return 0;
}
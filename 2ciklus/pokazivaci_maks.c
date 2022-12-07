#include <stdio.h>
int *maks(int *b1, int *b2) {
   int *max = b1;
   if (*b2 > *max)
      max = b2;
   return max;
}
int main() {
   int a, b, *poka = &a, *pokb = &b, *max;
   printf("Upisi 2 broja > ");
   scanf("%d %d", poka, pokb);
   max = maks(poka, pokb);
   printf("Max broj je %d", *max);
   getch();
}
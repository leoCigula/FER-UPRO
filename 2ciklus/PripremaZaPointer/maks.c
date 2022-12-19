#include <stdio.h>
int *maks(int *a, int *b) {
   if (*a > *b)
      return a;
   else
      return b;
}
int main() {
   int a, b, *pok;
   printf("Upisite dva cijela broja > ");
   scanf("%d %d", &a, &b);
   pok = maks(&a, &b);
   printf("Rezultat je %d", *pok);

   getch();
   return 0;
}
#include <stdio.h>
/*
int main(void) {
     int a = 2, x = 10;
   int *p = &a;
   x += 3 * *p;
   printf("%d %d\n", *p, x);
   getch();
   return 0;

   2 16
   */
#include <stdio.h>
int main(void) {
   int a = 10, b = 20, *c = &a, *d = &b;
   c = &b;
   d = &a;
   *c = *d + 5;
   *d = *c + 3;
   printf("%d %d %d %d\n", a, b, *c + 1, *d + 1);
   getch();
   return 0;
}

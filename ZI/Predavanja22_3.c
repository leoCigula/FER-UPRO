#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
   int xcnt = 0, ycnt = 0;
   char x[MAX], y[MAX], z;
   while ((z = getchar()) != 'X') {
      x[xcnt] = z;
      xcnt++;
   }
   x[xcnt] = '\0';
   while ((z = getchar()) != 'Y') {
      y[ycnt] = z;
      ycnt++;
   }
   y[ycnt] = '\0';
   printf("%s\n", x);
   printf("%s", y);

   getch();
   return 0;
}
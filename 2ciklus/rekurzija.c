#include <stdio.h>
int fibonacci(int n) {
   int rez;
   if (n == 1 || n == 2) {
      rez = 1;
   } else {
      rez = fibonacci(n - 1) + fibonacci(n - 2);
   }
   return rez;
}
int main(void) {
   int n, rez;
   printf("Upisite redni broj clana niza > ");
   scanf("%d", &n);
   rez = fibonacci(n);
   printf("fibonacci(%d) = %d", n, rez);
   getch();
   return 0;
}

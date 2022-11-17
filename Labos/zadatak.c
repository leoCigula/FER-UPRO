#include <conio.h>
#include <stdio.h>
int main() {
   printf("Upisite troznamenkasti prirodni broj: ");
   int a, b = 0;
   scanf("%d", &a);
   if (!(a > 99 && a < 1000)) {
      printf("Nije unesen troznamenkasti broj.");
   } else {
      b = (a % 10 * 100) + (a % 100 / 10 * 10) + (a / 100);
      printf("Broj dobiven obrnutim poretkom znamenaka broja %d je %d", a, b);
   }
   getch();
   return 0;
}
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main(void) {

   int a;
   printf("Upisi int broj a :");
   scanf("%d", &a);

   printf("%d \n", a);

   int b;
   printf("Upisi int broj b :");
   scanf("%d", &b);
   printf("%d\n", b);

   int x = a * b;
   printf("Umnozak dva broja je gej %d \n", x);

   printf("Press ANY key to Continue");
   getch();
   return 0;
}
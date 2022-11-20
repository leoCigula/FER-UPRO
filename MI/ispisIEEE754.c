#include <stdio.h>
int main() {
   float broj;
   scanf("%f", &broj);
   printf("%o\n", *(int *)&broj);

   getch();
   return 0;
}
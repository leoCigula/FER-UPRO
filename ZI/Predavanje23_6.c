#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tablMnozenja(int n);

int main() {
   printf("Upisati n > ");
   int n;
   scanf("%d", &n);
   tablMnozenja(n);

   getch();
   return 0;
}

void tablMnozenja(int n) {
   printf("Tablica mnozenja %dx%d\n", n, n);
   printf("Tablica mnozenja: %-3dx%3d\n", n, n);
   printf("     ");
   for (int i = 0; i < n; i++) {
      if (i != n - 1)
         printf("%4d", i + 1);
      else
         printf("%4d\n", i + 1);
   }
   for (int i = 0; i < n + 1; i++)
      if (i != 0)
         printf("----");
      else
         printf("----+");
   printf("\n");
   for (int i = 1; i < n + 1; i++) {
      printf("%4d!", i);
      for (int j = 1; j < n + 1; j++) {
         printf("%4d", i * j);
      }
      printf("\n");
   }
   return 0;
}
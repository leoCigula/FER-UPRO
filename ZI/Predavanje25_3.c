#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tablMnozenja(int n);

int main() {
   int n;
   do {
      printf("Upisi n > ");
      scanf("%d", &n);
   } while (!(n >= 1 && n <= 15));
   tablMnozenja(n);
   getch();
   return 0;
}

void tablMnozenja(int n) {
   char ime[] = "E:/tablica.txt", mode[] = "w+";
   FILE *tok = fopen(ime, mode);
   if (tok == NULL)
      exit(EXIT_FAILURE);
   else {
      fprintf(tok, "Tablica mnozenja %dx%d\n", n, n);
      fprintf(tok, "Tablica mnozenja: %-3dx%3d\n", n, n);
      fprintf(tok, "     ");
      for (int i = 0; i < n; i++) {
         if (i != n - 1)
            fprintf(tok, "%4d", i + 1);
         else
            fprintf(tok, "%4d\n", i + 1);
      }
      for (int i = 0; i < n + 1; i++)
         if (i != 0)
            fprintf(tok, "----");
         else
            fprintf(tok, "----+");
      fprintf(tok, "\n");
      for (int i = 1; i < n + 1; i++) {
         fprintf(tok, "%4d!", i);
         for (int j = 1; j < n + 1; j++) {
            fprintf(tok, "%4d", i * j);
         }
         fprintf(tok, "\n");
      }
   }
}

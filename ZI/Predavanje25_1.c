#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   FILE *tok;
   tok = fopen("E:/FER/SEM 1/ulaz.txt", "r");
   if (tok == NULL)
      exit(EXIT_FAILURE);
   else {
      char c;
      while (fscanf(tok, "%c", &c) == 1) {
         if (c >= 'a' && c <= 'z')
            c = c - ('a' - 'A');
         fprintf(stdout, "%c", c); // ili printf
      }
   }

   getch();
   return 0;
}
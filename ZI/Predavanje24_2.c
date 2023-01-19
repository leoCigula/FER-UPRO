#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   float ucitan;
   int rez = 1;
   do {
      rez = scanf("%f", &ucitan);
      if (rez == 1)
         printf("%6.2f\n", ucitan);
      else if (rez == EOF)
         fprintf(stderr, "Oznaka kraja datoteke");
      else {
         fprintf(stderr, "Greska kod znaka %c", getchar());
      }
   } while (rez == 1);

   getch();
   return 0;
}

// p.exe < input.txt > o.txt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_BROJ 100

void GenerirajTelefonskiBroj(char *broj) {
   while (*broj != '\n' && *broj != '\0') {
      if (*broj == 'x') {
         int x = rand() % 10 + 48;
         *broj = (char)x;
      } else
         *broj = '-';
      broj++;
   }
}

int main() {
   int seed;
   char broj[MAX_BROJ] = {'\0'};
   scanf("%d %s", &seed, broj);

   srand(seed);
   GenerirajTelefonskiBroj(broj);
   printf("%s", broj);

   getch();
   return 0;
}
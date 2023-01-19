#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
   int c, i = 0;
   char array[30 + 1];
   int brUcitanih = 0, brNR = 0;
   while (brUcitanih < 30 && (c = getchar()) != '#') {
      brUcitanih++;
      if (c == '\n')
         brNR++;
      else {
         array[i++] = c;
      }
   }
   array[i] = '\0';
   if (c == '#')
      ungetc(c, stdin);
   printf("Znakova novi red: %d\n", brNR);
   printf("%s", array);

   getch();
   return 0;
}
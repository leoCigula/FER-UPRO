#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

   int c;
   while ((c = getchar()) != EOF) {
      if (c != EOF)
         putchar(c);
   }

   getch();
   return 0;
}

// gcc ime.c -o prog.exe
// prog.exe < input.txt
// prog.exe < input.txt > out.txt

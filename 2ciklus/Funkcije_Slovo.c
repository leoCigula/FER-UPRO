#include <stdbool.h>
#include <stdio.h>
void VelikoSlovo(char c) {
   if (c >= 'A' && c <= 'Z')
      printf("Jest veliko slovo");
   else
      printf("Nije veliko slovo");
   return;
}
int main() {
   char c;
   printf("Upisite znak > ");
   scanf("%c", &c);
   VelikoSlovo(c);
   getch();
   return 0;
}
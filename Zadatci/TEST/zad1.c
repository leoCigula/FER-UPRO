#include <stdio.h>
#include <string.h>
int main() {
   char a[200], b[30];
   printf("Upisite prvi znakovni niz > ");
   fgets(a, 200, stdin);
   printf("Upisite drugi znakovni niz > ");
   fgets(b, 30, stdin);
   int t = 1, aa[255] = {0}, bb[255] = {0};
   for (int i = 0; i < strlen(a); i++) {

      if (!(a[i] < 32 || a[i] > 126 ||
            a[i] == '\0')) { // || a[i] == '\0' || a[i] == '\n')) {
         aa[(int)a[i]]++;
         if (i < strlen(b) && b[i] != '\0')
            bb[(int)b[i]]++;
      }
   }
   for (int i = 32; i <= 126; i++) {
      if (bb[i] > 0 && aa[i] == 0) {
         t = 0;
      }
   }
   if (t == 1)
      printf("Sadrzi");
   else if (t == 0)
      printf("Nope");

   getch();
   return 0;
}
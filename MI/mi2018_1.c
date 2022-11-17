#include <stdio.h>
#include <string.h>

int main() {
   char r[21];
   char mSlova[20] = {0}, vSlova[20] = {0}, mctn = 0,
        vcnt = 0; // pravilna deklaracija
   printf("Upisati niz > ");
   fgets(r, 21, stdin);
   for (int i = 0; i < strlen(r); i++) {
      if (r[i] >= 'a' && r[i] <= 'z') {
         mSlova[mctn] = r[i];
         mctn++;
      } else if ((r[i] >= 'A' && r[i] <= 'Z') || (r[i] >= '0' && r[i] <= '9')) {
         vSlova[vcnt] = r[i];
         vcnt++;
      }
   }
   printf("%d; %s\n", mctn, mSlova);
   printf("%d; %s\n", vcnt, vSlova);

   getch();
   return 0;
}
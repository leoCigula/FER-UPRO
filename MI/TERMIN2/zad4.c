#include <stdio.h>
#include <string.h>
int main() {
   char r[21], n[21] = {0};
   int t, cnt = 0;
   printf("Upisite niz > ");
   fgets(r, 21, stdin);
   printf("Upisite poziciju > ");
   scanf("%d", &t);
   if (t > strlen(r) - 1) // -1 zbog toga je jer na strlen-1 \n
      printf("Neispravna pozicija");
   else {
      for (int i = 0; i < t - 1; i++) {
         if (r[i] != '\n') {
            n[cnt] = r[i];
            cnt++;
         }
      }
      for (int i = t; i < strlen(r); i++) {
         if (r[i] >= '0' && r[i] <= '9') { // zamjenjuje znamenke
            n[cnt] = 'X';
            cnt++;
         } else if (r[i] >= 'A' && r[i] <= 'Z') { // pretvara u mala slova
            n[cnt] = r[i] + 32;
            cnt++;
         } else if (!(r[i] == '\n')) { // izbacuje ovaj kurac
            n[cnt] = r[i];
            cnt++;
         }
      }
      printf("Rezultat: %s", n);
   }

   return 0;
}
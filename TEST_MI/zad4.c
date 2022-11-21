/*
Upisi ulazni niz i ispisi izlazni sa svakim malim slovom koje je bilo upisano
*/

#include <stdio.h>
#include <string.h>

int main() {
   char ulaz[31];
   char izlaz[31] = {0};
   int mal[255] = {0}, cnt = 0;
   printf("Upisite ulazni niz > ");
   fgets(ulaz, 31, stdin);
   for (int i = 0; i < strlen(ulaz); i++) {
      if (ulaz[i] >= 'a' && ulaz[i] <= 'z') {
         mal[ulaz[i]]++;
      }
      if (mal[ulaz[i]] == 1) {
         izlaz[cnt] = ulaz[i];
         cnt++;
      }
   }

   printf("Izlaz: %s\n", izlaz);
   printf(" Ulaz: %s", ulaz);
   getch();
   return 0;
}
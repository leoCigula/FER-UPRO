#include <stdio.h>
struct Osoba {
   unsigned int MBR;
   char ime[20 + 1];
   char prezime[20 + 1];
   int godina;
};
int main() {
   FILE *tok = fopen("E:/osobe.txt", "r");
   struct Osoba o;
   while (fscanf(tok, "%u %s %s %*d.%*d.%d", &o.MBR, o.ime, o.prezime,
                 &o.godina) == 4) {
      if ((strstr(o.ime, "na") != NULL || o.godina == 1987))
         printf("%u %s %s\n", o.MBR, o.ime, o.prezime);
   }
   fclose(tok);
   getch();
   return 0;
}
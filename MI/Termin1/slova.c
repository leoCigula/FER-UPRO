/*
S tipkovnice učitati niz znakova iz jednog retka. Niz znakova ne smije biti
dulji od 10 znakova, uključujući oznaku novog retka (ako bude učitana). Oznaku
novog retka, ako postoji, ukloniti iz niza. Sva početna i završna mala slova u
riječima u nizu pretvoriti u velika. Učitava se barem jedna riječ. Riječ može
minimalno sadržavati jedan znak. Ispisati novi sadržaj niza.

Pretpostaviti da su riječi međusobno odvojene upravo jednom prazninom i da
sadrže samo slova.

Primjeri izvršavanja programa:

Unesite·niz·znakova·>·n↵
Rezultat:·N
Unesite·niz·znakova·>·niz↵
Rezultat:·NiZ
Unesite·niz·znakova·>·i·ovo·je·niz↵
Rezultat:·I·OvO·JE·N
Učitavanje i ispisivanje niza napravite na način kako je prikazano u primjerima.
*/

#include <stdio.h>
#include <string.h>

int main() {
   char r[11];
   printf("Unesite niz znakova ");
   fgets(r, 11, stdin);
   for (int i = 0; i < strlen(r); i++) {
      if ((i == 0 && (r[i] >= 'a' && r[i] <= 'z')) || (r[i - 1] == ' ') ||
          (i == strlen(r) - 1 && (r[i] >= 'a' && r[i] <= 'z')) ||
          (r[i + 1] == ' ' ||
           r[i + 1] == '\n')) // provjera za prvo te ak je upisivo sa tipk
         r[i] = r[i] - 32;
      else if (r[i] == '\n')
         r[i] = '\0';
   }
   printf("Rezultat: %s", r);
   getch();
   return 0;
}
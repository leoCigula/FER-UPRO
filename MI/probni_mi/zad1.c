/*
Zadatak 1
Brojevi bankovnih računa (int) na koje se uplaćuju iznosi u kunama (int) su iz
intervala [100000, 101000]. Na početku iznosi na svim računima trebaju biti 0
kuna.

Pretpostavlja se da će uplaćeni iznosi biti cijeli brojevi koji predstavljaju
kune (tj. nisu dopuštene uplate u lipama).

Prvo učitati broj uplata, a potom učitavati uplate u obliku parova brojeva: broj
računa i iznos uplate u kunama. Korisnik će sigurno upisati barem jedan par
brojeva. Učitavanje prekinuti onda kada se unese traženi broj uplata. Nakon toga
ispisati najveću sumu uplata po bilo kojem računu. Ispis mora biti usklađen s
oblikom ispisa prikazanim u primjeru.

Za pohranu stanja na računima koristiti polje s nazivom racuni, a za pohranu
vrijednosti ne koristiti više memorijskog prostora nego što je to nužno.

Primjer izvršavanja programa:

Upisite·broj·uplata·>·8↵
Upisujte·uplate·>↵
100015·10↵
100006·-170↵
100001·150↵
100002·230↵
100550·250↵
100015·77↵
100002·20↵
100015·30↵
Najveca·suma:·····250·kn↵
*/

#include <stdio.h>
#define GG 101000
#define DG 100000
int main() {
   int n, kn, brrac, najv;
   printf("Upisite broj uplata > ");
   scanf("%d", &n);
   int racuni[GG - DG] = {0};
   printf("Upisujte uplate >\n");
   for (int i = 0; i < n; i++) {
      scanf("%d %d", &brrac, &kn);
      racuni[brrac - 100000] += kn;
   }
   najv = racuni[0];
   for (int i = 1; i < GG - DG; i++) {
      if (racuni[i] > najv)
         najv = racuni[i];
   }
   printf("Najveca suma: %7d kn\n", najv);
   getch();
   return 0;
}

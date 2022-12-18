#include <math.h>
#include <stdio.h>
int PovecajKonvertiraj(float *placa, int bonus, float *postotak) {
   float placaKn = *placa;
   float placaEU = (placaKn + bonus) / 7.53450;
   *postotak = bonus / *placa * 100;
   *placa = placaEU;
   if ((bonus / placaKn * 100) >= 10) {
      printf("OBAVIJESTITI POREZNU!");
      return 1;
   } else
      return 0;
}
// Ne treba
int main() {
   int p = 10000, b = 550;
   float postotak;
   int i = PovecajKonvertiraj(&p, b, &postotak);
   getch();
}
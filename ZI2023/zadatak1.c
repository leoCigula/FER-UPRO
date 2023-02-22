#include <stdio.h>

float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1,
                    int indRed2) {
   float rez;
   float t;
   for (int i = 0; i < brStup; i++) {
      rez +=
          (*(polje + indRed2 * brStup + i) - *(polje + indRed1 * brStup + i));
      t = *(polje + indRed1 * brStup + i);
      *(polje + indRed1 * brStup + i) = *(polje + indRed2 * brStup + i);
      *(polje + indRed2 * brStup + i) = t;
   }
   return rez;
}
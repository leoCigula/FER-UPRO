#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct vektor_s {
   int komp_i;
   int komp_j;
};

void SumaVektora(struct vektor_s *pok, int n, struct vektor_s *rez) {
   int ki = 0, ky = 0;
   for (int i = 0; i < n; i++) {
      ki = ki + (pok + i)->komp_i;
      ky = ky + (pok + i)->komp_j;
   }
   rez->komp_i = ki;
   rez->komp_j = ky;
}
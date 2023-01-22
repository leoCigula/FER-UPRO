#include <math.h>
typedef struct {
   double x;
   double y;
} tocka_t;

tocka_t *pokNaNajblizuTocku(tocka_t *pok, int n) {
   tocka_t *min;
   double udalj, minD;
   for (int i = 0; i < n; i++) {
      udalj = sqrt(pow((pok + i)->x, 2) + pow((pok + i)->y, 2));
      if (i == 0 || udalj <= minD) {
         minD = udalj;
         min = (pok + i);
      }
   }

   return min;
}
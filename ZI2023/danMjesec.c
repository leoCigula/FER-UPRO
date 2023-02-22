#include <stdio.h>

void danMjesec(int rbrDanGodina, int *dan, int *mjesec) {
   int br[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int cntmj = 0, cntdana = 0;
   int d = rbrDanGodina, cum = 0;
   for (int i = 0; i < 12; i++) {
      if ((d - cum) <= br[i]) {
         cntmj++;
         cntdana = d - cum;
         break;
      } else {
         cntmj++;
         cum += br[i];
      }
   }
   if (cntdana == 0) {
      *dan = br[cntmj];
      if (cntmj != 12)
         *mjesec = cntmj - 1;
   }

   else {
      *dan = cntdana;
      *mjesec = cntmj;
   }
}

int main(void) {
   int i, dan, mjesec;
   for (i = 1; i < 366; i++) {
      danMjesec(i, &dan, &mjesec);
      printf("rbrDanGodina = %3d -> dan: %2d, mjesec: %2d\n", i, dan, mjesec);
   }

   getch();
   return 0;
}
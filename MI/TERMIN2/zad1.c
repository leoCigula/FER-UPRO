#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
   int br[10];
   int cnt = 0, sum = 0, num = 0;
   float arsr, ekv;
   arsr = ekv = 0;
   while (!((br[cnt - 1] == 0) || cnt == 10) || cnt == 0) {
      scanf("%d", &br[cnt]);
      if (br[cnt] != 0) {
         sum += br[cnt];
         num++;
      }
      cnt++;
   }
   if (num != 0) {
      arsr = sum / (num * 1.f);
      for (int i = 0; i < num; i++) {
         ekv += pow((br[i] * 1.f - arsr), 2);
      }
      ekv /= (num * 1.f);
      printf("%.2f, %.2f", arsr, ekv);
   } else
      printf("0.00, 0.00");
   getch();
   return 0;
}
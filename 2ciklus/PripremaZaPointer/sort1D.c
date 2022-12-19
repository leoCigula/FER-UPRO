#include <stdio.h>
void sort1D(int *pok, int silazno) {
   int len = sizeof(*pok) / sizeof(pok);
   int t;
   if (silazno) {
      for (int i = 0; i < len - 1; i++) {
         for (int j = i + 1; j < len; j++) {
            if (*(pok + j) > *(pok + i)) {
               t = *(pok + i);
               *(pok + i) = *(pok + j);
               *(pok + j) = t;
            }
         }
      }
   } else {
      for (int i = 0; i < len - 1; i++) {
         for (int j = i + 1; j <= len; j++) {
            if (*(pok + j) < *(pok + i)) {
               t = *(pok + i);
               *(pok + i) = *(pok + j);
               *(pok + j) = t;
            }
         }
      }
   }
   return;
}
int main() {
   int n;
   char s;
   printf("Upisite smjer poretka (S - silazno)");
   scanf("%c", &s);
   if (s == 'S')
      s = 1;
   else
      s = 0;
   printf("Upisite dimenziju > ");
   scanf("%d", &n);
   int br[n];
   printf("Upisite clanove > ");
   for (int i = 0; i < n; i++) {
      scanf("%d", &br[i]);
   }
   sort1D(br, s);
   for (int i = 0; i < n; i++) {
      printf("%d ", br[i]);
   }

   getch();
   return 0;
}
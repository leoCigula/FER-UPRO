#include <stdio.h>
void genPrim(int *pok, int n) {
   int br = 0, b = *pok, t;
   do {
      t = 0;
      for (int i = 2; i <= (int)sqrt((double)*pok); i++)
         if ((*pok) % i == 0) {
            t = 1;
            break;
         }
      if (t == 0) {
         printf("%d ", *pok);
         br++;
      }

      (*pok)++;
   } while (br < n);
}
int main() {
   int n = 5000;
   genPrim(&n, 4);
   getch();
   return 0;
}
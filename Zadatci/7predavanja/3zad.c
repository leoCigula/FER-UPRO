#include <stdio.h>
int main() {
   int br, t = 0;
   printf("Upisi > ");
   scanf("%d", &br);
   if (br % 2 == 0)
      t = 1;
   else {
      for (int i = 3; i <= sqrt(br * 1.f); i += 2) {
         if (br % i == 0) {
            t = 1;
            break;
         }
      }
   }
   if (!t)
      printf("%d", br);

   getch();
   return 0;
}
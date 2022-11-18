/*
Zadatak 3
S tipkovnice učitati broj točaka n (tipa int), a zatim x i y koordinate (tipa
double) za n točaka. Ispisati koordinate točaka koje su najbliže ishodištu
koordinatnog sustava (x=0.0, y=0.0). Za pohranu koordinata točaka koristiti
struct.

Primjeri izvršavnja programa:

Upisati·n·>·7↵
··1.·tocka·>·0.5·12.35↵
··2.·tocka·>·2.25·-2.0↵
··3.·tocka·>·165.1·0.5↵
··4.·tocka·>·3.0·2.0↵
··5.·tocka·>·2.0·2.25↵
··6.·tocka·>·2.25·-2.0↵
··7.·tocka·>·2.25·-2.1↵
Najblize ishodistu su tocke:↵
··2.25··-2.00↵
··2.00···2.25↵
··2.25··-2.00↵


*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   struct kord {
      double x;
      double y;
      double udaljenost;
   };
   printf("Upisati n > ");
   scanf("%d", &n);
   double min = 0;
   struct kord K[n];
   for (int i = 0; i < n; i++) {
      printf("%3d. tocka > ", i + 1);
      scanf("%lf %lf", &K[i].x, &K[i].y);
      K[i].udaljenost = sqrt(pow(K[i].x, 2) + pow(K[i].y, 2));
      if (i == 0)
         min = K[i].udaljenost;
      else {
         if (K[i].udaljenost < min)
            min = K[i].udaljenost;
      }
   }
   printf("Najblize ishodistu su tocke:\n");
   for (int i = 0; i < n; i++) {
      if (K[i].udaljenost == min) {
         if (i != n - 1)
            printf(" %5.2lf %6.2lf\n", K[i].x, K[i].y);
         else
            printf(" %5.2lf %6.2lf", K[i].x, K[i].y);
      }
   }
   return 0;
}
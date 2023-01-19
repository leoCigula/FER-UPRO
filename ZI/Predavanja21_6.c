#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_NIZ 60

void IzbaciNR(char *s);

int main() {

   FILE *izlaz = stdout, *ulaz = stdin;
   char s1[MAX_NIZ + 1], s2[MAX_NIZ + 1], s3[MAX_NIZ + 1];
   fprintf(izlaz, "Upisite 1. niz");
   fgets(s1, MAX_NIZ + 1, ulaz);
   IzbaciNR(s1);

   fprintf(izlaz, "Upisite 2. niz");
   fgets(s2, MAX_NIZ + 1, ulaz);
   IzbaciNR(s2);

   fprintf(izlaz, "Upisite 3. niz");
   fgets(s3, MAX_NIZ + 1, ulaz);
   IzbaciNR(s3);

   char *pom = NULL, *p1 = s1, *p2 = s2, *p3 = s3;
   if (strcmp(p1, p2) > 0) {
      pom = p2;
      p2 = p1;
      p1 = pom;
   }
   if (strcmp(p1, p3) > 0) {
      pom = p1;
      p1 = p3;
      p3 = pom;
   }
   if (strcmp(p2, p3) > 0) {
      pom = p2;
      p2 = p3;
      p3 = pom;
   }
   printf("%s\n%s\n%s\n", p1, p2, p3);

   int g = getchar();

   return 0;
}

void IzbaciNR(char *s) {
   // izbaci \0
   return;
}
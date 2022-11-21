#include <stdio.h>
#define MAX 10

int main(void) {
   float tezinski_prosjek = 0.f, suma_ECTS = 0.f;
   int sifStudent;

   struct {
      int sif_student;
      float ECTS;
      int ocjena;
   } rezultati[MAX];
   rezultati[0].sif_student = 1;
   rezultati[0].ECTS = 5.5f;
   rezultati[0].ocjena = 5;

   rezultati[1].sif_student = 2;
   rezultati[1].ECTS = 5.5f;
   rezultati[1].ocjena = 4;

   getch();
   return 0;
}
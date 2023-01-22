#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nulovanje(int *pok, int m, int n) {
   int max, pmm, pmn;
   int rez = 0;
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if ((i == 0 && j == 0) || (*(pok + i * n + j) >= max)) {
            max = *(pok + i * n + j);
            if (max = *(pok + i * n + j)) {
               if (i > pmm) {
                  pmm = i;
                  pmn = j;
               } else if (pmm == i) {
                  if (j < pmn) {
                     pmm = i;
                     pmn = j;
                  }
               }
            }
         }
      }
   }
   // redak
   for (int i = 0; i < n; i++) {
      rez += *(pok + (n * pmm) + i);
      *(pok + n * pmm + i) = 0;
   }
   // stupac
   for (int i = 0; i < m; i++) {
      rez += *(pok + (n * i) + pmn);
      *(pok + (n * i) + pmn) = 0;
   }
   return rez;
}
#include <math.h>
#include <stdio.h>

void stddev(float *a, int n, float *std);

int IndexOfMaxdev(float *a, int n, int m);

int main(void) {
   float M[64];
   int m;
   int n;
   int index;
   scanf("%d", &n);
   scanf("%d", &m);
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         scanf("%f", M + i * m + j);
      }
   }

   index = IndexOfMaxdev(M, n, m);
   printf("%d", index);
   getch();
   return 0;
}

void stddev(float *a, int n, float *std) {
   float mean = 0, djeljenik = 0, zbr = 0;
   for (int i = 0; i < n; i++) {
      zbr += *(a + i);
   }
   mean = zbr / (float)n;
   djeljenik = 0;
   for (int i = 0; i < n; i++) {
      djeljenik += pow(*(a + i) - mean, 2);
   }
   *std = pow((djeljenik / n), 0.5);
}

int IndexOfMaxdev(float *a, int n, int m) {
   int maxIndex = 0;
   float valueI = 0, valueMI;
   stddev(a, n, &valueMI);
   for (int i = 0; i < n; i++) {
      stddev(a + i * m, m, &valueI);
      if (i == 0 || (valueI > valueMI)) {
         valueMI = valueI;
         maxIndex = i;
      }
   }
   return maxIndex;
}

/*
1.Potrebno je napisati funkciju stddev prototipa void stddev(float *a, int n,
float *std) čiji je parametar *a pokazivač na prvi član polja, n duljina
jednodimenzijskog polja te *std pokazivač na objekt u kojeg će biti upisan
rezultat - standardna devijacij članova polja.

Funkcija treba za jednodimenzijsko polje, zadanog broja članova izračunati
standardnu devijaciju te preko pokazivača vratiti njenu vrijednost.

2.Potrebno je napisati funkciju IndexOfMaxdev prototipa int IndexOfMaxdev(float
*a, int n, int m) čiji je parametar *a pokazivač na prvi član matrice, n broj
redaka matrice te m broj stupaca matrice. Funkcija treba uz korištenje prethodno
navedene funkcije stddev vratiti indeks onog retka čiji članovi imaju najveću
standardnu devijaciju. Ako više redaka ima jednaku vrijednost standardne
devijacije, onda treba vratiti redak s manjim indeksom.

Napomena formula za standardnu devijaciju glasi:


U pozivajućoj razini je osigurana memorija za sva korištena polja.

Primjer pomoću kojeg možete testirati funkcije:

*/

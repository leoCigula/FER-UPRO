#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transponiraj(int *src, int *dst, int n, int m);

int main(void) {
   int a[64];
   int b[64];
   int n;
   int m;

   scanf("%d", &n);
   scanf("%d", &m);

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         scanf("%d", a + i * m + j);
      }
   }
   transponiraj(a, b, n, m);

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         printf("%d ", a[i * m + j]);
      }
      printf("\n");
   }
   printf("\n\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         printf("%d ", b[i * n + j]);
      }
      printf("\n");
   }
   getch();
}

void transponiraj(int *src, int *dst, int n, int m) {
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         *(dst + i * n + j) = *(src + j * m + i);
      }
   }
}

// obrnuto in + j --> jm + i

/*
Potrebno je napisati funkciju transponiraj prototipa
void transponiraj(int* src, int* dst, int n, int m) čija su oba parametra
pokazivači na prve članove polja objekata tipa int. Funkcija treba članove polja
na koje pokazuje prvi parametar premjestiti u polje na čiji prvi član pokazuje
drugi parametar takvim redoslijedom da se na kraju dobije transponirana matrica.

U pozivajućoj razini je osigurana memorija za oba polja.

Primjeri pomoću kojih možete testirati funkcije:
*/
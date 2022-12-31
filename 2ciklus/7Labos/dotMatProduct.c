#include <math.h>
#include <stdio.h>
#define MAX_DIM 32

int dot_produkt(int *a, int *b, int n);

void mat_vec_produkt(int *X, int *a, int n, int *ret);

int main(void) {
   int X[MAX_DIM * MAX_DIM], a[MAX_DIM], n, rez[MAX_DIM], i;

   scanf("%d", &n);

   for (i = 0; i < n * n; i++)
      scanf("%d", &X[i]);

   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);

   mat_vec_produkt(X, a, n, rez);

   for (i = 0; i < n; i++)
      printf("%d ", rez[i]);

   getch();
   return 0;
}
int dot_produkt(int *a, int *b, int n) {
   int rez = 0;
   for (int i = 0; i < n; i++)
      rez += (*(a + i) * *(b + i));
   return rez;
}
void mat_vec_produkt(int *X, int *a, int n, int *ret) {
   for (int i = 0; i < n; i++) {
      *(ret + i) = dot_produkt(X + i * n, a, n);
   }
}

/*
Potrebno je napisati

funkciju dot_produkt prototipa int dot_produkt (int *a, int *b, int n) čiji su
parametri *a i *b pokazivači na prve članove polja objekata tipa int, a
parametar n broj članova u tim poljima. Funkcija treba preko imena vratiti
skalarni produkt vektora a i b. funkciju mat_vec_produkt prototipa void
mat_vec_produkt(int *X, int *a, int n, int *ret) čiji su parametri *X pokazivač
na prvi član kvadratne matrice X,

*a pokazivač na vektor a,

n broj stupaca i redaka matrice X odnosno broj elemenata vektora a,

*ret pokazivač na polje pomoću kojeg funkcija vraća rezultat.

Polje ret nakon izvršavanja funkcije treba sadržavati rezultat množenja matrice
X s vektorom a. Pri množenju je potrebno koristiti funkciju dot_produkt.

U pozivajućoj razini je osigurana memorija za sva korištena polja.

Primjer pomoću kojeg možete testirati funkcije:


3x3 mat npr // 3x1 ulančane --> - 3x
*/
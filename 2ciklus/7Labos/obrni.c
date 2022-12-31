#include <math.h>
#include <stdio.h>
#include <string.h>

void obrni(char *src, char *dst);

int main(void) {
   char src[32], dst[32];

   scanf("%s", src);

   obrni(src, dst);

   printf("%s", dst);

   getch();
   return 0;
}

void obrni(char *src, char *dst) {
   for (int i = 0; i <= strlen(src); i++) {
      *(dst + i) = *(src + (strlen(src) - 1 - i));
   }
}

/*
Potrebno je napisati funkciju obrni prototipa
void obrni (char *src, char *dst)
čija su oba parametara pokazivači na prvi član polja objekata tipa char.
Funkcija treba članove iz polja na koje pokazuje prvi parametar obrnutim
redoslijedom premjestiti u polje na čiji prvi član pokazuje drugi parametar
funkcije. U pozivajućoj razini je osigurana memorija za oba polja.

Primjeri pomoću kojih možete testirati funkcije:
*/
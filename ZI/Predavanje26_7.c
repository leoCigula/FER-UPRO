#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ime[60 + 1];
char genre[10];
int godina;
int main() {
   FILE *filmovi = fopen("E:/filmovi.txt", "r");
   if (filmovi == NULL)
      exit(EXIT_FAILURE);
   else {
      printf("Success file filmovi found :) >");
      FILE *drama = fopen("E:/drama.txt", "w"),
           *kom = fopen("E:/komedija.txt", "w"), *sf = fopen("E:/SF.txt", "w");
      while (fscanf(filmovi, "%[^|]|%[^|]|%d\n", ime, genre, &godina) == 3) {
         if (strncmp(genre, "SF", 2) == 0)
            fprintf(sf, "%s, %d\n", ime, godina);
         else if (strncmp(genre, "komedija", 8) == 0)
            fprintf(kom, "%s, %d\b", ime, godina);
         else if (strncmp(genre, "drama\n", 5) == 0)
            fprintf(drama, "%s, %d", ime, godina);
         else
            printf("Zanr %s nije SF,kom ili drama", ime);
      }
      fclose(drama);
      fclose(kom);
      fclose(sf);
   }
   fclose(filmovi);

   getch();
   return 0;
}
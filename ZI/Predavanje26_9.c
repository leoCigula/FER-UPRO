#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void upis();
void ispis();
int main() {
   srand((unsigned)time(NULL));
   upis();
   ispis();

   getch();
   return 0;
}
void upis() {
   FILE *tok = fopen("E:/slucajni.bin", "w");
   if (tok == NULL) {
      printf("Nije uspjelo stvaranje datoteke");
      getch();
      exit(EXIT_FAILURE);
   } else {
      for (int i = 0; i < 50; i++) {
         int cnt = (rand() % (8 - 2 + 1)) + 2;
         fwrite(&cnt, sizeof(cnt), 1, tok);

         for (int j = 0; j < cnt; j++) {
            int rnd = rand() % (160 - 150 + 1) + 150;
            fwrite(&rnd, sizeof(rnd), 1, tok);
         }
      }
      fclose(tok);
   }
}
void ispis() {
   FILE *tok = fopen("E:/slucajni.bin", "rb");
   if (tok == NULL) {
      printf("Ne postoji datoteka");
      exit(EXIT_FAILURE);
   } else {
      int n;
      int t;
      for (int i = 0; i < 50; i++) {
         fread(&n, sizeof(int), 1, tok);
         printf("%d ", n);
         for (int j = 0; j < n; j++) {
            fread(&t, sizeof(int), 1, tok);
            if ((j + 1) == n && (i + 1) != 50)
               printf("%d\n", t);
            else
               printf("%d ", t);
         }
      }
      fclose(tok);
   }
   return;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void ispisi(char *s);

int main() {
   srand((unsigned)time(NULL));
   FILE *tok = fopen("E:/TextFiles/slova.bin", "wb");
   char putanja[30];
   if (tok == NULL) {
      printf("Something went wrong");
      exit(EXIT_FAILURE);
   } else {
      for (char i = 'A'; i <= 'Z'; i++)
         fwrite(&i, sizeof(i), 1, tok);
      for (char i = 'a'; i <= 'z'; i++)
         fwrite(&i, sizeof(i), 1, tok);
      for (char i = '0'; i <= '9'; i++)
         fwrite(&i, sizeof(i), 1, tok);
      fclose(tok);
      printf("Uspjeh!\nUpisi putanju datoteke > ");
      scanf("%s", putanja);
      int n = strlen(putanja);
      (putanja[n - 1] == '\n') ? putanja[n - 1] = '\0' : putanja[n - 1];
      ispisi(putanja);
      getch();
      return 0;
   }
}
void ispisi(char *s) {
   FILE *tok = fopen(s, "rb");
   if (tok == NULL) {
      printf("Nepostoji datoteka");
      getch();
      exit(EXIT_FAILURE);
   } else {
      printf("Otvorena datoteka > ");
      int max = (2 * ('z' - 'a') + 10);
      int i = 1;
      char zn;
      while (i <= 40 && zn != 'X') {
         fseek(tok, (rand() % max) * sizeof(char), SEEK_SET);
         fread(&zn, sizeof(char), 1, tok);
         printf("%c ", zn);
      }
      fclose(tok);
   }
}
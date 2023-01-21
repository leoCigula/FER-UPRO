#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void BrojiSamoglasnike(char *s);
void izbaciNR(char *s);

int main() {
   char ar[80];
   printf("Upisi putanju do datoteke > ");
   fgets(ar, 80, stdin);
   izbaciNR(ar);
   BrojiSamoglasnike(ar);
   getch();
}
void BrojiSamoglasnike(char *s) {
   FILE *tok = fopen(s, "r");
   char str[] = "aeiuoAEIOU", c;
   int cnt = 0;

   if (tok != NULL) {
      while (fread(&c, sizeof(char), 1, tok) == 1) {
         if (strchr(str, c) != NULL)
            cnt++;
      }
      printf("Broj samoglasnika u %s je %d", s, cnt);
   } else
      printf("Nije uspjelo otvaranje %s", s);
}

void izbaciNR(char *s) {
   for (int i = 0; i < strlen(s); i++)
      if (*(s + i) == '\n')
         *(s + i) = '\0';
}
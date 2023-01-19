#include <stdio.h>
#include <string.h>
int main() {
   /*
   strcpy(char *s1,const char *s2) -- kopira na mjesto na s1
    char ime[5 + 1];
    char niz[] = "Iva";
    strcpy(ime, niz);
    printf("%s", ime);

 */
   /*
      rezerviraj dosta mjesta jer se moze zeznut drugi char array
      char ime[3 + 1];
      char niz[] = "Ivana";
      strcpy(ime, niz);
      printf("|%s| %s", ime, niz);

      strcat(s1,s2,n) - s2 spaja na s1, n odlucuje koliko znakova \0 ide na kraj

      strcmp 0 - s1=s2 ; <0 s1<s2 >0 s1>s2

      strchr ( const char *s,int c) - vraca pokazivac na prvi znak unutar koji
      ima vrijednost c strrchr zadnja pojava strstr prva pojava podniza strpbrk
      - prva pojava bilokojeg od znakova u podnizu

   */

   int c = getc(stdin);
   return 0;
}
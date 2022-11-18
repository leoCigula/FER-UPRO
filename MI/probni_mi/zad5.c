#include <stdio.h>
int main() {
   char r[50], rec[50];
   int st = 1, end, max = 0, cnt = 0;
   printf("Niz > ");
   fgets(r, 50, stdin);
   for (int i = 1; i < 50; i++) {
      if ((r[i] != ' '))
         st = i;
      if (r[i] == ' ' || r[i + 1] == "\n" || r[i + 1] == '\t') {
         end = i;
         cnt++;
         if ((end - st + 1) > max)
            max = end - st + 1;
      }
   }
   printf("Broj rijeci: %d\n", cnt);
   for (int i = st; i < end + 1; i++)
      printf("%c", r[i]);
   getch();
   return 0;
}
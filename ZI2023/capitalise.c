#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool capitalizeName(char *name) {
   bool check = 0;
   bool rec = 0;
   if (strcmp(name, "") == 0)
      return 0;
   for (int i = 0; i < strlen(name); i++) {
      if ((i == 0 && islower(*(name + i))) ||
          (rec == false &&
           (*(name + i - 1) == '-' || *(name + i - 1) == ' '))) {
         rec = true;
         if (islower(*(name + i))) {
            check = true;
            *(name + i) += (-32);
         }
      } else if (rec) {
         if (*(name + i) == '-' || *(name + i) == ' ')
            rec = false;
         else if (isupper(*(name + i)))
            *(name + i) += 32;
      }
   }
   return check;
}
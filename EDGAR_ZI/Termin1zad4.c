#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct record {
   int code;
   int salary;
   char name[40 + 1];
};
void increaseLowest(char *fileName, int percentage) {
   FILE *tok = fopen(fileName, "r+b");
   struct record t;
   struct record min;
   int pos;
   int cnt = 0;
   while (fread(&t, sizeof(t), 1, tok) > 0) {
      if (cnt == 0 || t.salary < min.salary)
         min = t;
      cnt++;
   }
   min.salary = min.salary * (100 + percentage) / 100;
   fseek(tok, (min.code - 1) * sizeof(t), SEEK_SET);
   fwrite(&min, sizeof(min), 1, tok);
   fclose(tok);
   return;
}
char p[][7] = {{5, 73, 68, 98, 23, 70},
               {86, 13, 41, 93},
               {36, 64},
               {33, 100, 70, 24, 21, 28},
               {89, 54, 36, 87, 80, 24},
               {48, 72},
               {48, 61, 8}

};
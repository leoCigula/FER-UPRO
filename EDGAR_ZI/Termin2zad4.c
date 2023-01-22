#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record {
   int code;
   int x;
   int y;
};

_Bool txt2bin(char *inputFile, char *outputFile) {
   FILE *txt = fopen(inputFile, "r"), *bin = fopen(outputFile, "wb");
   struct record r;
   if (txt == NULL || bin == NULL)
      return 0;

   while (fscanf(txt, "%2d%3d%3d", &r.code, &r.x, &r.y) == 3) {
      fseek(bin, (long)(r.code - 1) * sizeof(r), SEEK_SET);
      fwrite(&r, sizeof(r), 1, bin);
   }
   return 1;
}
int main() {
   txt2bin("E:/TextFiles/input.txt", "E:/b.bin");
   getch();
   return 0;
}
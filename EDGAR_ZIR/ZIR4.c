#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record_s {
   int x;
   int y;
   int quadrant;
};

_Bool setQuadrants(char *fileName) {
   FILE *tok = fopen(fileName, "rb+");
   struct record_s t;
   if (tok == NULL) {
      return 0;
   }
   while (fread(&t, sizeof(t), 1, tok) == 1) {
      if (t.x > 0 && t.y > 0)
         t.quadrant = 1;
      else if (t.x < 0 && t.y > 0)
         t.quadrant = 2;
      else if (t.x < 0 && t.y < 0)
         t.quadrant = 3;
      else
         t.quadrant = 4;
      fseek(tok, -1L * sizeof(t), SEEK_CUR);
      fwrite(&t, sizeof(t), 1, tok);
      fflush(tok);
   }
   return 1;
}
#include <math.h>
#include <stdio.h>
void korijeni(unsigned int *pos) {
   unsigned int br = *pos;
   printf("%f\n", pow((double)br, (1.f / 2.f)));
   printf("%f\n", pow((double)br, 1.f / 3.f));
   printf("%f\n", pow((double)br, 1.f / 5.f));

   return;
}
int main() {
   unsigned int b, *pos = &b;
   printf("Upisi broj > ");
   scanf("%u", pos);
   korijeni(pos);
   getch();
   return 0;
}
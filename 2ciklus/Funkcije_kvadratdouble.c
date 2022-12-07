#include <stdio.h>
double kvadrat(float n) { return (n * n); }
int main() {
   float num;
   printf("Upisi broj n >");
   scanf("%f", &num);
   printf("%f  kvadrat %f", num, kvadrat(num));
   getch();
   return 0;
}
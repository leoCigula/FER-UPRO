#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Fibonacci(int n);
void IspisiFibonacci(int n);
int main() {
   printf("Upisite n brojeva fib niza u .bin >");
   int n;
   scanf("%d", &n);
   Fibonacci(n);

   IspisiFibonacci(n);

   getch();
   return 0;
}
void Fibonacci(int n) {
   FILE *tok = fopen("E:/fibonacci.bin", "wb");
   int fmin2 = 1, fmin1 = 1, f;
   for (int i = 1; i <= n; i++) {
      if (i <= 2) {
         f = 1;
         fprintf(tok, "%d ", f);
      } else {
         fmin2 = fmin1;
         fmin1 = f;
         f = fmin2 + fmin1;
         fprintf(tok, "%d ", f);
      }
   }
   fclose(tok);
}
void IspisiFibonacci(int n) {
   FILE *tok = fopen("E:/fibonacci.bin", "rb");
   int d;
   while (fscanf(tok, "%d ", &d) == 1) {
      printf("%d\n", d);
   }
   fclose(tok);
   return 0;
}
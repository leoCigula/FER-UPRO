#include <stdio.h>
unsigned long long int kvadrat(int n) { return (n * n); }
int main() {
   int n;
   printf("Upisite cijeli broj > ");
   scanf("%d", &n);
   printf("%d na kvadrat je %llu", n, kvadrat(n));
   getch();
   return 0;
}
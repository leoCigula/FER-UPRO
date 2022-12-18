#include <stdio.h>
int djelitelj(int a, int b) {
   int t = 1, min = a;
   if (min > b)
      min = b;
   for (int i = 2; i <= min; i++)
      if ((a % i == 0) && (b % i == 0))
         t = i;
   return t;
}
void reduciraj(int br, int naz) {
   int t = djelitelj(br, naz);
   int b = br / t;
   int n = naz / t;
   if (n == 1) {
      printf("Reduciran: %d", b);
   } else
      printf("Reduciran: %d/%d", b, n);
}
int main() {
   int b, n;
   printf("Upisite brojnik i nazivnik: ");
   scanf("%d %d", &b, &n);
   printf("Razlomak: %d/%d\n", b, n);
   reduciraj(b, n);
   return 0;
}
#include <stdio.h>
int kolikiJeInt(int n) { return sizeof(n); }
int main() {
   int n;
   printf("Upisi n > ");
   scanf("%d", &n);
   printf("Koliki je int : %d", kolikiJeInt(n));
   getch();
   return 0;
}
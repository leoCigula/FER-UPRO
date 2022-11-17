#include <conio.h>
#include <stdio.h>
int main() {
   char a[10];
   int size = sizeof(a) / sizeof(char);
   printf("%d", size);
   scanf("%s", &a);
   printf("%s", a);
   size = sizeof(a) / sizeof(char);
   printf("%d", size);
   getch();
}
#include <stdio.h>
#include <stdlib.h>

void IzvlacenjeLota_6_od_45(int *kombinacija);

int main() {
   int arr[6], seed;
   scanf("%d", &seed);
   srand(seed);
   IzvlacenjeLota_6_od_45(arr);

   for (int j = 0; j < 6; j++)
      printf("%d ", arr[j]);

   getch();
   return 0;
}

void IzvlacenjeLota_6_od_45(int *kombinacija) {
   for (int i = 0; i < 6; i++) {
      int x = rand() % 45 + 1;
      *(kombinacija + i) = x;
   }
   return;
}

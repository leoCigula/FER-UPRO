#include <stdio.h>
#include <string.h>
#define MAX_SEKVENCI 50
#define MAX_PRAVOKUTNIKA 25

struct pravokutnik {
   int x1, y1, x2, y2;
};
struct pravokutnik rjesenje;

int opseg(struct pravokutnik p) {
   int x = p.x1 > p.x2 ? 2 * (p.x1 - p.x2) : 2 * (p.x2 - p.x1);
   int y = p.y1 > p.y2 ? 2 * (p.y1 - p.y2) : 2 * (p.y2 - p.y1);
   return (x + y);
}
void nadiNajveciOpseg(int n, struct pravokutnik *pravokutnici) {
   for (int i = 0; i < n; i++) {
      if (i == 0 || opseg(*(pravokutnici + i)) > opseg(rjesenje))
         rjesenje = *(pravokutnici + i);
   }
   return;
}

int main() {
   int broj_pravokutnika;
   printf("Broj pravokutnika: ");
   scanf("%d", &broj_pravokutnika);

   struct pravokutnik pravokutnici[MAX_PRAVOKUTNIKA];
   printf("Unesite koordinate nasuprotnih točaka pravokutnika:\n");
   for (int i = 0; i < broj_pravokutnika; i++) {
      scanf("%d", &pravokutnici[i].x1);
      scanf("%d", &pravokutnici[i].y1);
      scanf("%d", &pravokutnici[i].x2);
      scanf("%d", &pravokutnici[i].y2);
   }

   nadiNajveciOpseg(broj_pravokutnika, pravokutnici);

   printf("Rjesenje:\n");
   printf("(%d, %d) - (%d, %d)\n", rjesenje.x1, rjesenje.y1, rjesenje.x2,
          rjesenje.y2);

   getch();

   return 0;
}

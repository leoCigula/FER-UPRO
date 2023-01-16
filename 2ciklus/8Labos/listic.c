struct listic {
   long serijski_broj;
   int odigrana_kombinacija[6];
};

struct listic dobitni;

void IzvlacenjeLota_6_od_45(int *kombinacija);

int ispitaj(struct listic *list, int *k) {
   for (int i = 0; i < 6; i++) {
      if (*(k + i) != list->odigrana_kombinacija[i])
         return 0;
   }
   return 1;
}
void ObradaIgre(struct listic *svi_listici, int N, int *izvuceni_brojevi) {
   dobitni.serijski_broj = -1;
   for (int i = 0; i < N; i++) {
      if (ispitaj(svi_listici + i, izvuceni_brojevi))
         dobitni = *(svi_listici + i);
   }

   return;
}

int main() {
   int n = 0;

   // incijalizacija varijabli
   for (int b = 0; b < 6; b++)
      dobitni.odigrana_kombinacija[b] = 0;
   struct listic igra[100];

   scanf("%d", &n); // učitaj broj listića u igri
   for (int z = 0; z < 100; z++) {
      igra[z].serijski_broj = 0;
      igra[z].odigrana_kombinacija[0] = 0;
      igra[z].odigrana_kombinacija[1] = 0;
      igra[z].odigrana_kombinacija[2] = 0;
      igra[z].odigrana_kombinacija[3] = 0;
      igra[z].odigrana_kombinacija[4] = 0;
      igra[z].odigrana_kombinacija[5] = 0;
   }

   for (int k = 0; k < n; k++) {

      scanf("%ld %d %d %d %d %d %d", &igra[k].serijski_broj,
            &igra[k].odigrana_kombinacija[0], &igra[k].odigrana_kombinacija[1],
            &igra[k].odigrana_kombinacija[2], &igra[k].odigrana_kombinacija[3],
            &igra[k].odigrana_kombinacija[4], &igra[k].odigrana_kombinacija[5]);
   }

   // izvlačenje
   int izvucenakombinacija[6], seed = 0;
   scanf("%d", &seed);
   srand(seed);
   IzvlacenjeLota_6_od_45(izvucenakombinacija);

   ObradaIgre(igra, n, izvucenakombinacija);

   if (dobitni.serijski_broj != -1) {
      printf("serijski broj dobitnog listica je: %ld\n", dobitni.serijski_broj);
      printf("dobitna kombinacija je:");
      for (int j = 0; j < 6; j++)
         printf(" %d", dobitni.odigrana_kombinacija[j]);
   } else
      printf("Nije izvucen dobitni 6!!\n");

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

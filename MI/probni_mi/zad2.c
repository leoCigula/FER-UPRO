/*
Zadatak 2
Učitati dimenzije dvodimenzijskog polja čiji redci predstavljaju gledatelje, a
stupci filmove. Jedan element polja predstavlja ocjenu koju je i-ti gledatelj
dao j-tom filmu.

0. Film	1. Film	2. Film
0. gledatelj	5	1	4
1. gledatelj	4	4	2
2. gledatelj	3	5	5
Za svakog gledatelja ispisati film kojemu je dao najveću ocjenu te ispisati
prosječnu ocjenu kojom je ocijenio filmove. Prosječnu ocjenu ispisati s 1
znamenkom iza decimalne točke.

Ako više filmova ima istu najveću ocjenu, ispisati film s manjim rednim brojem.

Primjer izvršavanja programa:

Upisite·dimenzije·dvodimenzijskog·polja·>·3·3↵
Upisite·ocjene·0.·gledatelja·>·5·1·4↵
Upisite·ocjene·1.·gledatelja·>·4·4·2↵
Upisite·ocjene·2.·gledatelja·>·3·5·5↵
0.·gledatelj·je·dao·najvecu·ocjenu·0.·filmu,·a·prosjecna·ocjena·kojom·je·ocijenio·filmove·iznosi·3.3↵
1.·gledatelj·je·dao·najvecu·ocjenu·0.·filmu,·a·prosjecna·ocjena·kojom·je·ocijenio·filmove·iznosi·3.3↵
2.·gledatelj·je·dao·najvecu·ocjenu·1.·filmu,·a·prosjecna·ocjena·kojom·je·ocijenio·filmove·iznosi·4.3↵

*/

#include <stdio.h>
int main() {
   int m, n;
   printf("Upisite dimenzije dvodimenzijskog polja > ");
   scanf("%d %d", &m, &n);
   int gl[m][n], max[m][2]; // broj br - 1br max br; 2 br index
   float arsr[m];
   for (int i = 0; i < m; i++) {
      printf("Upisite ocjene %d. gledatelja > ", i);
      max[i][1] = 0, max[i][0] = 0;
      arsr[i] = 0;
      for (int j = 0; j < n; j++) {
         scanf("%d", &gl[i][j]);
         arsr[i] += (gl[i][j] * 1.f);
         if (max[i][0] < gl[i][j]) {
            max[i][0] = gl[i][j];
            max[i][1] = j;
         }
      }
      arsr[i] /= (n * 1.f);
   }
   for (int i = 0; i < m; i++) {
      if (i != n - 1)
         printf("%d. gledatelj je dao najvecu ocjenu %d. filmu, a prosjecna "
                "ocjena "
                "kojom je ocijenio filmove iznosi %.1f\n",
                i, max[i][1], arsr[i]);
      else
         printf("%d. gledatelj je dao najvecu ocjenu %d. filmu, a prosjecna "
                "ocjena "
                "kojom je ocijenio filmove iznosi %.1f",
                i, max[i][1], arsr[i]);
   }

   getch();
   return 0;
}
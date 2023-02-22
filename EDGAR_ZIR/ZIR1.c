int izgladi(double *pok, int m, int n) {
   double br[n - 2];
   int cnt = 0;
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if (j != 0 || j != (n - 1))
            br[j - 1] = (*(pok + i * n + j) + *(pok + i * n + j - 1) +
                         *(pok + i * n + j + 1)) /
                        3;
      }
      for (int j = 1; j < n - 1; j++) {
         if (*(pok + i * n + j) != br[j - 1]) {
            *(pok + i * n + j) = br[j - 1];
            cnt++;
         }
      }
   }
   return cnt;
}

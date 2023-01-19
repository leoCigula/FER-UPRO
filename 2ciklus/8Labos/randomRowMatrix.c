void generirajSlucajniRedak(int n, int *mat) {
   int brR = rand() % n;
   for (int i = 0; i < n; i++) {
      *(mat + n * brR + i) = rand() % (8 - 2 + 1) + 2;
   }
   return;
}
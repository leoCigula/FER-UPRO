void generirajLozinku(unsigned int sjeme, const char *znakoviZaLozinku,
                      int duljLoz, char *lozinka) {
   srand(sjeme);
   int rnd;
   int len = strlen(znakoviZaLozinku);
   for (int i = 0; i < duljLoz; i++) {
      rnd = rand() % len;
      *(lozinka + i) = *(znakoviZaLozinku + rnd);
   }
   *(lozinka + duljLoz) = '\0';
   return;
}

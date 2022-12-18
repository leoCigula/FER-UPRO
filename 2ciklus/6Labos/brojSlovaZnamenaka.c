void BrojSlovaZnamenaka(char niz[], int *brojSlova, int *brojZnamenaka) {
   *brojSlova = *brojZnamenaka = 0;
   char *p = niz;
   int i = 0;
   while (!(*(p + i) == '\0' || *(p + i) == '\n')) {
      if (*(p + i) >= '0' && *(p + i) <= '9')
         (*brojZnamenaka)++;
      if ((*(p + i) >= 'a' && *(p + i) <= 'z') ||
          (*(p + i) >= 'A' && *(p + i) <= 'Z'))
         (*brojSlova)++;
      i++;
   }
   return;
}

// KASNIJE MAIN
//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
// ASCII kod tablosunu ekranda gösteren program.
int main() {
  int sayac;
  for(sayac=0; sayac<=255; sayac++) {
      printf("%d --> %c   ", sayac, (char)sayac);
      if (sayac % 8 == 0)
          printf("\n");
  }
    scanf(" ");
  return 0;
  }
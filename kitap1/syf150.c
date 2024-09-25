//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>
#include <string.h>
// girilen metnin uzunluğunu bulan program yazınız.
int main() {
  char metin[20];
  printf("metninizi girin : ");
  scanf("%s", metin);
  printf("Uzunlugu: %llu", strlen(metin));

  // Kitaptaki örnek çözüm
  int sayac;
  while(metin[sayac] != NULL)
    sayac++;
  printf("\nGirilen metin uzunlugu = %d", sayac);

  return 0;
  }
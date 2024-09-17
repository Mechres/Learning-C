//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>

int main() {
  float fiyat, indirim;
  printf("Urun fiyatini girin:    ");
  scanf("%f", &fiyat);
  printf("%f\n", fiyat);
  printf("\nIndirim oranini giriniz (Yuzdelik):    ");
  scanf("%f", &indirim);
  printf("%f\n", indirim);
  printf("\n Urunun indirimli fiyati: %.2f", fiyat-(indirim*fiyat/100));
  return 0;
  }
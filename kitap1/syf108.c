//
// Created by myagi on 22.09.2024.
//


#include <stdio.h>
// Girilen ikli sayının toplamını parametresiz ve geri değer döndürmeyen fonksiyon ile yazdır.

void toplam();

int main() {
  toplam();

  return 0;
  }

void toplam() {
  int x, y;
  printf("Deger giriniz : ");
  scanf("%d", &x);
  printf("Ikinci degeri giriniz : ");
  scanf("%d", &y);
  printf("Sonuc : %d", x+y);
  return;
}
//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
// Girilen sayının faktöriyelini parametreli ve geri değer döndüren bir fonksiyon ile yazdır.

int faktoriyel(int);

int main() {
  int x;
  printf("Bir deger giriniz : ");
  scanf("%d", &x);
  printf("Girilen degerin faktoriyeli : %d ", faktoriyel(x));
  return 0;
  }

int faktoriyel(int x) {
  int sayac, f = 1;
  for (sayac = 1; sayac <=x; sayac++){
    f=f*sayac;
  }
  return f;
}
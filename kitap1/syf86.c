//
// Created by myagi on 20.09.2024.
//
#include <stdio.h>
// fibonacci serisi
int main() {
    int ilksayi, ikincisayi, sonsayi, sayac;
    // ilk iki sayıyı 1 e eşitle
    ilksayi = 1;
    ikincisayi = 1;
    // ilk iki sayıyı yazdır
    printf("%3d%3d", ilksayi, ikincisayi);
    // for döngüsü
    for(sayac=1; sayac<9; sayac++) { // ilk 10 sayı için
        sonsayi = ilksayi + ikincisayi; // sonsayı ilk ve ikinci sayının toplamı
        printf("%3d", sonsayi); // son sayıyı yazdır
        ilksayi = ikincisayi; // ilk sayı artık ikinci sayı
        ikincisayi = sonsayi; // ikinci sayı artık sonsayı
    }
  return 0;
  }
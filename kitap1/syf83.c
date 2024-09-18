//
// Created by myagi on 19.09.2024.
//
#include <stdio.h>
// 1, ..., 10 arasındaki bütün n!/2^n değerlerininn toplamını bulan program.

int main() {
  float toplam=0, f=1,us=1, sayac;
  for (sayac=1; sayac<= 10; sayac++) {
    us=us*2;
    f=f*sayac;
    toplam=toplam+f/us;
    }
    printf("Sonuc = %5.2f\n",toplam);

  }
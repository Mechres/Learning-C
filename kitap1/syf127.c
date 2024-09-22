//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
// Bir sınıfta 20 Ogrenci bulunmaktadır. Bu ogrencilerin vize ve final notlarını iki farklı diziden alan, vizze notunun
// %40 ve final notunun %60ını alıp toplayarak başarı notlarını hesaplayan ve başarı notunu üçüncü bir diziye aktaran program
int main() {
    int sayac, vize[20], final[20], bNot[20];
    for (sayac=0; sayac < 20; sayac++) {
      printf("\nVize notunu giriniz : ");
      scanf("%d", &vize[sayac]);
      printf("\nFinal notunu giriniz : ");
      scanf("%d", &final[sayac]);
      bNot[sayac] = vize[sayac]*0.4+final[sayac]*0.6;
    }

  return 0;
  }
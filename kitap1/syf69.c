//
// Created by myagi on 18.09.2024.
//
#include <stdio.h>

// Bir derse ait üç farklı not değerini girerek ortalamasını hesap ediniz.
// Ortalama 50 değerinden büyükse geçtiniz aksi takdirde kaldınız yazdırın.

int main() {
  int x,y,z, sonuc;
  printf("Lutfen birinci sinavdan aldiginiz notu girin: ");
  scanf("%d",&x);
  printf("Lutfen ikinci sinavdan aldiginiz notu girin: ");
  scanf("%d",&y);
  printf("Lutfen ucuncu sinavdan aldiginiz notu girin: ");
  scanf("%d",&z);

  sonuc=(x+y+z) / 3;
  if (sonuc >= 50)
    printf("Not ortalamasi %d! Gectiniz!!!\n",sonuc);
  else
    printf("Not ortalamasi %d! KALDINIZ!!!\n",sonuc);

  return 0;
  }
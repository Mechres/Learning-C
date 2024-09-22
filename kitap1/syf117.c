//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

// seçilen işlem türüne göre klavyeden dairenin alanının veya çevresini hesap edecek fonksiyon

float alanCevre(float r, int tip);

int main() {
  float r;
  int tip;
  printf("Yaricapi cm cinsinden giriniz : ");
  scanf("%f", &r);
  printf("\n Alan icin 1\n Cevre icin 2 tusuna basiniz.\n Islem turu secin : ");
  scanf("%d", &tip);
  printf("Sonuc : %.2f", alanCevre(r, tip));
  return 0;
  }

float alanCevre(float yaricap, int tip) {
  float sonuc;
  if (tip == 1)
    sonuc = PI * pow(yaricap, 2);
  else
    sonuc = 2 * PI * yaricap;
  return sonuc;
}

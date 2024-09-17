//
// Created by myagi on 17.09.2024.
//

// Girilen iki nokta arasındaki euclidian uzaklığını bulan ve ekranda gösteren C programını yazınız.
#include <stdio.h>
#include <math.h>
int main(void) {
  float x1, y1, x2, y2, uzaklik;
  printf("\nBirinci (x1, y1) noktasi icin x1 koordinati giriniz:    ");
  scanf("%f", &x1);
  printf("\nBirinci (x1, y1) noktasi icin y1 koordinati giriniz:    ");
  scanf("%f", &y1);
  printf("\nIkinci (x2, y2) noktasi icin x1 koordinati giriniz:    ");
  scanf("%f", &x2);
  printf("\nIkinci (x2, y2) noktasi icin x1 koordinati giriniz:    ");
  scanf("%f", &y2);
  uzaklik = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  printf("\nIki nokta arasindaki uzaklik: %f", uzaklik);
  return 0;
  }
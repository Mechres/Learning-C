//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>

// Girilen iki değer için MİN, Max, ve AVG, fonksiyonlarını gerçekleştirerek sonuçları yazdır.
float minimum(float a, float b);
float maximum(float a, float b);
float average(float a, float b);


int main() {
  float x, y;
  printf("Ilk degeri giriniz : ");
  scanf("%f", &x);
  printf("Ikinci degeri giriniz : ");
  scanf("%f", &y);
  printf("Minimum degeri =%f\n", minimum(x, y));
  printf("Maksimum deger =%f\n", maximum(x, y));
  printf("Ortalama deger =%f\n", average(x, y));
  return 0;
  }

float minimum(float a, float b) {
  if (a < b) {
    return a;
    }
    else {
      return b;
      }
}

float maximum(float a, float b) {
  if (a > b) {
    return a;
    }

    else {
      return b;
      }

}

float average(float a, float b) {
  return (a + b) / 2.0;
}
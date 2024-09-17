//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14159265
#define RADYAN_DONUSUMU(X) PI*X/180.0

int main() {
  float a, b, alfa; // a ve b kenarlar, alfa aradaki aci
  printf("Ucgenin iki kenarini giriniz:\n");
  scanf("%f%f", &a, &b);
  printf("Iki kenar arasindaki aci degerini giriniz: ");
  scanf("%f", &alfa);
  printf("Ucgenin alani:    %.4f\n", (0.5)*a*b*sin(RADYAN_DONUSUMU(alfa)));
  return 0;
  }
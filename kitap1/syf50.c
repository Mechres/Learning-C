//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>

int main() {
  float uzunkenar, kisakenar, alan;
  printf("\n Dikdortgenin uzun kenarini metre cinsinden giriniz:    ");
  scanf("%f", &uzunkenar);
  printf("\n Dikdortgenin kisa kenarini metre cinsinden giriniz:    ");
  scanf("%f", &kisakenar);
  alan = uzunkenar * kisakenar;
  printf("\n Dikdortgenin alani = %f", alan);
  return 0;
  }


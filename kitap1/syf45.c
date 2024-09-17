//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>
#include <math.h>
int main() {
  float a, b, hipotenus;
  printf("Ucgenin dik kenarlarindan birincisini girin:    ");
  scanf("%f", &a);
  printf("\nUcgenin dik kenarlarindan ikincisini girin:    ");
  scanf("%f", &b);
  hipotenus = sqrt(pow(a, 2) + pow(b, 2));
  printf("Hipotenus deger = %f\n", hipotenus);

  return 0;
  }
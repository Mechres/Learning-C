//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>

int main() {
  float vize, final, bnotu;
  printf("Vize ve Final notunuzu girin: ");
  scanf("%f%f", &vize, &final);
  bnotu = vize * 0.4 + final * 0.6;

  if(bnotu >= 45)
    printf("\n Dersten Gectiniz!");
  else
    printf("Kaldiniz!");
  return 0;
  }
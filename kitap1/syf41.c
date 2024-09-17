//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>

int main() {

  int x, y;
  printf("Enter the first number: ");
  scanf("%d", &x);
  printf("Enter the second number: ");
  scanf("%d", &y);

  printf("Toplama = %d\n", x+y);
  printf("Cikartma = %d\n", x-y);
  printf("Carpma = %d\n", x*y);
  printf("Bolme = %f\n", (x * 1.0) / y);

  return 0;
  }
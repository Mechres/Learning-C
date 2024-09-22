//
// Created by myagi on 22.09.2024.
//

/*
    Referansa göre çağırma.
 */

#include <stdio.h>
#include <math.h>

void referensGoreKup(int*);

int main() {
  int sayi=5;
  printf("Sayinin esas degeri : %d\n", sayi);
  referensGoreKup(&sayi);
  printf("Sayinin yeni degeri : %d\n", sayi);

  return 0;
  }

void referensGoreKup(int *nPtr) {
  *nPtr=pow(*nPtr, 3);
}
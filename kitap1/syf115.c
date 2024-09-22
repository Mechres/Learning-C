//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>

// Yer değiştirme (swap) algoritmasını yerine hetiren fonksiyonu yazarak
// call by reference yöntemi ile ana programdan çağırınız

void yerdegistirme(int *, int *);

int main() {
  int a, b;
  printf("Iki deger giriniz : ");
  scanf("%d%d", &a, &b);
  printf("Fonksiyon oncesi \n A = %d, B = %d\n", a, b);
  yerdegistirme(&a, &b);
  printf("Fonksiyon sonrasi \n A = %d, B = %d\n", a, b);

  return 0;
  }

void yerdegistirme(int *a, int *b) {
  int deger = *a;
  *a = *b;
  *b = deger;
}
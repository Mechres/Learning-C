//
// Created by myagi on 22.09.2024.
//


#include <stdio.h>
// Değerleri değişken tanımı sırasında verilen bir boyutlu bir
// dizinin elemanlarını sıraya dizen ve sonucu ekranda gösteren program
void goster(int a[]);

int main() {
  int i, j, temp;
  int dizi[7] = {1, 4, 7, 3, 9, 2, 8};
  printf("Siralamadan once: ");
  goster(dizi);
  for (i = 0; i < 6; i++) {
    for (j = i+1; j < 7; j++) {
      if (dizi[i] > dizi[j]) {
        temp = dizi[i];
        dizi[i] = dizi[j];
        dizi[j] = temp;
      }
    }
  }
  printf("\nSiralamadan Sonra: ");
  goster(dizi);
  return 0;
  }

void goster(int diziA[]){
  int i;
  printf("\n");
  for (i = 0; i < 7; i++) {
    printf("%d\t", diziA[i]);
    }
}
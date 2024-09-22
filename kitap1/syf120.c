//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
#include <math.h>
// 25 elemanlı bir veri dizisi için ortalama ve standart sapmayı hesap eden bir program yazınız.

float ortalama(int toplam, int N);

int main() {
  int i, n=5, toplam=0;
  int a[n];
  float ort, standartSapma=0.;

  for (i=1; i<=n; i++) {
    printf("%2d. Sayiyi girin: ", i);
    scanf("%d", &a[i]);
    toplam=toplam+a[i];
  }
  ort=ortalama(toplam, n);
  printf("Ortalama: %f\n", ort);
  for (i=1; i<=n; i++) {
    standartSapma+=pow(a[i]-ort, 2);
  }
  printf("Standart Sapma: %6.2f\n", sqrt(standartSapma/n));

  return 0;
  }

float ortalama(int toplam, int N) {
  return toplam/N;
}
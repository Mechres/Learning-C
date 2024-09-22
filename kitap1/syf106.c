//
// Created by myagi on 22.09.2024.
//

// Dört farklı fonksiyon türüne göre toplama işlemi yapan programı kodlayınız.

#include <stdio.h>

void toplam();
void toplam2(int, int);
int toplam3();
int toplam4(int, int);

int main() {
  int a, b, sonuc;
  printf("Birinci sayi : ");
  scanf("%d", &a);
  printf("Ikinci sayi : ");
  scanf("%d", &b);
  //sonuc = toplam4(a, b);
  //printf("%d", sonuc);
  //sonuc = toplam3();
  //printf("Sonuc :  %d", sonuc);
  sonuc = toplam4(a, b);
  printf("Sonuc :  %d", sonuc);
  return 0;
  }


void toplam() {
  int a, b, sonuc;
  printf("Birinci sayi : ");
  scanf("%d", &a);
  printf("Ikinci sayi : ");
  scanf("%d", &b);
  sonuc = a + b;
  printf("Sonuc :  %d", sonuc);
}

void toplam2(int a, int b) {
  printf("%d", (a + b));
}

int toplam3() {
  int a, b, sonuc;
  printf("Birinci sayi : ");
  scanf("%d", &a);
  printf("Ikinci sayi : ");
  scanf("%d", &b);
  sonuc = a + b;
  return sonuc;
}

int toplam4(int a, int b) {
  return a + b;
}


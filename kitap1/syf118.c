//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

// Kare, kuvvet, dairenin alanı ve diskriminant hesabı yapan fonksiyonları yazarak kullanınız.

int kare(int);
float dairealan(int);
int kuvvet(int, int);
float delta(int, int, int);


int main() {
  int x, sonuc, m, a, b, c;
  printf("Bir deger giriniz :  ");
  scanf("%d", &x);
  sonuc = kare(x);
  printf("\n Sayinin karesi : %d", sonuc);
  printf("\n dairenin alani = %f", dairealan(x));
  printf("\n Lutfen kutle ve ivme degerlerini giriniz : ");
  scanf("%d%d", &m, &a);
  printf("\n Kuvvet degeri : %d", kuvvet(m, a));
  printf("\n Katsayilari giriniz : ");
  scanf("%d%d%d", &a, &b, &c);
  printf("\n Delta degeri : %f", delta(a, b, c));
  return 0;
  }


int kare(int n) {
  return n * n;
}

float dairealan(int yaricap) {
  return PI * yaricap * yaricap;
}

int kuvvet(int x, int y) {
  int kuvvet_deger;
  kuvvet_deger = x * y;
  return kuvvet_deger;
}

float delta(int x, int y, int z) {
  return sqrt(y*y-4*x*z);
}
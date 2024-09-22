//
// Created by myagi on 22.09.2024.
//


#include <stdio.h>

// Fibonacci. n degerine göre fibonacci(n) seklinde ana programdan cagri yapıldıgında sonucu ekranda goster.

void fibonacci(int);

int main() {
  int x;
  printf("Fibonacci serisi icin eleman sayisini girin :  ");
  scanf("%d", &x);
  fibonacci(x);
  return 0;
  }

void fibonacci(int x) {
  int ilksayi = 1, ikincisayi = 1, sonsayi, sayac;
  printf("\n%d\t%d\t", ilksayi, ikincisayi);
  for (sayac = 1; sayac <x-1; sayac++) {
    sonsayi = ilksayi + ikincisayi;
    printf("%d\t", sonsayi);
    ilksayi = ikincisayi;
    ikincisayi = sonsayi;
  }

  }
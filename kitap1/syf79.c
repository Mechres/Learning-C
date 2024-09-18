//
// Created by myagi on 18.09.2024.
//
#include <stdio.h>
// n değeri için n! degerini bulan program
int main() {
  int n, f=1, sayac;
  printf("Faktoriyeli alinacak sayiyi girin : ");
  scanf("%d", &n);

  for (sayac=1; sayac<=n; sayac++ ) {
    f= f*sayac;
  }
  printf("\n %d! = %d", n, f);

  return 0;
  }
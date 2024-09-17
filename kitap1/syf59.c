//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>
#define KARE(A) (A) * (A)

int main() {
  int a, b, c;
  float alan, yukseklik;
  printf("Ucgenin kenrarlarini sirasiyla giriniz: ");
  scanf("%d%d%d", &a, &b, &c);
  if(KARE(a) == (KARE(b) + KARE(c))){
    alan = (b * c) / 2;
    yukseklik = alan / a;
        }
  else if(KARE(b) == KARE(a)+KARE(c)){
          alan = (a * c) / 2;
          yukseklik = alan / b;
  }
  else if(KARE(c) == KARE(a)+KARE(b)){
    alan= (a * b) / 2;
    yukseklik = alan / c;
  }
  else{
    printf("Bu kenarlar bir dik ucgen olusturamaz!");
    alan=0;
    yukseklik=0;
  }
  printf("\nUcgenin alani= %.2f", alan);
  printf("\nUcgenin yuksekligi= %.2f", yukseklik);
  return 0;
  }
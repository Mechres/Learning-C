//
// Created by myagi on 22.09.2024.
//

/*
    Değere göre çağırma kullanılarak bir değerin küpünü almak
 */

#include <stdio.h>
#include <math.h>

int degereGoreKup(int);

int main(){
  int sayi=5;
  printf("Sayinin esas degeri :  %d\n", sayi);
  sayi = degereGoreKup(sayi);
  printf("Sayinin yeni degeri :  %d\n", sayi);

  return 0;
  }

int degereGoreKup(int n){
  return pow(n, 2);
}
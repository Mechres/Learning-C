//
// Created by myagi on 18.09.2024.
//

#include <stdio.h>

// İki sayı arasındaki bütün tek sayıları ekranda gösteren programı yazın.

int main(){
  int ilksayi, sonsayi, sayi;
  printf("Ilk sayiyi girin: ");
  scanf("%d", &ilksayi);
  printf("Son sayiyi girin: ");
  scanf("%d", &sonsayi);
  for(sayi = ilksayi; sayi < sonsayi; sayi++){
    if(sayi % 2 == 1){
      printf("%5d", sayi);
    }

    }

  return 0;
  }

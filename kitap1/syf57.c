//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>

int main() {
  int sayi;
  int dongu;
  dongu = 1;
  while(dongu){
    printf("\nSayi girin (Cikmak icin 0): ");
    scanf("%d", &sayi);
    if (sayi % 2 == 1) {
      printf("\nTek sayi");
    }
    else if (sayi == 0) {
      break;
      }
    else{
      printf("\nCift sayi");
    }
    }

  return 0;
  }
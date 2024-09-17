//
// Created by myagi on 17.09.2024.
//

#include <stdio.h>
int main() {
  int sayi;
  printf("Sayi giriniz: ");
  scanf("%d", &sayi);
  if (sayi < 0) {
    printf("Girilen Sayi NEGATIF!\n");
  }
  else if (sayi == 0) {
    printf("Girilen Sayi SIFIR!\n");
  }
  else {
    printf("Girilen Sayi POZITIF!\n");
  }
  return 0;
  }
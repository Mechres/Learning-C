//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
// Girilen ikli sayının toplamını parametresiz ve geri değer döndüren fonksiyon ile yazdır.

int toplam();
int main(){

  printf("\nSonuc = %d\n", toplam());
  return 0;
  }


int toplam(){
  int x, y;
  printf("Iki sayi girin : ");
  scanf("%d%d", &x, &y);
  return x+y;
}
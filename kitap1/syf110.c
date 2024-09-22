//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>
// Girilen iki sayının karesini parametreli ve geri değer döndürmeyen bir fonksiyon ile yazdır.

void kare(int);


int main() {
    int x;
    printf("Deger giriniz : ");
    scanf("%d", &x);
    kare(x);
    return 0;
}

void kare(int x) {
  printf("Girilen degerin karesi : %d\n", x * x);
}
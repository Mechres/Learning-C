//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
// Girilen iki sayının ortalamasını parametreli ve geri değer döndüren bir fonksiyon ile yazdır.

float ortalama(int, int);

int main() {
    int x, y;
    printf("Ilk degeri giriniz : ");
    scanf("%d", &x);
    printf("Ikinci degeri giriniz : ");
    scanf("%d", &y);
    printf("Sonuc %.2f", ortalama(x, y));
    return 0;
}
float ortalama(int a, int b) {
    return (a + b) / 2.0;
}
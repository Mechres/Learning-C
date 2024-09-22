//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
// Kitaptaki örnek hatalı!
// Grilen ondalık sistemdeki bir sayıyı ikili sisteme çeviren programı yazınız.
// Tersine Çevirme örnekte yoktu eklemedim. Şuan binary tersten yazılıyor.
int main() {
    int ondalikSayi;
    printf("Ondalik sistemde bir sayi giriniz:  ");
    scanf("%d", &ondalikSayi);
    while (ondalikSayi > 0) {
        printf("\%2d", ondalikSayi%2);
        ondalikSayi = ondalikSayi / 2;
    }
    printf("\%2d", ondalikSayi%2);
    return 0;
}
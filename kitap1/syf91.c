//
// Created by myagi on 22.09.2024.
//


#include <stdio.h>

// Grilen ondalık sistemdeki bir sayıyı sekizli sisteme çeviren programı yazınız.
// syf90.c kodunun aynisi
int main() {
    int ondalikSayi;
    printf("Ondalik sistemde bir sayi giriniz:  ");
    scanf("%d", &ondalikSayi);
    while (ondalikSayi > 7) {
        printf("%2d", ondalikSayi%8);
        ondalikSayi = ondalikSayi / 8;
    }
    printf("%2d", ondalikSayi%8);
    return 0;
}
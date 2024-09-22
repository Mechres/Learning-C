//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>
#include <math.h>
// 10 adet ogrencinin başarı notu girilmiş olup ortalamadan yükjsek nota sahip olanlar
// icin Gecti düşük olanlar için kaldı mesajını veren program
int main() {
    int sayac, bNot[10], toplam=0;
    float ortalama;
    char *isim[10] = {"Veli Erkoc", "Ahmet Kalin", "Ayse Emre", "Nihat Serin", "Merve Pinar", "Nazli Aycan",
                        "Hidayet Takci", "Ahmet Gurkan", "Rana Ozyigit", "Hasan Celik"};
    for (sayac = 0; sayac < 10; sayac++) {
        printf("%s Adli kisinin\n", isim[sayac]);
        printf("Basari notunu giriniz : ");
        scanf("%d", &bNot[sayac]);
        toplam=toplam+bNot[sayac];
    }
    ortalama=toplam/10;
    for (sayac = 0; sayac < 10; sayac++) {
        if((bNot[sayac])>=ceil(ortalama)) {
            printf("%s\tGECTI\n", isim[sayac]);
        }
        else {
            printf("%s\tKALDI\n", isim[sayac]);
        }
    }
  return 0;
  }
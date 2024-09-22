//
// Created by myagi on 22.09.2024.
//


#include <math.h>
#include <stdio.h>
// 5 Elemanlı bir tamsayı dizisi tanımlayıp elemanlarını n!/2^n degeriyle doldurunuz ve bu degerleri ekrana yazdırınız.
int faktoriyel(int);

int main() {
    int sayac, dizi[5]={1,6,3,4,5};
    float hesap;
    for(sayac=0; sayac<5; sayac++) {
        hesap=faktoriyel(dizi[sayac])/pow(2,dizi[sayac]);
        printf("%.2f\n",hesap);
    }

    return 0;
  }

int faktoriyel(int sayi) {
    int faktor=1;
    do {
        faktor*=sayi;
        sayi-=1;
    }while(sayi>0);
    return faktor;
}
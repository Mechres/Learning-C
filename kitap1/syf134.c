//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>
#include <math.h>
// Elelmanları girilen bir sayı dizisi için dizi aritmetik ortalaması ve
// dizi standart sapmasını hesaplayan ve sonuçları ekrana yazan program.
int main(){
	int boyut, i;
	float xOrt, xToplam=0., farkToplam=0., varyans;
	printf("Dizinin eleman sayisini girin : ");
	scanf("%d",&boyut);
	float diziA[boyut];
	for(i=0;i<boyut;i++) {
		printf("diziA[%d] = ",i+1);
		scanf("%f",&diziA[i]);
		xToplam += diziA[i];
	}
	xOrt=xToplam/boyut;

	for(i=0;i<boyut; i++) {
		farkToplam+=pow(diziA[i]-xOrt, 2);
	}
	varyans=sqrt(farkToplam/boyut-1);

	printf("\nDizi Aritmetik ortalama = %.2f", xOrt);
	printf("\nDizi Standart sapma = %.2f", varyans);
  return 0;
  }
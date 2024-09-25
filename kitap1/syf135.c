//
// Created by myagi on 23.09.2024.
//

#include <stdio.h>
#include <math.h>
// Euclidian uzayında 5 adet vektörün bileşenleri girilmektedir. Bileşke vektörünün bileşenleri ve boyutunu hesaplayan ve de sonuçları gösteren program

int main() {
	int sayac, boyut=5;
	float X[boyut], Y[boyut], kenar_X=0., kenar_Y=0.;
	printf("Vektor degerleri girisi (x + iy)");
	for (sayac=0; sayac < boyut; sayac++) {
		printf("\n%d. Vektorun X bilesenini giriniz: ", sayac+1);
		scanf("%f", &X[sayac]);
		printf("\n%d. Vektorun Y bilesenini giriniz: ", sayac+1);
		scanf("%f", &Y[sayac]);
		kenar_X += X[sayac];
		kenar_Y += Y[sayac];
	}

	printf("Vektor = %.2f + i %.2f\n", kenar_X, kenar_Y);
	printf("Vektor Boyu = %.2f birim.", sqrt(pow(kenar_X, 2) + pow(kenar_Y, 2)));
  return 0;
  }
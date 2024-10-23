#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double *kareKokHesapla(double *, int);


int main(){
	double diziA[6] = {1.0, 2.0, 3.0, 6.0, 8.0, 16.0};
	double *diziB;
	int i;


	printf("DiziA Elemanlari : ");
	for(i=0; i<6; i++)
		printf("%.3f, ", diziA[i]);
	printf("\n");

	diziB = kareKokHesapla(diziA, 6);

	printf("DiziB Elemanlari : ");
	for(i=0; i<6; i++)
		printf("%.3f", diziB[i]);
	printf("\n");


	return 0;
}


double *kareKokHesapla(double *dizi, int boyut){
	int i;
	static double *gecici;
	gecici = (double *) calloc(boyut, sizeof(double));
	if(gecici=NULL){
		return NULL;
	}
	for(i=0; i<boyut; i++)
		gecici[i] = sqrt(dizi[i]);
	return gecici;
}

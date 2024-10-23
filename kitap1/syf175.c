#include <stdio.h>


double fonk(double);
double turev(double (*)(double), double);
3

int main(){
	double y=1.1;
	printf("Fonksiyon Y = %.31f deki degeri = %.31f\n", y, fonk(y));
	printf("Fonksiyon Y = %.31f deki turevi = %.31f\n", y, turev(fonk, y));
	return 0;
}


double fonk(double y){
	return y*y*y-2*y+5.;
}

double turev(double (*fonk)(double y), double y){
	double h=1.0e-3;
	return (fonk(y+h)-fonk(y-h))/(2*h);
}

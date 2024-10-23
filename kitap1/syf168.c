#include <stdio.h>

int main(){
	int sayi=1283;

	int *sayiPtr;
	sayiPtr = &sayi;
	printf("sayiPtr = %p", sayiPtr);
	printf("\n&sayi = %p", &sayi);
	printf("\nsayiPtr = %d", *sayiPtr);
	printf("\nsayi = %d", sayi);
	
	*sayiPtr = 2077;
	printf("\nsayiPtr = %p", sayiPtr);
	printf("\n&sayi = %p", &sayi);
	printf("\nsayiPtr = %d", *sayiPtr);
	printf("\nsayi = %d", sayi);


	printf("\n&sayiPtr = %p\n", &sayiPtr);
	return 0;
}

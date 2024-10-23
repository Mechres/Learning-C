#include <stdio.h>



int main(){
	int sayi, *sayiPtr;
	sayiPtr = &sayi;
	printf("sayi degiskeni icin bellekte ayrilan adres = %d", sayiPtr);
	printf("\n bir deger giriniz : ");
	scanf("%d", sayiPtr);
	printf("\nSayi degiskeni icin deger = %d", sayi);
	*sayiPtr = sayi+10;
	printf("\nsayi degiskeni icin son deger = %d", sayi);
	return 0;

}

#include <stdio.h>

void referansaGoreKup(int*);


int main(){
	int sayi=5;
	printf("sayinin esas degeri = %d\n", sayi);
	referansaGoreKup(&sayi);
	printf("\nSayinin yeni degeri = %d\n", sayi);
	
	return 0;
}



void referansaGoreKup(int *nPtr){
	*nPtr = *nPtr * * nPtr;
}

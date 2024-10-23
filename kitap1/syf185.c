#include <stdio.h>


struct complex{
	int Re;
	int Im;
}A, B;


int main(){
	int i, j;
	printf("A komplex sayisi icin deger giriniz : ");
	scanf("%d %d", &A.Re, &A.Im);
	printf("B komplex sayisi icin deger giriniz : ");
	scanf("%d %d", &B.Re, &B.Im);
	i = A.Re * B.Re - A.Im * B.Im;
	j = A.Re * B.Im + A.Im * B.Re;
       	printf("A*B = %d + %di", i, j);	
	return 0;
}

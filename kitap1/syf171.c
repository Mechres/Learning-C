#include <stdio.h>


int main(){
	int say=5, say1=12;
	int *ptr, *ptr1;

	ptr=&say;
	ptr1=&say1;
	printf("1. DEGISKENIN ADRESI  = %d\n", ptr);
	printf("1. DEGISKENIN ICERIGI = %d\n", *ptr);
	printf("2. DEGISKENIN ADRESI  = %d\n", ptr1);
	printf("2. DEGISKENIN ICERIGI = %d\n", *ptr1);
	printf("ADRESLER ARASI FARK   = %d\n", ptr-ptr1);
	
	
	printf("****************************\n");
	
	
	ptr1=ptr;
	printf("1. DEGISKENIN ADRESI  = %d\n", ptr);
	printf("2. DEGISKENIN ADRESI  = %d\n", ptr1);
	printf("ADRESLER ARASI FARK   = %d\n", ptr-ptr1);


	return 0;





}

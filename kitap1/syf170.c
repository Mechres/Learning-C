#include <stdio.h>

int main(){
	int dizi[] = {45, 67, 89};
	int *dizi_Ptr;
	dizi_Ptr = dizi;
	printf("ilk eleman	: %d\n", *(dizi_Ptr++));
	printf("ikinci  eleman	: %d\n", *(dizi_Ptr++));
	printf("ucuncu eleman   : %d\n", *dizi_Ptr);


	return 0;
}

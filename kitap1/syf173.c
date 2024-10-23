#include <stdio.h>



int main(){
	int dizi[4][3] = {2, 4, 1, 9, 8, 7, 3, 5, 2, 8, 6, 2};
	int satir, sutun, *p;
	p = &dizi[0][0];
	printf(" ***  dizinin normal hali *** \n");
	for(satir=0; satir<4; satir++){
		printf(" | ");
		for(sutun=0; sutun<3; sutun++){
			printf("%d ", dizi[satir][sutun]);
		}
		printf(" | \n");
		
	}
	printf("\n\n");
	printf(" *** Dizinin transpose hali *** \n\n");
	for(satir=0; satir<3; satir++){
		printf(" | ");
		for(sutun=0; sutun<4; sutun++){
			printf("%d ", *(p+(sutun*3 + satir)));
		}
		printf(" | \n");
	
	}


	return 0;
}

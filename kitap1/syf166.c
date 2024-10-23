#include <stdio.h>


char metin[10];
int i = 0;


int main(){
	int i;
	int dizi[4] = {10, 20, 30, 40};
	for(i = 0; i<4; i++){
		printf("\n %d", dizi[i]);
		printf(" --> %d", &dizi[i]);
		printf(" --> %d", dizi+i);
	}



	return 0;
}

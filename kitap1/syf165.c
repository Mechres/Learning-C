#include <stdio.h>


char metin[10];
int i=0;

int main(){
	int i = 5;
	double d = 3.1415925;
	int *pInt = &i;
	printf("\nint i degiskeninin degeri i = %d", i);
	printf("\nint i degiskeninin degeri i = pInt = %d", *pInt);
	printf("\ndouble d degiskeninin degeri d = %.7f ", d);
	pInt=(int*)&d;
	printf("\n double d degiskeninin degeri d = *pInt = %.2f", *pInt);
	printf("\n double d degiskeninin degeri d = *(double *)pInt = %.7f", *(double *)pInt);
	return 0;
}

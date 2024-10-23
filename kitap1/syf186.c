#include <stdio.h>
#include <math.h>
#include <string.h>

struct sinif{
	char isim[15];
	int vize;
	int final;
	float bNot;
};

struct sinif fonk(void);

int main(){
	struct sinif kisi;
	kisi=fonk();
	printf("\n Isim  : %s", kisi.isim);
	printf("\n Vize  : %d", kisi.vize);
	printf("\n Final : %d", kisi.final);
	printf("\n Basari : %3.0f", kisi.bNot);
	return 0;
}

struct sinif fonk(void){
	struct sinif a;
	strcpy(a.isim, "Yagiz Y");
	a.vize = 86;
	a.final = 92;
	a.bNot = ceil(a.vize*0.4+a.final*0.6);
	return(a);
}

#include <stdio.h>

int elemanSayi;


struct sinif{
	char isim[15];
	int vize;
	int final;
	float bNot;
};

void verigiris(struct sinif s[]);
void verigoster(struct sinif s[]);
float ortalama(struct sinif s[]);

int main(){
	printf("Eleman sayisi giriniz : ");
	scanf("%d", &elemanSayi);
	struct sinif kisi[elemanSayi];
	verigiris(kisi);
	verigoster(kisi);
	printf("\n Sinif ortalamasi = %5.2f", ortalama(kisi));


	return 0;
}


void verigiris(struct sinif s[]){
	int i;
	printf("Girilecek Bilgiler : ");
	for(i = 0; i < elemanSayi; i++){
		printf("\n%3d. Adi: ", i+1);
		scanf("%s", &s[i].isim);
		printf("\n%3d. Vize : ", i+1);
		scanf("%d", &s[i].vize);
		printf("\n%3d. Final : ", i+1);
		scanf("%d", &s[i].final);
		s[i].bNot=s[i].vize*0.4+s[i].final*0.6;
	}
	return;
}

void verigoster(struct sinif a[]){
	int i;
	printf("\nGirilen bilgiler: ");
	for(i=0; i<elemanSayi; i++){
		printf("\nAd = %s", a[i].isim);
		printf("\nVize = %d	Final = %d", a[i].vize, a[i].final);
	}
}


float ortalama(struct sinif s[]){
	int i;
	float toplam=0.0, ort;
	for(i=0; i<elemanSayi; i++){
		toplam=toplam+s[i].bNot;
		ort=toplam/elemanSayi;
	}
	return ort;
}

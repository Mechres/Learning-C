#include <stdio.h>

struct ayritlar{
	int kisaKenar;
	int uzunKenar;
};

int alan(struct ayritlar dikdortgen);

int main(){
	struct ayritlar sekil;
	int sonuc;
	printf("Dikdortgenin kisa kenarini cm cinsinden giriniz : ");
	scanf("%d", &sekil.kisaKenar);
	printf("Dikdortgenin uzun kenarini cm cinsinden giriniz : ");
	scanf("%d", &sekil.uzunKenar);
	sonuc = alan(sekil);
	printf("\nDikdortgenin alani = %d cm2dir", sonuc);
	return 0;
}

int alan(struct ayritlar cizim){
	return cizim.kisaKenar*cizim.uzunKenar;
}

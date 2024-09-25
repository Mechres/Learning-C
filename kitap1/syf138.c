//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>
// Elemaları girilen bir sayı dizisi için en büyük ve en küçük elemanı bulan program.

int main(){
	int i, boyut, enb, enk;
	printf("Dizinin eleman sayisini girin : ");
    scanf("%d", &boyut);
    int dizi[boyut];

    for (i = 0; i < boyut; i++) {
		printf("Dizi[%d]: ", i+1);
		scanf("%d", &dizi[i]);
    }
    printf("Dizi elemanlari : \n");
    for (i = 0; i < boyut; i++) {
      printf("%d ", dizi[i]);
      }
    enk=dizi[0];
    enb=dizi[0];
    for (i = 0; i < boyut; i++) {
      if(dizi[i]>enb)
        enb=dizi[i];
      if(dizi[i]<enb)
        enk=dizi[i];
      }

    printf("\nEn kucuk eleman : %d", enk);
    printf("\nEn buyuk eleman : %d", enb);


  return 0;
  }
//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>

// Değerleri değişken tanımı sırasında verilen tek boyutlu bir dizinin
// elemanları arasında doğrusal arama yöntemi ile bulup sırasını yazdıran program
int main() {
  int i, sayac, aranan, konum=0;
  int dizi[7]={12, 34,117,65,99,250,801};

  printf("Aranan dizi elemani : ");
  scanf("%d",&aranan);
  for(sayac=0; sayac<7; sayac++){
    if(aranan==dizi[sayac]) {
      konum=sayac+1;
      printf("%d dizinin %d.elemanidir. ",aranan, konum);
      goto A;
    }
    }
  printf("\nAranan eleman dizide bulunmamaktadir...");
  A:
  return 0;
  }
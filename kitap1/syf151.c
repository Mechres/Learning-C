//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>
#include <string.h>

// Klavyeden girilen metni tersten yazdıran program.

int main() {
	char metin[20];
    int sayac, uzunluk;
    printf("Metin girin: ");
    scanf("%s", metin);
    uzunluk = strlen(metin);
    for (sayac = uzunluk-1; sayac >= 0; sayac--) {
      printf("%c", metin[sayac]);
    }


  return 0;
  }
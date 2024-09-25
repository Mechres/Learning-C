//
// Created by myagi on 25.09.2024.
//
#include <stdio.h>
#include <string.h>
// Metinde yer alan noktalama işaretlerine dayalı olarak, metnin kaç kelime,
// kaç cümle ve kaç paragraf içerdiğini bulan program
int main() {
  char metin[250];
  int sayac, uzunluk, paragraf=0, cumle=0, kelime=0;
  printf("Metin giriniz: ");
  gets(metin);
  uzunluk=strlen(metin);
  for (sayac=0; sayac<uzunluk; sayac++) {
    if(metin[sayac]==13)
      paragraf++;
    if(metin[sayac]=='.')
      cumle++;
    if(metin[sayac]==' ')
      kelime++;
  }
  printf("\nParagraf sayisi: %d", paragraf);
  printf("\nCumle sayisi: %d", cumle);
  printf("\nKelime sayisi: %d", kelime+1);
  return 0;
  }


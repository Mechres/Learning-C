//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>
#include <conio.h>
// ESC Tuşu basılana kadar metin girişine müsaade eden, ESC basıldığında kaç adet cümle,
// kelime, karakter girildiğini ekrana yazdıran program.

int main() {
  int cumle=0, kelime=0, karakter=0;
  char ch=' ';
  printf("Metin giriniz : \n");
  ch=getche();
  while(ch!=27) { // esc harici bütün karakterleri say
    karakter++;
    if(ch=='.') // cümle ayracı nokta
      cumle++;
    else if(ch==' ') // kelime ayracı boşluk
      kelime++;
    else        // devam eden veri girdisi
      ch=getche();
  }
  printf("karakter = %d", karakter);
  printf("kelime = %d", kelime);
  printf("cumle = %d", cumle);
  getch();
  return 0;
  }
//
// Created by myagi on 20.09.2024.
//

#include <stdio.h>
// Sıfır değeri girilene kadar veri alıp, girildikten sonra ortalama değeri hesap ederek sonucu yazdıran program.
int main() {
  int sayi, i=0, toplam=0;
  printf("Sayi giriniz : ");
  scanf("%d", &sayi);
  while(sayi!=0) {
    toplam=toplam+sayi;
    i++;
    printf("Sonraki sayi : ");
    scanf("%d", &sayi);
  }
  float ortalama=(float)toplam / i;
  printf("Ortalama deger : %.2f ", ortalama);

  return 0;
  }

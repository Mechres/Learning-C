//
// Created by myagi on 19.09.2024.
//

#include <stdio.h>
// girilen beş sayı için sayıların en büyüğünü, en küçüğünü,
// sayılar toplamını ve ortalamasını bul

int main() {
  int x, eb=0, ek=10001, sayac, toplam=0;
  float ortlama;
  printf("\n[Lutfen 1 ile 10000 arasinda sayilar giriniz]\n\n");
  for (sayac=1; sayac<=5; sayac++) {
    printf("%d. Sayiyi giriniz : ", sayac);
    scanf("%d",&x);
    if ((x > 10000) || (x < 1)) continue;
    if (x>eb) eb=x;
    if (x<ek) ek=x;
    toplam=toplam+x;
  }
  printf("\n Girilen en buyuk sayi        = %d", eb);
  printf("\n Girilen en kucuk sayi        = %d", ek);
  printf("\n Girilen sayilarin toplami    = %d", toplam);
  printf("\n Girilen sayilarin ortalamasi = %5.2f", toplam/5.);
  return 0;
  }
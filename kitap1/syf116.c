//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>

// Mükemmel sayı fonksiyonunu yazarak, girilen bir değere kadar olan
// değerler arasında yer alan mükemmel sayı değerleri ekranda gösteren bir programı yazınız.

int mukemmelSayi(int sayi);

int main() {
  int n, sayac;
  printf("Bir deger giriniz : ");
  scanf("%d", &n);
  printf("\n %d degerine kadar olan Mukemmel Sayilar : \n\n\t", n);
  for (sayac = 1; sayac <= n; sayac++) {
    if (sayac == mukemmelSayi(sayac)) {
      printf("%d\t", sayac);
    }
  }
  return 0;
  }


int mukemmelSayi(int sayi) {
  int i, toplam = 0;
  for (i = 1; i < sayi; i++) {
    if (sayi % i == 0) {
      toplam += i;
    }
  }
  return (toplam == sayi) ? sayi : 0;
}
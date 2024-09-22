//
// Created by myagi on 22.09.2024.
//

#include <stdio.h>

// Girilen iki sayı ve bir işlem koduna göre dört işlemi fonksiyonlar ile yapın.

void toplama(int, int);
void cikarma(int, int);
void carpma(int, int);
void bolme(int, int);

int main() {
  int x, y;
  char islem, devam='e';
  while (devam=='e') {
    printf("\nIlk sayiyi giriniz :  ");
    scanf("%d", &x);
    printf("\nIkinci sayiyi giriniz : ");
    scanf("%d", &y);
    printf("\nIslem kodunu giriniz (+ - / *)");
    scanf("%c", &islem);
    scanf("%c", &islem);
    switch (islem) {
      case '+':
        toplama(x, y);
        break;
      case '-':
        cikarma(x, y);
        break;
      case '*':
        carpma(x, y);
        break;
      case '/':
        bolme(x, y);
        break;
      default:
        printf("\nHatali islem kodu!");
      }
    printf("\nDevam etmek istiyor musunuz? e/h : ");
    scanf("%c", &devam);
    scanf("%c", &devam);
    }


  }


void toplama(int x, int y) {
  printf("\n%d", x + y);
}
void cikarma(int x, int y) {
  printf("\n%d", x - y);
}
void carpma(int x, int y) {
  printf("\n%d", x * y);
}
void bolme(int x, int y) {
  printf("\n%f", (x*1.0 / y));
}
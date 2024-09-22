//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>


// Klavyeden girilen bir sayıyı ekrana tersten yazdıran bir program yazınız.

int main() {
    int n;
    printf("Sayi giriniz: ");
    scanf("%d", &n);
    while(n>9){
      printf("%d", n%10); //  n % 10 işlemi, sayının son basamağını verir. Bu, 10'a bölümünden kalandır.
      n=n/10; //  n = n / 10 işlemi. Bu, sayının son basamağını atar ve sayıyı bir basamak küçültür.
      }
    printf("%d", n);

  return 0;
  }
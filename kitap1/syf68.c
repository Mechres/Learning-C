//
// Created by myagi on 18.09.2024.
//

// 0 - 15 aralığındaki değerler için olnuk sayı onaltılık sayı dönüşümü switch case
#include <stdio.h>

int main() {
    int sayi;
    printf("Sayi girin: ");
    scanf("%d", &sayi);
    switch (sayi) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        printf("%d --> %d\n", sayi, sayi);
        break;
      case 10:
        printf("%d --> A\n", sayi);
        break;
      case 11:
        printf("%d --> B\n", sayi);
        break;
      case 12:
        printf("%d --> C\n", sayi);
        break;
      case 13:
        printf("%d --> D\n", sayi);
        break;
      case 14:
        printf("%d --> E\n", sayi);
        break;
      case 15:
        printf("%d --> F\n", sayi);
        break;
      default:
        printf("Hatali Giris!\n");
        break;
      }
  }
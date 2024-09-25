//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>

// Bir metni farklı yöntemlerle ekrana yazdır

int main() {
  char dizi[7] = {'S', 'e', 'l', 'a', 'm', '!', '\0'};
  int i;
  printf("Dizi: ");
  for (i = 0; i < 7; i++){
  	printf("dizi[%d] : %c\n",i , dizi[i]);
  }

  for (i = 0; i < 7; i++){
    printf("%c",dizi[i]);
  }

  printf("\n %s", dizi);
  return 0;
  }
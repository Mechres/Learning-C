//
// Created by myagi on 22.09.2024.
//
#include <stdio.h>
// İki boyutlu bir dizi oluşturarak dizi elemanlkarını dizi indislerinin çarpımından elde
// ediniz ve bu değerleri iki boyutlu bir dizi gibi ekrana yazdırınız. (a ij = i*j)
int main() {
  int i, j;
  int DiziA[5][5];
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      DiziA[i][j] = (i+1)*(j+1);
      printf("%2d  ", DiziA[i][j]);
    }
    printf("\n");
  }

  return 0;
  }


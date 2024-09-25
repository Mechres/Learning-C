//
// Created by myagi on 25.09.2024.
//

#include <stdio.h>

// Girilen mxn  boyutlu bir matris için satır ve sütun toplamlarını elede ederek sırasıyla yazdır.

int main() {
	int i, j, satir_toplam, sutun_toplam;
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (i = 0; i < 3; i++) {
      satir_toplam = 0;
      for (j = 0; j < 3; j++) {
      	satir_toplam += A[i][j];
      }
      printf("%d. satir_toplam = %d\n", i+1, satir_toplam);
    }
    for (j = 0; j < 3; j++) {
      sutun_toplam = 0;
      for (i = 0; i < 3; i++) {
        sutun_toplam += A[i][j];
        }
      printf("%d sutun_toplam = %d\n",j+1, sutun_toplam);
    }


  return 0;
  }